module top(input logic clk, reset,
           output logic [31:0] WriteData, DataAdr,
           output logic MemWrite);
    logic [31:0] PC, Instr, ReadData;
    logic [2:0] funct3M;

    // instantiate processor and memories
    riscvpipeline rvpipeline(clk, reset, PC, Instr, MemWrite, funct3M,
                        DataAdr, WriteData, ReadData);
    imem imem(PC, Instr);
    dmem dmem(clk, MemWrite, funct3M, DataAdr, WriteData, ReadData);
endmodule
