module hazardunit(input  logic [3:0]  RA1D, RA2D,
                  input  logic [3:0]  RA1E, RA2E,
                  input  logic [3:0]  A3E, A3M, A3W,
                  input  logic        MemtoRegE, RegWriteM, RegWriteW,
                  input  logic        PCSD, PCSE, PCSM, PCSW, BranchTakenE,
                  output logic [1:0]  FwdAE, FwdBE,
                  output logic        StallF, StallD,
                  output logic        flushE, flushD);

  logic Match_1E_M, Match_1E_W;
  logic Match_2E_M, Match_2E_W;
  logic Match_12D_E;
  logic LDRstall;
  logic PCWritePendingF;

  assign Match_1E_M = (RA1E == A3M);
  assign Match_1E_W = (RA1E == A3W);
  assign Match_2E_M = (RA2E == A3M);
  assign Match_2E_W = (RA2E == A3W);

  always_comb begin
    if (RegWriteM && Match_1E_M)
      FwdAE = 2'b10;
    else if (RegWriteW && Match_1E_W)
      FwdAE = 2'b01;
    else
      FwdAE = 2'b00;

    if (RegWriteM && Match_2E_M)
      FwdBE = 2'b10;
    else if (RegWriteW && Match_2E_W)
      FwdBE = 2'b01;
    else
      FwdBE = 2'b00;
  end

  assign Match_12D_E     = (RA1D == A3E) || (RA2D == A3E);
  assign LDRstall        = MemtoRegE && Match_12D_E;
  assign PCWritePendingF = PCSD || PCSE || PCSM;

  assign StallD = LDRstall;
  assign StallF = LDRstall || PCWritePendingF;
  assign flushE = LDRstall || BranchTakenE;
  assign flushD = PCWritePendingF || PCSW || BranchTakenE;
endmodule
