module riscvpipeline(input logic clk, reset,
                   output logic [31:0] PC,
                   input logic [31:0] Instr,
                   output logic MemWriteM,
                   output logic [2:0] funct3M,
                   output logic [31:0] ALUResultM, WriteDataM,
                   input logic [31:0] ReadDataM);
    logic ALUSrcE, RegWriteM, RegWriteW, ZeroE, PCSrcE;
    logic [4:0] RS1D, RS2D, RS1E, RS2E,
                RDD, RDE, RDM, RDW;
    logic StallF, StallD, FlushD, FlushE;
    logic [1:0] ForwardAE, ForwardBE;
    logic [1:0] ResultSrcE, ResultSrcW, ImmSrcD;
    logic [2:0] ALUControlE;
    logic [31:0] InstrD;
    controller c(clk, reset, InstrD[6:0], InstrD[14:12], InstrD[30], ZeroE,
                FlushE, ResultSrcE, ResultSrcW, MemWriteM, PCSrcE,
                ALUSrcE, RegWriteM, RegWriteW,
                ImmSrcD, ALUControlE);
    datapath dp(clk, reset, ResultSrcW, PCSrcE,
                ALUSrcE, RegWriteW,
                ImmSrcD, ALUControlE, funct3M,
                ZeroE, PC, Instr, InstrD,
                ALUResultM, WriteDataM, ReadDataM, 
                RS1D, RS2D, RS1E, RS2E, RDD, RDE, RDM, RDW,
                StallF, StallD, FlushD, FlushE,
                ForwardAE, ForwardBE);
    hazardunit hu(RS1D, RS2D, RS1E, RS2E, RDE, RDM, RDW,
                ResultSrcE, RegWriteM, RegWriteW,
                PCSrcE,
                ForwardAE, ForwardBE,
                StallF, StallD,
                FlushE, FlushD);
endmodule
