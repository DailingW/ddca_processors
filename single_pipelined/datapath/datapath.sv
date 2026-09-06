module datapath(input  logic        clk, reset,
                input  logic [1:0]  RegSrcD,
                input  logic        RegWriteW,
                input  logic [1:0]  ImmSrcD,
                input  logic        ALUSrcE,
                input  logic [1:0]  ALUControlE,
                input  logic        MemtoRegW,
                input  logic        PCSrcW,
                input  logic        BranchTakenE,
                input  logic [1:0]  FwdAE, FwdBE,
                input  logic        stallF, stallD,
                input  logic        flushD, flushE,
                output logic [3:0]  RA1D, RA2D, RA1E, RA2E,
                output logic [3:0]  A3E, A3M, A3W,
                output logic [3:0]  ALUFlagsE,
                output logic [31:0] PCF,
                input  logic [31:0] InstrF,
                output logic [31:0] InstrD,
                output logic [31:0] ALUResultM, WriteDataM,
                input  logic [31:0] ReadData);

  logic [31:0] PCNextF, PCNextNormalF, PCPlus4F, PCPlus8D, ResultW;
  logic [31:0] ALUResultE;
  
  // next PC logic
  mux2 #(32)  pcmux(PCPlus4F, ResultW, PCSrcW, PCNextNormalF);
  mux2 #(32)  branchmux(PCNextNormalF, ALUResultE, BranchTakenE, PCNextF);
  flopenr #(32) pcreg(clk, reset, ~stallF, PCNextF, PCF);
  adder #(32) pcadd1(PCF, 32'b100, PCPlus4F);

  // While InstrD is in decode, PCF has advanced by one word, so PCPlus4F
  // is the architectural PC+8 value seen when decode reads R15.
  assign PCPlus8D = PCPlus4F;

  flopenrc #(32) decodeReg_Instr(clk, reset, ~stallD, flushD, InstrF, InstrD);

  logic [31:0] ExtImmD, RD1D, RD2D;

  // register file logic
  mux2 #(4)   ra1mux(InstrD[19:16], 4'b1111, RegSrcD[0], RA1D);
  mux2 #(4)   ra2mux(InstrD[3:0], InstrD[15:12], RegSrcD[1], RA2D);
  regfile     regfile_inst(clk, RegWriteW, RA1D, RA2D,
                           A3W, ResultW, PCPlus8D, 
                           RD1D, RD2D); 
  extend      ext(InstrD[23:0], ImmSrcD, ExtImmD);

  logic [31:0] RD1E, RD2E, ExtImmE;
  floprc #(4)  executeReg_ra1reg(clk, reset, flushE, RA1D, RA1E);
  floprc #(4)  executeReg_ra2reg(clk, reset, flushE, RA2D, RA2E);
  floprc #(32) executeReg_rd1reg(clk, reset, flushE, RD1D, RD1E);
  floprc #(32) executeReg_rd2reg(clk, reset, flushE, RD2D, RD2E);
  floprc #(32) executeReg_extimmreg(clk, reset, flushE, ExtImmD, ExtImmE);
  floprc #(4)  executeReg_a3reg(clk, reset, flushE, InstrD[15:12], A3E);

  logic [31:0] SrcAE, SrcBE;
  logic [31:0] WriteDataE;

  // ALU logic
  mux3 #(32)  srcafwdmux(RD1E, ResultW, ALUResultM, FwdAE, SrcAE);
  mux3 #(32)  srcbfwdmux(RD2E, ResultW, ALUResultM, FwdBE, WriteDataE);
  mux2 #(32)  srcbmux(WriteDataE, ExtImmE, ALUSrcE, SrcBE);
  alu         alu(SrcAE, SrcBE, ALUControlE, 
                  ALUResultE, ALUFlagsE);
  
  flopr #(32) memReg_aluresultreg(clk, reset, ALUResultE, ALUResultM);
  flopr #(32) memReg_writedatereg(clk, reset, WriteDataE, WriteDataM);
  flopr #(4)  memReg_a3reg(clk, reset, A3E, A3M);

  logic [31:0] ALUResultW, ReadDataW;
  flopr #(32) writebackReg_writedatereg(clk, reset, ALUResultM, ALUResultW);
  flopr #(32) writebackReg_readdatareg(clk, reset, ReadData, ReadDataW);
  flopr #(4)  writebackReg_a3reg(clk, reset, A3M, A3W);

  mux2 #(32)  resmux(ALUResultW, ReadDataW, MemtoRegW, ResultW);
  
endmodule
