module hazardunit(input  logic [4:0]  RS1D, RS2D, RS1E, RS2E,
                  input  logic [4:0]  RDE, RDM, RDW,
                  input  logic [1:0]  ResultSrcE,
                  input  logic        RegWriteM, RegWriteW,
                  input  logic        PCSrcE,
                  output logic [1:0]  FwdAE, FwdBE,
                  output logic        StallF, StallD,
                  output logic        FlushE, FlushD);
    logic lwStall;

    always_comb
        begin
            if ((RS1E != 5'd0) && (RS1E == RDM) && RegWriteM)
                FwdAE = 2'b10;
            else if ((RS1E != 5'd0) && (RS1E == RDW) && RegWriteW)
                FwdAE = 2'b01;
            else
                FwdAE = 2'b00;
        end

    always_comb
        begin
            if ((RS2E != 5'd0) && (RS2E == RDM) && RegWriteM)
                FwdBE = 2'b10;
            else if ((RS2E != 5'd0) && (RS2E == RDW) && RegWriteW)
                FwdBE = 2'b01;
            else
                FwdBE = 2'b00;
        end

    assign lwStall = ResultSrcE[0] && (RDE != 5'd0) && ((RS1D == RDE) || (RS2D == RDE));
    assign StallF = lwStall;
    assign StallD = lwStall;
    assign FlushE = lwStall || PCSrcE;
    assign FlushD = PCSrcE;
endmodule
