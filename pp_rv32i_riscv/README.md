# Pipelined RV32I Additions

DDCSA pipelined RISCV processor Expanded to the full 40 instruction RV32I base instruction set.

### Old Testbench

From this directory:

```sh
verilator -Wall -Wno-fatal --binary --timing --trace \
  *.sv datapath/*.sv ctrl/*.sv utils/*.sv testbench/*.sv \
  --top-module testbench
./obj_dir/Vtestbench
```

## Implemented instructions

### Loads and stores

`lb` `lh` `lw` `lbu` `lhu` `sb` `sh` `sw`

- Data memory is byte-addressed and uses little-endian byte ordering.
- Stores are handled in the DMEM block, so `funct3` is propagated to the
  memory stage for selecting the access width and bytes to write.
- Loads are also processed in DMEM for consistency with stores; the load value
  is selected by the writeback mux, so loads do not need a separate write
  enable.
- The RAM is byte-indexed instead of 32-bit-word-indexed. This avoids needing
  to parse individual byte lanes inside a 32-bit memory word.
- Unsigned loads are zero-extended; signed loads are sign-extended.
- Partial-width stores update only the addressed bytes.

The focused data-memory testbench can be run with:

```sh
verilator -Wall -Wno-fatal --binary --timing --trace \
  dmem.sv testbench/dmem_testbench.sv \
  --top-module dmem_testbench
./obj_dir/Vdmem_testbench
```

It checks all supported load/store widths, sign and zero extension,
little-endian ordering, and preservation of bytes unaffected by partial stores.

### Branches

`beq` `bne` `blt` `bge` `bltu` `bgeu`

- Branch decisions are made in the controller using the ALU's zero, signed-less-than, and unsigned-less-than results.
- `funct3` pipelined through controller and cased on each.
- Branch conditions are evaluated in the execute stage.
- `PCSrcE` is selected from the branch type and the ALU comparison result.
- The hazard unit flushes instructions fetched speculatively after a taken
  branch.

### Integer ALU operations

`add` `addi` `sub` `and` `andi` `or` `ori` `xor` `xori`

`slt` `slti` `sltu` `sltiu`

- Added XOR and signed/unsigned less-than operations to the ALU and ALU
  decoder.
- The same decoder path is used for register and immediate ALU instructions. The immediate is selected by the existing ALUSrc mux.
- The ALU control field was expanded from 3 bits to 4 bits to identify the additional operations.

### Shifts

`sll` `slli` `srl` `srli` `sra` `srai`

- Shift amounts use the low five bits of the second ALU operand. `sra` and
`srai` perform arithmetic right shifts; `srl` and `srli` perform logical right shifts.
- Shift immediates are five bits wide and are zero extended through the
  datapath.
- `funct7[5]` distinguishes `sra` from `srl` for register shifts and is also checked for the immediate shift forms.

### Jumps

`jal` `jalr`

- `jalr` uses the ALU result (`rs1 + sign-extended immediate`) as the target and routes it back to the PC mux at the fetch stage.
- The least-significant bit of a `jalr` target is cleared, as required by the ISA.
- `PCSrcE` is now 2 bits wide so it can select the sequential PC, a PC relative target, or a `jalr` target. Branch logic and hazard unit updated.
- The first PC mux was expanded from a mux2 to a mux3 so it can select the execute-stage `jalr` target.

### Load Immediates

`lui` `auipc`

- ImmSrc was extended by a bit so that it can encode the U-Type instruction.
- A mux3 was added in the Execute Stage SrcAE path to aditionally select zero or PCE.
- SrcASelectE controls the new mux3 and is set in the controller from the Decode Stage.