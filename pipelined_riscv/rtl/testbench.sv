module testbench();
    logic clk;
    logic reset;
    logic [31:0] WriteData, DataAdr;
    logic MemWrite;
    int cycle;

    // instantiate device to be tested
    top dut(clk, reset, WriteData, DataAdr, MemWrite);

    function automatic logic [31:0] read_reg(input logic [4:0] regnum);
        read_reg = (regnum == 5'd0) ? 32'd0 : dut.rvsingle.dp.rf.rf[regnum];
    endfunction

    // initialize test
    initial
        begin
        cycle = 0;
        $dumpfile("waveform.vcd");
        $dumpvars(0, testbench);
        reset <= 1; # 22; reset <= 0;
        end

    // generate clock to sequence tests
    always
        begin
        clk <= 1; # 5; clk <= 0; # 5;
        end

    // log one line per executed instruction
    always @(posedge clk)
        begin
            if(!reset) begin
                cycle <= cycle + 1;
                $display("cycle=%0d pc=%h instr=%h rs1=x%0d(%0d) rs2=x%0d(%0d) rd=x%0d alu=%0d memwrite=%b addr=%0d wdata=%0d",
                         cycle + 1, dut.PC, dut.Instr,
                         dut.Instr[19:15], read_reg(dut.Instr[19:15]),
                         dut.Instr[24:20], read_reg(dut.Instr[24:20]),
                         dut.Instr[11:7], dut.rvsingle.ALUResultM,
                         MemWrite, DataAdr, WriteData);

                if(dut.rvsingle.RegWriteW && (dut.rvsingle.dp.RDW != 5'd0))
                    $display("  WB:  x%0d <= %0d", dut.rvsingle.dp.RDW, dut.rvsingle.dp.ResultW);

                if(MemWrite)
                    $display("  MEM: [%0d] <= %0d", DataAdr, WriteData);

                if(dut.rvsingle.PCSrcE)
                    $display("  PC:  next <= %h", dut.rvsingle.dp.PCTargetE);

                if((cycle + 1) > 100) begin
                    $display("Simulation timed out");
                    $finish;
                end
            end
        end

    // check results
    always @(negedge clk)
        begin
            if(MemWrite) begin
                if(DataAdr === 100 & WriteData === 25) begin
                    $display("Simulation succeeded");
                    $finish;
                end else if (DataAdr !== 96) begin
                    $display("Simulation failed");
                    $finish;
                end
            end
        end
endmodule
