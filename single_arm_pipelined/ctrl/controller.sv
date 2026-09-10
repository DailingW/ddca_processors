module controller(input  logic         clk, reset,
                  input  logic [31:12] InstrD,
                  input  logic [3:0]   ALUFlagsE,
                  input logic          flushE,
                  output logic [1:0]   RegSrcD,
                  output logic         RegWriteM,
                  output logic         RegWriteW,
                  output logic [1:0]   ImmSrcD,
                  output logic         ALUSrcE, 
                  output logic [1:0]   ALUControlE,
	                  output logic         MemWriteM, MemtoRegE, MemtoRegW,
                  output logic         PCSD, PCSE, PCSM, PCSW,
                  output logic         BranchTakenE);

  // decode control unit
  logic [1:0] FlagWriteD;
  logic       RegWriteD, MemWriteD;
  logic       MemtoRegD, ALUSrcD, BranchD;
  logic [1:0] ALUControlD;
  
  decoder dec(InstrD[27:26], InstrD[25:20], InstrD[15:12],
              FlagWriteD, PCSD, RegWriteD, MemWriteD,
              MemtoRegD, ALUSrcD, ImmSrcD, RegSrcD, ALUControlD, BranchD);
  
  // execute conditional unit
  logic [3:0] CondE;
  logic [1:0] FlagWriteE;
  logic       RegWriteE, MemWriteE, 
              PCSE_condout, RegWriteE_condout, MemWriteE_condout;
  logic       BranchE;
  floprc #(4) condreg(clk, reset, flushE, InstrD[31:28], CondE);
  floprc #(2) flagwritereg(clk, reset, flushE, FlagWriteD, FlagWriteE);
  floprc #(1) pcsreg(clk, reset, flushE, PCSD, PCSE);
  floprc #(1) regwritereg(clk, reset, flushE, RegWriteD, RegWriteE);
  floprc #(1) memwritereg(clk, reset, flushE, MemWriteD, MemWriteE);
  floprc #(1) memtoregreg(clk, reset, flushE, MemtoRegD, MemtoRegE);
  floprc #(1) alusrcdreg(clk, reset, flushE, ALUSrcD, ALUSrcE);
  floprc #(2) alucontroldreg(clk, reset, flushE, ALUControlD, ALUControlE);
  floprc #(1) branchdreg(clk, reset, flushE, BranchD, BranchE);

  condlogic cl(clk, reset, CondE, ALUFlagsE,
               FlagWriteE, PCSE, RegWriteE, MemWriteE, BranchE,
               PCSE_condout, RegWriteE_condout, MemWriteE_condout, BranchTakenE);

  // memory write enable
  logic       PCSrcE, MemtoRegM;
  assign PCSrcE = PCSE_condout & ~BranchTakenE;

  flopr #(1) pcsmreg(clk, reset, PCSrcE, PCSM);
  flopr #(1) memtoregmreg(clk, reset, MemtoRegE, MemtoRegM);
  flopr #(1) regwritemreg(clk, reset, RegWriteE_condout, RegWriteM);
  flopr #(1) memwritemreg(clk, reset, MemWriteE_condout, MemWriteM);

  // write back mux signals + feedback
  flopr #(1) pcsrcwreg(clk, reset, PCSM, PCSW);
  flopr #(1) memtoregwreg(clk, reset, MemtoRegM, MemtoRegW);
  flopr #(1) regwritewreg(clk, reset, RegWriteM, RegWriteW);
endmodule
