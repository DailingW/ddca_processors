module controller(input logic clk, reset,
                  input logic [6:0] op,
                  input logic [2:0] funct3D,
                  input logic funct7b5,
                  input logic ZeroE, LessSignedE, LessUnsignedE,
                  input logic FlushE,
                  output logic [1:0] ResultSrcE, ResultSrcW,
                  output logic MemWriteM,
                  output logic [1:0] PCSrcE,
                  output logic ALUSrcE,
                  output logic RegWriteM, RegWriteW,
                  output logic [1:0] ImmSrcD,
                  output logic [3:0] ALUControlE);
    logic RegWriteD, BranchD, ALUSrcD, MemWriteD;
    logic [1:0] ResultSrcD, JumpD, JumpE;
    logic [3:0] ALUControlD;
    logic RegWriteE, BranchE, MemWriteE;
    logic [1:0] ResultSrcM;
    logic [1:0] ALUOp;
    logic [2:0] funct3E, funct3M, funct3W;

    maindec md(op, ResultSrcD, MemWriteD, BranchD,
                ALUSrcD, RegWriteD, JumpD, ImmSrcD, ALUOp);
    aludec ad(op[5], funct3D, funct7b5, ALUOp, ALUControlD);

    // PIPELINE EXECUTE
    floprc #(1) regwriteflop(clk, reset, FlushE, RegWriteD, RegWriteE);
    floprc #(2) resultsrcflop(clk, reset, FlushE, ResultSrcD, ResultSrcE);
    floprc #(1) memwriteflop(clk, reset, FlushE, MemWriteD, MemWriteE);
    floprc #(2) jumpflop(clk, reset, FlushE, JumpD, JumpE);
    floprc #(1) branchflop(clk, reset, FlushE, BranchD, BranchE);
    floprc #(4) alucontrolflop(clk, reset, FlushE, ALUControlD, ALUControlE);
    floprc #(1) alusrcflop(clk, reset, FlushE, ALUSrcD, ALUSrcE);
    floprc #(3) funct3flop(clk, reset, FlushE, funct3D, funct3E);
    always_comb begin
        PCSrcE = JumpE;
        if (BranchE) begin
            case(funct3E)
                3'b000: PCSrcE[0] = ZeroE; // beq (sub)
                3'b001: PCSrcE[0] = ~ZeroE; // bne (sub)
                3'b100: PCSrcE[0] = LessSignedE; // blt (less) 
                3'b101: PCSrcE[0] = ~LessSignedE; // bge (!less)
                3'b110: PCSrcE[0] = LessUnsignedE; // bltu (lessU)
                3'b111: PCSrcE[0] = ~LessUnsignedE; // bgeu (!lessU)
                default: PCSrcE = 2'bxx; // undefined branch behavior
            endcase
        end
    end

    // PIPELINE MEMORY
    flopr #(1) regwritemem(clk, reset, RegWriteE, RegWriteM);
    flopr #(2) resultsrcmem(clk, reset, ResultSrcE, ResultSrcM);
    flopr #(1) memwritemem(clk, reset, MemWriteE, MemWriteM);
    flopr #(3) funct3mem(clk, reset, funct3E, funct3M);

    // PIPELINE WRITEBACK
    flopr #(1) regwritewb(clk, reset, RegWriteM, RegWriteW);
    flopr #(2) resultsrcwb(clk, reset, ResultSrcM, ResultSrcW);
    flopr #(3) funct3wb(clk, reset, funct3M, funct3W);

endmodule
