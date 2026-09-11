// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024ROOT_H_
#define VERILATED_VTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ testbench__DOT__clk;
    CData/*0:0*/ testbench__DOT__reset;
    CData/*0:0*/ testbench__DOT__dut__DOT__rvsingle__DOT__PCSrc;
    CData/*4:0*/ testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__ra1;
    CData/*4:0*/ testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__ra2;
    CData/*4:0*/ testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__wa3;
    CData/*2:0*/ testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__ad__DOT__funct3;
    CData/*0:0*/ testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__ad__DOT__RtypeSub;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_1;
    CData/*0:0*/ __VdlySet__testbench__DOT__reset__v0;
    CData/*0:0*/ __VdlySet__testbench__DOT__reset__v1;
    CData/*0:0*/ __VdlySet__testbench__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__testbench__DOT__clk__v1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__reset__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*10:0*/ testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__md__DOT__controls;
    IData/*31:0*/ testbench__DOT____VlemCall_1__read_reg;
    IData/*31:0*/ testbench__DOT____VlemCall_0__read_reg;
    IData/*31:0*/ testbench__DOT__cycle;
    IData/*31:0*/ testbench__DOT__dut__DOT__PC;
    IData/*31:0*/ testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__PCNext;
    IData/*31:0*/ testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__PCTarget;
    IData/*31:0*/ testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__ImmExt;
    IData/*31:0*/ testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__Result;
    IData/*31:0*/ testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__a;
    IData/*31:0*/ testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__b;
    IData/*31:0*/ testbench__DOT__dut__DOT__dmem__DOT__a;
    IData/*31:0*/ testbench__DOT__dut__DOT__dmem__DOT__wd;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 32> testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__rf;
    VlUnpacked<IData/*31:0*/, 64> testbench__DOT__dut__DOT__dmem__DOT__RAM;
    VlUnpacked<IData/*31:0*/, 64> testbench__DOT__dut__DOT__imem__DOT__RAM;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtestbench__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtestbench___024root(Vtestbench__Syms* symsp, const char* namep);
    ~Vtestbench___024root();
    VL_UNCOPYABLE(Vtestbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
