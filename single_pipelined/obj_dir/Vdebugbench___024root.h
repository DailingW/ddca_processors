// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdebugbench.h for the primary calling header

#ifndef VERILATED_VDEBUGBENCH___024ROOT_H_
#define VERILATED_VDEBUGBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdebugbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdebugbench___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ debugbench__DOT__clk;
        CData/*0:0*/ debugbench__DOT__reset;
        CData/*0:0*/ debugbench__DOT__MemWrite;
        CData/*3:0*/ debugbench__DOT__dut__DOT__arm__DOT__RA1D;
        CData/*3:0*/ debugbench__DOT__dut__DOT__arm__DOT__RA2D;
        CData/*3:0*/ debugbench__DOT__dut__DOT__arm__DOT__RA1E;
        CData/*3:0*/ debugbench__DOT__dut__DOT__arm__DOT__RA2E;
        CData/*3:0*/ debugbench__DOT__dut__DOT__arm__DOT__A3E;
        CData/*3:0*/ debugbench__DOT__dut__DOT__arm__DOT__A3M;
        CData/*3:0*/ debugbench__DOT__dut__DOT__arm__DOT__A3W;
        CData/*0:0*/ debugbench__DOT__dut__DOT__arm__DOT__RegWriteW;
        CData/*0:0*/ debugbench__DOT__dut__DOT__arm__DOT__RegWriteM;
        CData/*0:0*/ debugbench__DOT__dut__DOT__arm__DOT__ALUSrcE;
        CData/*0:0*/ debugbench__DOT__dut__DOT__arm__DOT__MemtoRegE;
        CData/*0:0*/ debugbench__DOT__dut__DOT__arm__DOT__MemtoRegW;
        CData/*0:0*/ debugbench__DOT__dut__DOT__arm__DOT__PCSD;
        CData/*0:0*/ debugbench__DOT__dut__DOT__arm__DOT__PCSE;
        CData/*0:0*/ debugbench__DOT__dut__DOT__arm__DOT__PCSM;
        CData/*0:0*/ debugbench__DOT__dut__DOT__arm__DOT__PCSW;
        CData/*0:0*/ debugbench__DOT__dut__DOT__arm__DOT__BranchTakenE;
        CData/*0:0*/ debugbench__DOT__dut__DOT__arm__DOT__stallF;
        CData/*0:0*/ debugbench__DOT__dut__DOT__arm__DOT__stallD;
        CData/*0:0*/ debugbench__DOT__dut__DOT__arm__DOT__flushE;
        CData/*0:0*/ debugbench__DOT__dut__DOT__arm__DOT__flushD;
        CData/*1:0*/ debugbench__DOT__dut__DOT__arm__DOT__ImmSrcD;
        CData/*1:0*/ debugbench__DOT__dut__DOT__arm__DOT__ALUControlE;
        CData/*1:0*/ debugbench__DOT__dut__DOT__arm__DOT__FwdAE;
        CData/*1:0*/ debugbench__DOT__dut__DOT__arm__DOT__FwdBE;
        CData/*1:0*/ debugbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteD;
        CData/*0:0*/ debugbench__DOT__dut__DOT__arm__DOT__c__DOT__RegWriteD;
        CData/*1:0*/ debugbench__DOT__dut__DOT__arm__DOT__c__DOT__ALUControlD;
        CData/*3:0*/ debugbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE;
        CData/*1:0*/ debugbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteE;
        CData/*0:0*/ debugbench__DOT__dut__DOT__arm__DOT__c__DOT__RegWriteE;
        CData/*0:0*/ debugbench__DOT__dut__DOT__arm__DOT__c__DOT__MemWriteE;
        CData/*0:0*/ debugbench__DOT__dut__DOT__arm__DOT__c__DOT__BranchE;
        CData/*0:0*/ debugbench__DOT__dut__DOT__arm__DOT__c__DOT__MemtoRegM;
        CData/*1:0*/ debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__FlagWrite;
        CData/*1:0*/ debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5;
        CData/*1:0*/ debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5;
        CData/*0:0*/ __VdlySet__debugbench__DOT__reset__v0;
        CData/*0:0*/ __VdlySet__debugbench__DOT__reset__v1;
        CData/*0:0*/ __VdlySet__debugbench__DOT__clk__v0;
        CData/*0:0*/ __VdlySet__debugbench__DOT__clk__v1;
        CData/*3:0*/ __VdlyDim0__debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf__v0;
        CData/*0:0*/ __VdlySet__debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__debugbench__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__debugbench__DOT__reset__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ debugbench__DOT__WriteData;
        IData/*31:0*/ debugbench__DOT__DataAdr;
        IData/*31:0*/ debugbench__DOT__dut__DOT__PC;
        IData/*31:0*/ debugbench__DOT__dut__DOT__arm__DOT__InstrD;
        IData/*31:0*/ debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__PCPlus4F;
        IData/*31:0*/ debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW;
        IData/*31:0*/ debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE;
        IData/*31:0*/ debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD1E;
        IData/*31:0*/ debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD2E;
        IData/*31:0*/ debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ExtImmE;
        IData/*31:0*/ debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__SrcAE;
    };
    struct {
        IData/*31:0*/ debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__SrcBE;
        IData/*31:0*/ debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__WriteDataE;
        IData/*31:0*/ debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultW;
        IData/*31:0*/ debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ReadDataW;
        IData/*31:0*/ __Vdly__debugbench__DOT__dut__DOT__PC;
        IData/*31:0*/ __VdlyVal__debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf__v0;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        QData/*32:0*/ debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum;
        VlUnpacked<IData/*31:0*/, 15> debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf;
        VlUnpacked<IData/*31:0*/, 64> debugbench__DOT__dut__DOT__dmem__DOT__RAM;
        VlUnpacked<IData/*31:0*/, 64> debugbench__DOT__dut__DOT__imem__DOT__RAM;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vdebugbench__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdebugbench___024root(Vdebugbench__Syms* symsp, const char* namep);
    ~Vdebugbench___024root();
    VL_UNCOPYABLE(Vdebugbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
