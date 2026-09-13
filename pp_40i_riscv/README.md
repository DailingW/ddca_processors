__Compile (ignore warnings):__
verilator -Wall -Wno-fatal --binary --timing --trace \
  *.sv datapath/*.sv ctrl/*.sv utils/*.sv testbench/*.sv \
  --top-module testbench

__Run Testbench:__
./obj_dir/Vtestbench



## Full RV32I Additions

`lb` `lh` `lw` `lbu` `lhu` `sb` `sh` `sw`

- Stores are done in DMEM block, so we need to propagate funct3 to Memory Stage for DMEM to case on what bits to write. Load data comes out of DMEM, so we process in DMEM for consistency with store
- RAM memory now byte indexed, not 32b indexed. Load/store otherwise wouldve needed to parse bytes within each 32b word
- funct3 needed to be passed through the datapath, but no additional logic needed. Store happens when MemWrite = 1. Load doesn't needed to be gated because the output is muxed in the Writeback Stage
- Unsigned load simply extends by 0s instead of sign bit

To run the focused data-memory load/store testbench:

```sh
verilator -Wall -Wno-fatal --binary --timing --trace \
  dmem.sv testbench/dmem_testbench.sv \
  --top-module dmem_testbench
./obj_dir/Vdmem_testbench
```

The testbench checks `lb`, `lh`, `lw`, `lbu`, `lhu`, `sb`, `sh`, and `sw`,
including sign/zero extension, little-endian byte ordering, and preservation
of bytes unaffected by a partial-width store.

