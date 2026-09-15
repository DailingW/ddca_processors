module datapath(input logic clk, reset,
                input logic [1:0] ResultSrcW, PCSrcE,
                input logic ALUSrcE,
                input logic RegWriteW,
                input logic [1:0] ImmSrcD,
                input logic [3:0] ALUControlE,
                output logic [2:0] Funct3M,
                output logic ZeroE, LessSignedE, LessUnsignedE,
                output logic [31:0] PCF,
                input logic [31:0] Instr,
                output logic [31:0] InstrD,
                output logic [31:0] ALUResultM, WriteDataM,
                input logic [31:0] ReadDataM,
                output logic [4:0] RS1D, RS2D, RS1E, RS2E,
                output logic [4:0] RDD, RDE, RDM, RDW,
                input logic StallF, StallD, FlushD, FlushE,
                input logic [1:0] ForwardAE, ForwardBE);
    logic [31:0] PCPlus4F, PCPlus4D, PCPlus4E, PCPlus4M, PCPlus4W;
    logic [31:0] PCNext, PCTarget, PCTargetE, PCD, PCE;
    logic [31:0] ImmExtD, ImmExtE;
    logic [31:0] ALUResultE, ALUResultW, WriteDataE, StoreDataE;
    logic [31:0] ReadDataW;
    logic [31:0] RD1D, RD2D, RD1E, RD2E, SrcAE, SrcBE;
    logic [31:0] ResultW;
    logic [2:0] Funct3E, Funct3W;

    // next PC logic
    assign JalrTargetE = {ALUResultE[31:1], 1'b0};
    mux3 #(32) pcmux(PCPlus4F, PCTargetE, JalrTargetE, PCSrcE, PCNext);
    
    // PIPELINE FETCH
    flopenr #(32) pcreg(clk, reset, ~StallF, PCNext, PCF);
    adder #(32) pcadd4(PCF, 32'd4, PCPlus4F);

    // PIPELINE DECODE
    flopenrc #(32) pcregbranch(clk, reset, ~StallD, FlushD, Instr, InstrD);
    flopenrc #(32) pcd(clk, reset, ~StallD, FlushD, PCF, PCD);
    flopenrc #(32) pcplus4(clk, reset, ~StallD, FlushD, PCPlus4F, PCPlus4D);

    // register file logic
    assign RS1D = InstrD[19:15];
    assign RS2D = InstrD[24:20];
    assign RDD = InstrD[11:7];
    regfile rf(clk, RegWriteW, RS1D, RS2D,
            RDW, ResultW, RD1D, RD2D);
    extend ext(InstrD[31:7], ImmSrcD, ImmExtD);

    // PIPELINE EXECUTE
    floprc #(32) pce(clk, reset, FlushE, PCD, PCE);
    floprc #(32) immext(clk, reset, FlushE, ImmExtD, ImmExtE);
    floprc #(32) readdata1(clk, reset, FlushE, RD1D, RD1E);
    floprc #(5) regaddr1(clk, reset, FlushE, RS1D, RS1E);
    floprc #(32) readdata2(clk, reset, FlushE, RD2D, RD2E);
    floprc #(5) regaddr2(clk, reset, FlushE, RS2D, RS2E);
    floprc #(5) regaddr3(clk, reset, FlushE, RDD, RDE);
    floprc #(32) pcplus4e(clk, reset, FlushE, PCPlus4D, PCPlus4E);
    floprc #(3) f3e(clk, reset, FlushE, InstrD[14:12], Funct3E);

    // ALU logic
    mux3 #(32) srcafwdmux(RD1E, ResultW, ALUResultM, ForwardAE, SrcAE);
    mux3 #(32) srcbfwdmux(RD2E, ResultW, ALUResultM, ForwardBE, WriteDataE);
    mux2 #(32) srcbmux(WriteDataE, ImmExtE, ALUSrcE, SrcBE);
    alu alu(SrcAE, SrcBE, ALUControlE, ALUResultE, ZeroE, LessSignedE, LessUnsignedE);
    adder #(32) pcaddbranch(PCE, ImmExtE, PCTargetE);

    // PIPELINE MEMORY
    flopr #(32) aluresult(clk, reset, ALUResultE, ALUResultM);
    flopr #(32) writedata(clk, reset, WriteDataE, WriteDataM);
    flopr #(5) regaddr3m(clk, reset, RDE, RDM);
    flopr #(32) pcplus4m(clk, reset, PCPlus4E, PCPlus4M);
    flopr #(3) f3m(clk, reset, Funct3E, Funct3M);

    // PIPELINE WRITEBACK
    flopr #(32) aluresultw(clk, reset, ALUResultM, ALUResultW);
    flopr #(32) readdataw(clk, reset, ReadDataM, ReadDataW);
    flopr #(5) regaddr3w(clk, reset, RDM, RDW);
    flopr #(32) pcplus4w(clk, reset, PCPlus4M, PCPlus4W);
    flopr #(3) f3w(clk, reset, Funct3M, Funct3W);

    // Writeback
    mux3 #(32) resultmux( ALUResultW, ReadDataW, PCPlus4W,
                        ResultSrcW, ResultW);
endmodule
