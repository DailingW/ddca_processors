module alu(input  logic [31:0] a, b,
           input  logic [2:0]  ALUControl,
           output logic [31:0] Result,
           output logic        Zero,
           output logic        LessSigned,
           output logic        LessUnsigned);

  logic [31:0] condinvb;
  logic [32:0] sum;

  assign condinvb = ALUControl[0] ? ~b : b;
  assign sum = a + condinvb + ALUControl[0];
  assign Zero = (Result == 32'b0);
  assign LessSigned = ($signed(a) < $signed(b));
  assign LessUnsigned = ($unsigned(a) < $unsigned(b));

  always_comb
    case (ALUControl[2:0])
      3'b000: Result = sum[31:0]; // +
      3'b001: Result = sum[31:0]; // -
      3'b010: Result = a & b;
      3'b011: Result = a | b;
      3'b101: Result = ($signed(a) < $signed(b)) ? 32'b1 : 32'b0;
      default: Result = 32'bx;
    endcase
endmodule
