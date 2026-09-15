module alu(input  logic [31:0] a, b,
           input  logic [3:0]  ALUControl,
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
    case (ALUControl)
      4'b0000: Result = sum[31:0]; // +
      4'b0001: Result = sum[31:0]; // -
      4'b0010: Result = a & b;
      4'b0011: Result = a | b;
      4'b0100: Result = a ^ b;
      4'b0101: Result = ($signed(a) < $signed(b)) ? 32'b1 : 32'b0;
      4'b0110: Result = ($unsigned(a) < $unsigned(b)) ? 32'b1 : 32'b0;
      4'b0111: Result = a << b[4:0];
      4'b1000: Result = a >> b[4:0];
      4'b1001: Result = $signed(a) <<< b[4:0];
      4'b1010: Result = $signed(a) >>> b[4:0];
      default: Result = 32'bx;
    endcase
endmodule
