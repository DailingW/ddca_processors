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
    CData/*0:0*/ testbench__DOT__dut__DOT__arm__DOT__MemWrite;
    CData/*1:0*/ testbench__DOT__dut__DOT__arm__DOT__ImmSrc;
    CData/*1:0*/ testbench__DOT__dut__DOT__arm__DOT__ALUControl;
    CData/*3:0*/ testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RA1;
    CData/*3:0*/ testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RA2;
    CData/*1:0*/ testbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagW;
    CData/*1:0*/ testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__FlagWrite;
    CData/*1:0*/ testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5;
    CData/*1:0*/ testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5;
    CData/*1:0*/ testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__flagreg0__DOT__d;
    CData/*0:0*/ testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge;
    CData/*0:0*/ testbench__DOT__dut__DOT__arm__DOT__c__DOT__dec__DOT__RegW;
    CData/*3:0*/ __VdfgRegularize_hebeb780c_0_0;
    CData/*5:0*/ __VdfgRegularize_hebeb780c_0_1;
    CData/*3:0*/ __VdfgRegularize_hebeb780c_0_2;
    CData/*1:0*/ __VdfgRegularize_hebeb780c_0_9;
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
    IData/*31:0*/ testbench__DOT__DataAdr;
    IData/*31:0*/ testbench__DOT__dut__DOT__PC;
    IData/*31:0*/ testbench__DOT__dut__DOT__arm__DOT__WriteData;
    IData/*31:0*/ testbench__DOT__dut__DOT__arm__DOT__dp__DOT__PCNext;
    IData/*31:0*/ testbench__DOT__dut__DOT__arm__DOT__dp__DOT__Result;
    IData/*31:0*/ testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a;
    IData/*31:0*/ testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    QData/*32:0*/ testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum;
    VlUnpacked<IData/*31:0*/, 15> testbench__DOT__dut__DOT__arm__DOT__dp__DOT__rf__DOT__rf;
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
