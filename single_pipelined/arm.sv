module arm(input  logic        clk, reset,
           output logic [31:0] PC,
           input  logic [31:0] Instr,
           output logic        MemWrite,
           output logic [31:0] ALUResult, WriteData,
           input  logic [31:0] ReadData);

  logic [31:0] InstrD;
  logic [3:0]  ALUFlagsE;
  logic [3:0]  RA1D, RA2D, RA1E, RA2E;
  logic [3:0]  A3E, A3M, A3W;
  logic        RegWriteW, 
               RegWriteM,
               ALUSrcE, MemtoRegE, MemtoRegW, 
               PCSD, PCSE, PCSM, PCSW,
               BranchTakenE,
               stallF, stallD,
               flushE, flushD;
  logic [1:0]  RegSrcD, ImmSrcD, ALUControlE,
               FwdAE, FwdBE;

  controller c(clk, reset,
               InstrD[31:12], ALUFlagsE, flushE,
               RegSrcD, RegWriteM, RegWriteW, ImmSrcD, 
               ALUSrcE, ALUControlE,
               MemWrite, MemtoRegE, MemtoRegW, 
               PCSD, PCSE, PCSM, PCSW,
               BranchTakenE);
  datapath dp(clk, reset, 
              RegSrcD, RegWriteW, ImmSrcD,
              ALUSrcE, ALUControlE,
              MemtoRegW, PCSW,
              BranchTakenE, FwdAE, FwdBE,
              stallF, stallD, flushD, flushE,
              RA1D, RA2D, RA1E, RA2E,
              A3E, A3M, A3W,
              ALUFlagsE, PC, Instr, InstrD,
              ALUResult, WriteData, ReadData);
  hazardunit hu(RA1D, RA2D, RA1E, RA2E,
                A3E, A3M, A3W,
                MemtoRegE, RegWriteM, RegWriteW,
                PCSD, PCSE, PCSM, PCSW, BranchTakenE,
                FwdAE, FwdBE,
                stallF, stallD,
                flushE, flushD);
endmodule
