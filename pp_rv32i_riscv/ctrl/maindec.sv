module maindec(input logic [6:0] op,
               output logic [1:0] ResultSrc,
               output logic MemWrite,
               output logic Branch, ALUSrc,
               output logic RegWrite,
               output logic [1:0] Jump,
               output logic [2:0] ImmSrc,
               output logic [1:0] SrcASelect,
               output logic [1:0] ALUOp);
    logic [14:0] controls;
    assign {RegWrite, ImmSrc, ALUSrc, SrcASelect, MemWrite,
    ResultSrc, Branch, ALUOp, Jump} = controls;

    always_comb
        case(op)
            // RegWrite_ImmSrc_ALUSrc_SrcASelect_MemWrite_ResultSrc_Branch_ALUOp_Jump
            7'b0000011: controls = 15'b1_000_1_00_0_01_0_00_00; // loads
            7'b0100011: controls = 15'b0_001_1_00_1_00_0_00_00; // stores
            7'b0110011: controls = 15'b1_xxx_0_00_0_00_0_10_00; // R–type
            7'b1100011: controls = 15'b0_010_0_00_0_00_1_01_00; // branches
            7'b0010011: controls = 15'b1_000_1_00_0_00_0_10_00; // I–type ALU
            7'b1101111: controls = 15'b1_011_0_00_0_10_0_00_01; // jal
            7'b1100111: controls = 15'b1_000_1_00_0_10_0_00_10; // jalr
            7'b0110111: controls = 15'b1_100_1_01_0_00_0_00_00; // lui
            7'b0010111: controls = 15'b1_100_1_10_0_00_0_00_00; // auipc
            default: controls = 15'bx_xxx_x_xx_x_xx_x_xx_xx; // ???
        endcase
endmodule
