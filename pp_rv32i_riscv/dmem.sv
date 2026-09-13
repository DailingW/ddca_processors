module dmem(input  logic        clk, we,
            input  logic [2:0]  funct3,
            input  logic [31:0] a, wd,
            output logic [31:0] rd);

  logic [7:0] RAM[255:0]; // 256 bytes of memory: a[7:0]
  logic [7:0] addr;

  assign addr = a[7:0];

  always_comb begin
    case(funct3)
      3'b000: rd = {{24{RAM[addr][7]}}, RAM[addr]}; // lb
      3'b001: rd = {{16{RAM[addr + 8'd1][7]}}, RAM[addr + 8'd1], RAM[addr]}; // lh
      3'b010: rd = {RAM[addr + 8'd3], RAM[addr + 8'd2], RAM[addr + 8'd1], RAM[addr]}; // lw
      3'b100: rd = {24'b0, RAM[addr]}; // lbu
      3'b101: rd = {16'b0, RAM[addr + 8'd1], RAM[addr]}; // lhu
      default: rd = 32'bx; // undefined
    endcase
  end

  always_ff @(posedge clk)
    if (we) begin
      case(funct3)
        3'b000: RAM[addr] <= wd[7:0];   // sb
        3'b001: begin
          RAM[addr]        <= wd[7:0];   // sh
          RAM[addr + 8'd1] <= wd[15:8];  // sh
        end
        3'b010: begin
          RAM[addr]        <= wd[7:0];   // sw
          RAM[addr + 8'd1] <= wd[15:8];  // sw
          RAM[addr + 8'd2] <= wd[23:16]; // sw
          RAM[addr + 8'd3] <= wd[31:24]; // sw
        end
        default: ;
      endcase
    end
endmodule
