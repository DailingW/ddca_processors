module dmem_testbench;
    localparam logic [7:0] BASE = 8'd32;

    logic        clk;
    logic        we;
    logic [2:0]  funct3;
    logic [31:0] a;
    logic [31:0] wd;
    logic [31:0] rd;
    int checks;

    dmem dut(clk, we, funct3, a, wd, rd);

    always #5 clk = ~clk;

    task automatic store(
        input logic [2:0]  store_funct3,
        input logic [7:0]  store_addr,
        input logic [31:0] store_data
    );
        begin
            @(negedge clk);
            funct3 = store_funct3;
            a      = {24'b0, store_addr};
            wd     = store_data;
            we     = 1'b1;
            @(posedge clk);
            #1;
            we = 1'b0;
        end
    endtask

    task automatic check_load(
        input logic [2:0]  load_funct3,
        input logic [7:0]  load_addr,
        input logic [31:0] expected,
        input string       operation
    );
        begin
            funct3 = load_funct3;
            a      = {24'b0, load_addr};
            #1;
            checks++;
            if (rd !== expected) begin
                $fatal(1, "%s at address %0d: expected %h, got %h",
                       operation, load_addr, expected, rd);
            end
            $display("PASS: %-3s address=%0d data=%h", operation, load_addr, rd);
        end
    endtask

    initial begin
        clk    = 1'b0;
        we     = 1'b0;
        funct3 = 3'b000;
        a      = 32'b0;
        wd     = 32'b0;
        checks = 0;

        // sw establishes bytes 80 7f ff 80 in increasing addresses.
        store(3'b010, BASE, 32'h80ff7f80);

        // Check signed and unsigned byte/halfword loads and the full word load.
        check_load(3'b000, BASE,     32'hffffff80, "lb");
        check_load(3'b100, BASE,     32'h00000080, "lbu");
        check_load(3'b001, BASE,     32'h00007f80, "lh");
        check_load(3'b101, BASE,     32'h00007f80, "lhu");
        check_load(3'b001, BASE + 8'd2, 32'hffff80ff, "lh");
        check_load(3'b101, BASE + 8'd2, 32'h000080ff, "lhu");
        check_load(3'b010, BASE,     32'h80ff7f80, "lw");

        // sh changes exactly two bytes and preserves the surrounding bytes.
        store(3'b010, BASE, 32'h11223344);
        store(3'b001, BASE + 8'd1, 32'haabbccdd);
        check_load(3'b010, BASE,        32'h11ccdd44, "lw");
        check_load(3'b101, BASE + 8'd1, 32'h0000ccdd, "lhu");

        // sb changes exactly one byte and preserves the other three bytes.
        store(3'b000, BASE + 8'd2, 32'h00000080);
        check_load(3'b010, BASE,        32'h1180dd44, "lw");
        check_load(3'b000, BASE + 8'd2, 32'hffffff80, "lb");
        check_load(3'b100, BASE + 8'd2, 32'h00000080, "lbu");

        $display("DMEM load/store test PASSED (%0d checks)", checks);
        $finish;
    end
endmodule
