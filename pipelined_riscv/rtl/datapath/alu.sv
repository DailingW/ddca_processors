module alu(input  logic [31:0] a, b,
           input  logic [2:0]  ALUControl,
           output logic [31:0] Result,
           output logic        Zero);

  logic [31:0] condinvb;
  logic [32:0] sum;

  assign condinvb = ALUControl[0] ? ~b : b;
  assign sum = a + condinvb + ALUControl[0];
  assign Zero = (Result == 32'b0);

  always_comb
    case (ALUControl[2:0])
      3'b000: Result = sum[31:0];
      3'b001: Result = sum[31:0];
      3'b101: Result = ($signed(a) < $signed(b)) ? 32'b1 : 32'b0;
      3'b011: Result = a | b;
      3'b010: Result = a & b;
      default: Result = 32'bx;
    endcase
endmodule
