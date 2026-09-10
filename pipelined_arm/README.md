__Compile (ignore warnings):__
verilator -Wall -Wno-fatal --binary --timing --trace \
  *.sv datapath/*.sv ctrl/*.sv utils/*.sv \
  --top-module testbench

__Run Testbench:__
./obj_dir/Vtestbench
