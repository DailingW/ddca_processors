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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ testbench__DOT__clk;
        CData/*0:0*/ testbench__DOT__reset;
        CData/*0:0*/ testbench__DOT__MemWrite;
        CData/*2:0*/ testbench__DOT__dut__DOT__funct3M;
        CData/*0:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__ALUSrcE;
        CData/*0:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__RegWriteM;
        CData/*0:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__RegWriteW;
        CData/*0:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__LessSignedE;
        CData/*0:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__LessUnsignedE;
        CData/*4:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__RS1E;
        CData/*4:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__RS2E;
        CData/*4:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__RDE;
        CData/*4:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__RDM;
        CData/*4:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__RDW;
        CData/*0:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__StallF;
        CData/*0:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__FlushE;
        CData/*1:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__ForwardAE;
        CData/*1:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__ForwardBE;
        CData/*1:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__ResultSrcE;
        CData/*1:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__ResultSrcW;
        CData/*2:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE;
        CData/*2:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__Funct3E;
        CData/*2:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__Funct3W;
        CData/*0:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__RegWriteE;
        CData/*0:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__JumpE;
        CData/*0:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__BranchE;
        CData/*0:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__MemWriteE;
        CData/*1:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__ResultSrcM;
        CData/*2:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3E;
        CData/*2:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3M;
        CData/*2:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3W;
        CData/*2:0*/ __Vdly__testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3E;
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
        SData/*10:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls;
        IData/*31:0*/ testbench__DOT____VlemCall_1__read_reg;
        IData/*31:0*/ testbench__DOT____VlemCall_0__read_reg;
        IData/*31:0*/ testbench__DOT__WriteData;
        IData/*31:0*/ testbench__DOT__DataAdr;
        IData/*31:0*/ testbench__DOT__cycle;
        IData/*31:0*/ testbench__DOT__dut__DOT__PC;
        IData/*31:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD;
        IData/*31:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4D;
        IData/*31:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4E;
        IData/*31:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4M;
        IData/*31:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4W;
        IData/*31:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCNext;
        IData/*31:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCTarget;
        IData/*31:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCTargetE;
        IData/*31:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCD;
        IData/*31:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCE;
        IData/*31:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ImmExtE;
        IData/*31:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ALUResultW;
        IData/*31:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__WriteDataE;
        IData/*31:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__StoreDataE;
    };
    struct {
        IData/*31:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ReadDataW;
        IData/*31:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__RD1E;
        IData/*31:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__RD2E;
        IData/*31:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ResultW;
        IData/*31:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__a;
        IData/*31:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__b;
        IData/*31:0*/ testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__Result;
        IData/*31:0*/ testbench__DOT__dut__DOT__dmem__DOT__rd;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlUnpacked<IData/*31:0*/, 32> testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__rf__DOT__rf;
        VlUnpacked<CData/*7:0*/, 256> testbench__DOT__dut__DOT__dmem__DOT__RAM;
        VlUnpacked<IData/*31:0*/, 64> testbench__DOT__dut__DOT__imem__DOT__RAM;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
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
