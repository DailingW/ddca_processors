// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdebugbench.h for the primary calling header

#include "Vdebugbench__pch.h"

VlCoroutine Vdebugbench___024root___eval_initial__TOP__Vtiming__0(Vdebugbench___024root* vlSelf);
VlCoroutine Vdebugbench___024root___eval_initial__TOP__Vtiming__1(Vdebugbench___024root* vlSelf);

void Vdebugbench___024root___eval_initial(Vdebugbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___eval_initial\n"); );
    Vdebugbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        VL_READMEM_N(true, 32, 64, 0, "memfile.dat"s
                     ,  &(vlSelfRef.debugbench__DOT__dut__DOT__imem__DOT__RAM)
                     , 0, ~0ULL);
    }
    Vdebugbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vdebugbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vdebugbench___024root___eval_initial__TOP__Vtiming__0(Vdebugbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vdebugbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__debugbench__DOT__reset__v0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000016ULL, 
                                         nullptr, "/private/tmp/rtl_debugbench.sv", 
                                         10);
    vlSelfRef.__VdlySet__debugbench__DOT__reset__v1 = 1U;
    co_return;
}

VlCoroutine Vdebugbench___024root___eval_initial__TOP__Vtiming__1(Vdebugbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vdebugbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        vlSelfRef.__VdlySet__debugbench__DOT__clk__v0 = 1U;
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "/private/tmp/rtl_debugbench.sv", 
                                             14);
        vlSelfRef.__VdlySet__debugbench__DOT__clk__v1 = 1U;
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "/private/tmp/rtl_debugbench.sv", 
                                             14);
    }
    co_return;
}

bool Vdebugbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*0:0*/, 512> Vdebugbench__ConstPool__TABLE_h3c44eaed_0;
extern const VlUnpacked<SData/*9:0*/, 256> Vdebugbench__ConstPool__TABLE_h6944f904_0;

void Vdebugbench___024root___nba_sequent__TOP__4(Vdebugbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___nba_sequent__TOP__4\n"); );
    Vdebugbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ debugbench__DOT__dut__DOT__arm__DOT__hu__DOT__PCWritePendingF;
    debugbench__DOT__dut__DOT__arm__DOT__hu__DOT__PCWritePendingF = 0;
    // Body
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__MemtoRegW 
        = ((~ (IData)(vlSelfRef.debugbench__DOT__reset)) 
           & (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__MemtoRegM));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__PCSW 
        = ((~ (IData)(vlSelfRef.debugbench__DOT__reset)) 
           & (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__PCSM));
    vlSelfRef.debugbench__DOT__MemWrite = ((~ (IData)(vlSelfRef.debugbench__DOT__reset)) 
                                           & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__MemWriteE) 
                                              & Vdebugbench__ConstPool__TABLE_h3c44eaed_0
                                              [((((4U 
                                                   & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                                      << 1U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                           >> 1U)))) 
                                                 << 6U) 
                                                | ((((1U 
                                                      & (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5)) 
                                                     == 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                                         >> 1U))) 
                                                    << 5U) 
                                                   | ((0x00000010U 
                                                       & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                                          << 4U)) 
                                                      | (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))]));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RegWriteW 
        = ((~ (IData)(vlSelfRef.debugbench__DOT__reset)) 
           & (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RegWriteM));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW 
        = ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__MemtoRegW)
            ? vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ReadDataW
            : vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultW);
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__MemtoRegM 
        = ((~ (IData)(vlSelfRef.debugbench__DOT__reset)) 
           & (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__MemtoRegE));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__PCSM 
        = ((~ (IData)(vlSelfRef.debugbench__DOT__reset)) 
           & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__PCSE) 
              & ((~ (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__BranchTakenE)) 
                 & Vdebugbench__ConstPool__TABLE_h3c44eaed_0
                 [((((4U & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                            << 1U)) | ((2U & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                              << 1U)) 
                                       | (1U & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                >> 1U)))) 
                    << 6U) | ((((1U & (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5)) 
                                == (1U & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                          >> 1U))) 
                               << 5U) | ((0x00000010U 
                                          & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                             << 4U)) 
                                         | (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))])));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__MemWriteE 
        = (1U & ((~ (IData)(vlSelfRef.debugbench__DOT__reset)) 
                 & ((~ (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__flushE)) 
                    & (Vdebugbench__ConstPool__TABLE_h6944f904_0
                       [((0x000000fcU & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                                         >> 0x00000012U)) 
                         | (3U & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                                  >> 0x0000001aU)))] 
                       >> 2U))));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RegWriteM 
        = ((~ (IData)(vlSelfRef.debugbench__DOT__reset)) 
           & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__RegWriteE) 
              & Vdebugbench__ConstPool__TABLE_h3c44eaed_0
              [((((4U & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                         << 1U)) | ((2U & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                             >> 1U)))) 
                 << 6U) | ((((1U & (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5)) 
                             == (1U & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                       >> 1U))) << 5U) 
                           | ((0x00000010U & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                              << 4U)) 
                              | (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))]));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__MemtoRegE 
        = (1U & ((~ (IData)(vlSelfRef.debugbench__DOT__reset)) 
                 & ((~ (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__flushE)) 
                    & (Vdebugbench__ConstPool__TABLE_h6944f904_0
                       [((0x000000fcU & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                                         >> 0x00000012U)) 
                         | (3U & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                                  >> 0x0000001aU)))] 
                       >> 4U))));
    if (vlSelfRef.debugbench__DOT__reset) {
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA1E = 0U;
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA2E = 0U;
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD1E = 0U;
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD2E = 0U;
        vlSelfRef.debugbench__DOT__WriteData = 0U;
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3W = 0U;
        vlSelfRef.debugbench__DOT__DataAdr = 0U;
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3M = 0U;
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3E = 0U;
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5 = 0U;
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5 = 0U;
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE = 0U;
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__ALUControlE = 0U;
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD = 0U;
    } else {
        vlSelfRef.debugbench__DOT__WriteData = vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__WriteDataE;
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3W 
            = vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3M;
        vlSelfRef.debugbench__DOT__DataAdr = vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE;
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3M 
            = vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3E;
        if ((2U & (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__FlagWrite))) {
            vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5 
                = ((2U & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE 
                          >> 0x0000001eU)) | (0U == vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE));
        }
        if ((1U & (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__FlagWrite))) {
            vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5 
                = (((IData)(((~ ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__ALUControlE) 
                                 >> 1U)) & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum 
                                            >> 0x00000020U))) 
                    << 1U) | (1U & ((~ ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__ALUControlE) 
                                        >> 1U)) & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__ALUControlE) 
                                                     ^ 
                                                     ((vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__SrcBE 
                                                       ^ vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__SrcAE) 
                                                      >> 0x0000001fU))) 
                                                   & ((vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__SrcAE 
                                                       >> 0x0000001fU) 
                                                      ^ (IData)(
                                                                (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum 
                                                                 >> 0x0000001fU)))))));
        }
        if (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__flushE) {
            vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA1E = 0U;
            vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA2E = 0U;
            vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD1E = 0U;
            vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD2E = 0U;
            vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3E = 0U;
            vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE = 0U;
            vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__ALUControlE = 0U;
        } else {
            vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA1E 
                = vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA1D;
            vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA2E 
                = vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA2D;
            vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD1E 
                = ((0x0fU == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA1D))
                    ? ((IData)(4U) + vlSelfRef.debugbench__DOT__dut__DOT__PC)
                    : ((0x0eU >= (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA1D))
                        ? vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf
                       [vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA1D]
                        : 0U));
            vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD2E 
                = ((0x0fU == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA2D))
                    ? ((IData)(4U) + vlSelfRef.debugbench__DOT__dut__DOT__PC)
                    : ((0x0eU >= (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA2D))
                        ? vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf
                       [vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA2D]
                        : 0U));
            vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3E 
                = (0x0000000fU & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                                  >> 0x0000000cU));
            vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE 
                = (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                   >> 0x0000001cU);
            vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__ALUControlE 
                = vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__ALUControlD;
        }
        if (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__flushD) {
            vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__stallD)))) {
            vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                = vlSelfRef.debugbench__DOT__dut__DOT__imem__DOT__RAM
                [(0x0000003fU & (vlSelfRef.debugbench__DOT__dut__DOT__PC 
                                 >> 2U))];
        }
    }
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__PCSE 
        = ((~ (IData)(vlSelfRef.debugbench__DOT__reset)) 
           & ((~ (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__flushE)) 
              & (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__PCSD)));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__FwdAE 
        = (((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RegWriteM) 
            & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA1E) 
               == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3M)))
            ? 2U : (1U & (- (IData)(((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RegWriteW) 
                                     & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA1E) 
                                        == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3W)))))));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__FwdBE 
        = (((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RegWriteM) 
            & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA2E) 
               == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3M)))
            ? 2U : (1U & (- (IData)(((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RegWriteW) 
                                     & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA2E) 
                                        == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3W)))))));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__RegWriteE 
        = ((~ (IData)(vlSelfRef.debugbench__DOT__reset)) 
           & ((~ (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__flushE)) 
              & (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__RegWriteD)));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__WriteDataE 
        = ((0U == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__FwdBE))
            ? vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD2E
            : ((1U == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__FwdBE))
                ? vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW
                : vlSelfRef.debugbench__DOT__DataAdr));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__SrcAE 
        = ((0U == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__FwdAE))
            ? vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD1E
            : ((1U == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__FwdAE))
                ? vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW
                : vlSelfRef.debugbench__DOT__DataAdr));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__SrcBE 
        = ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__ALUSrcE)
            ? vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ExtImmE
            : vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__WriteDataE);
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__FlagWrite 
        = ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteE) 
           & (- (IData)(Vdebugbench__ConstPool__TABLE_h3c44eaed_0
                        [((((4U & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                   << 1U)) | ((2U & 
                                               ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                    >> 1U)))) 
                           << 6U) | ((((1U & (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5)) 
                                       == (1U & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                                 >> 1U))) 
                                      << 5U) | ((0x00000010U 
                                                 & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                                    << 4U)) 
                                                | (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))])));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__BranchTakenE 
        = ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__BranchE) 
           & Vdebugbench__ConstPool__TABLE_h3c44eaed_0
           [((((4U & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                      << 1U)) | ((2U & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                      >> 1U)))) 
              << 6U) | ((((1U & (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5)) 
                          == (1U & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                    >> 1U))) << 5U) 
                        | ((0x00000010U & ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                           << 4U)) 
                           | (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))]);
    vlSelfRef.debugbench__DOT__dut__DOT__PC = vlSelfRef.__Vdly__debugbench__DOT__dut__DOT__PC;
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__SrcAE)) 
                                    + ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__ALUControlE)))) 
                                       + (QData)((IData)(
                                                         ((1U 
                                                           & (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__ALUControlE))
                                                           ? 
                                                          (~ vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__SrcBE)
                                                           : vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__SrcBE))))));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__PCPlus4F 
        = ((IData)(4U) + vlSelfRef.debugbench__DOT__dut__DOT__PC);
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__ImmSrcD 
        = (3U & (Vdebugbench__ConstPool__TABLE_h6944f904_0
                 [((0x000000fcU & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                                   >> 0x00000012U)) 
                   | (3U & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                            >> 0x0000001aU)))] >> 6U));
    if ((1U & Vdebugbench__ConstPool__TABLE_h6944f904_0
         [((0x000000fcU & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                           >> 0x00000012U)) | (3U & 
                                               (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                >> 0x0000001aU)))])) {
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__ALUControlD 
            = (3U & (0x03000012U >> (0x0000001eU & 
                                     (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                                      >> 0x00000014U))));
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteD 
            = ((1U & (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteD)) 
               | (2U & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                        >> 0x00000013U)));
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteD 
            = ((2U & (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteD)) 
               | ((vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                   >> 0x00000014U) & ((0U == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__ALUControlD)) 
                                      | (1U == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__ALUControlD)))));
    } else {
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__ALUControlD = 0U;
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteD = 0U;
    }
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA1D 
        = (0x0000000fU & ((vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                           >> 0x00000010U) | (- (IData)(
                                                        (1U 
                                                         & (Vdebugbench__ConstPool__TABLE_h6944f904_0
                                                            [
                                                            ((0x000000fcU 
                                                              & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                                 >> 0x00000012U)) 
                                                             | (3U 
                                                                & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                                   >> 0x0000001aU)))] 
                                                            >> 8U))))));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA2D 
        = (0x0000000fU & ((0x00000200U & Vdebugbench__ConstPool__TABLE_h6944f904_0
                           [((0x000000fcU & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                                             >> 0x00000012U)) 
                             | (3U & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                                      >> 0x0000001aU)))])
                           ? (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                              >> 0x0000000cU) : vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__RegWriteD 
        = (1U & (Vdebugbench__ConstPool__TABLE_h6944f904_0
                 [((0x000000fcU & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                                   >> 0x00000012U)) 
                   | (3U & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                            >> 0x0000001aU)))] >> 3U));
    if ((0U == (2U & (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__ALUControlE)))) {
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE 
            = (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum);
    } else if ((2U == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__ALUControlE))) {
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE 
            = (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__SrcAE 
               & vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__SrcBE);
    } else if ((3U == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__ALUControlE))) {
        vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE 
            = (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__SrcAE 
               | vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__SrcBE);
    }
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__stallD 
        = ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__MemtoRegE) 
           & (((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3E) 
               == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA2D)) 
              | ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3E) 
                 == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA1D))));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__PCSD 
        = ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__RegWriteD) 
           & (0x0000f000U == (0x0000f000U & vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD)));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__flushE 
        = ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__BranchTakenE) 
           | (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__stallD));
    debugbench__DOT__dut__DOT__arm__DOT__hu__DOT__PCWritePendingF 
        = ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__PCSD) 
           | ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__PCSE) 
              | (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__PCSM)));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__stallF 
        = ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__stallD) 
           | (IData)(debugbench__DOT__dut__DOT__arm__DOT__hu__DOT__PCWritePendingF));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__flushD 
        = ((IData)(debugbench__DOT__dut__DOT__arm__DOT__hu__DOT__PCWritePendingF) 
           | ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__PCSW) 
              | (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__BranchTakenE)));
}

void Vdebugbench___024root___eval_nba(Vdebugbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___eval_nba\n"); );
    Vdebugbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            vlSelfRef.__Vdly__debugbench__DOT__dut__DOT__PC 
                = vlSelfRef.debugbench__DOT__dut__DOT__PC;
            if (vlSelfRef.debugbench__DOT__reset) {
                vlSelfRef.__Vdly__debugbench__DOT__dut__DOT__PC = 0U;
                vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteE = 0U;
                vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultW = 0U;
                vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ReadDataW = 0U;
                vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ExtImmE = 0U;
            } else {
                if ((1U & (~ (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__stallF)))) {
                    vlSelfRef.__Vdly__debugbench__DOT__dut__DOT__PC 
                        = ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__BranchTakenE)
                            ? vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE
                            : ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__PCSW)
                                ? vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW
                                : vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__PCPlus4F));
                }
                if (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__flushE) {
                    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteE = 0U;
                    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ExtImmE = 0U;
                } else {
                    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteE 
                        = vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteD;
                    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ExtImmE 
                        = ((0U == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__ImmSrcD))
                            ? (0x000000ffU & vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD)
                            : ((1U == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__ImmSrcD))
                                ? (0x00000fffU & vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD)
                                : ((((- (IData)((1U 
                                                 & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                    >> 0x00000017U)))) 
                                     << 0x0000001aU) 
                                    | (0x03fffffcU 
                                       & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                                          << 2U))) 
                                   & (- (IData)((2U 
                                                 == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__ImmSrcD)))))));
                }
                vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultW 
                    = vlSelfRef.debugbench__DOT__DataAdr;
                vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ReadDataW 
                    = vlSelfRef.debugbench__DOT__dut__DOT__dmem__DOT__RAM
                    [(0x0000003fU & (vlSelfRef.debugbench__DOT__DataAdr 
                                     >> 2U))];
            }
            vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__BranchE 
                = (1U & ((~ (IData)(vlSelfRef.debugbench__DOT__reset)) 
                         & ((~ (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__flushE)) 
                            & (Vdebugbench__ConstPool__TABLE_h6944f904_0
                               [((0x000000fcU & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                 >> 0x00000012U)) 
                                 | (3U & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                                          >> 0x0000001aU)))] 
                               >> 1U))));
            vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__ALUSrcE 
                = (1U & ((~ (IData)(vlSelfRef.debugbench__DOT__reset)) 
                         & ((~ (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__flushE)) 
                            & (Vdebugbench__ConstPool__TABLE_h6944f904_0
                               [((0x000000fcU & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                 >> 0x00000012U)) 
                                 | (3U & (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD 
                                          >> 0x0000001aU)))] 
                               >> 5U))));
        }
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__1___VdlyVal__debugbench__DOT__dut__DOT__dmem__DOT__RAM__v0;
            __Vinline_0__nba_sequent__TOP__1___VdlyVal__debugbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 0;
            CData/*5:0*/ __Vinline_0__nba_sequent__TOP__1___VdlyDim0__debugbench__DOT__dut__DOT__dmem__DOT__RAM__v0;
            __Vinline_0__nba_sequent__TOP__1___VdlyDim0__debugbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__1___VdlySet__debugbench__DOT__dut__DOT__dmem__DOT__RAM__v0;
            __Vinline_0__nba_sequent__TOP__1___VdlySet__debugbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 0;
            __Vinline_0__nba_sequent__TOP__1___VdlySet__debugbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 0U;
            vlSelfRef.__VdlySet__debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf__v0 = 0U;
            if (vlSelfRef.debugbench__DOT__MemWrite) {
                __Vinline_0__nba_sequent__TOP__1___VdlyVal__debugbench__DOT__dut__DOT__dmem__DOT__RAM__v0 
                    = vlSelfRef.debugbench__DOT__WriteData;
                __Vinline_0__nba_sequent__TOP__1___VdlyDim0__debugbench__DOT__dut__DOT__dmem__DOT__RAM__v0 
                    = (0x0000003fU & (vlSelfRef.debugbench__DOT__DataAdr 
                                      >> 2U));
                __Vinline_0__nba_sequent__TOP__1___VdlySet__debugbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 1U;
            }
            if (vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RegWriteW) {
                if ((0x0eU >= (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3W))) {
                    vlSelfRef.__VdlyVal__debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf__v0 
                        = vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW;
                    vlSelfRef.__VdlyDim0__debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf__v0 
                        = vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3W;
                    vlSelfRef.__VdlySet__debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf__v0 = 1U;
                }
            }
            if (__Vinline_0__nba_sequent__TOP__1___VdlySet__debugbench__DOT__dut__DOT__dmem__DOT__RAM__v0) {
                vlSelfRef.debugbench__DOT__dut__DOT__dmem__DOT__RAM[__Vinline_0__nba_sequent__TOP__1___VdlyDim0__debugbench__DOT__dut__DOT__dmem__DOT__RAM__v0] 
                    = __Vinline_0__nba_sequent__TOP__1___VdlyVal__debugbench__DOT__dut__DOT__dmem__DOT__RAM__v0;
            }
        }
    }
    if (VL_UNLIKELY(((1ULL & vlSelfRef.__VnbaTriggered[0U])))) {
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            VL_WRITEF_NX("t=%0t PC=%h InstrF=%h InstrD=%h ALUResultE=%0d ALUResultM=%0d WriteDataM=%0d MemWriteM=%b RegWriteM=%b RegWriteW=%b MemtoRegE=%b MemtoRegW=%b BranchTakenE=%b PCSD/E/M/W=%b%b%b%b FwdA/B=%b/%b StallF/D=%b/%b FlushD/E=%b/%b A3E/M/W=%0d/%0d/%0d RA1D/RA2D=%0d/%0d RA1E/RA2E=%0d/%0d RD1E=%0d RD2E=%0d SrcAE=%0d SrcBE=%0d WD_E=%0d ALUCtrlE=%b ResultW=%0d rf2=%0d rf3=%0d rf4=%0d rf5=%0d rf7=%0d\n",43, 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',32,vlSelfRef.debugbench__DOT__dut__DOT__PC
                         , '#',32,vlSelfRef.debugbench__DOT__dut__DOT__imem__DOT__RAM
                         [(0x0000003fU & (vlSelfRef.debugbench__DOT__dut__DOT__PC 
                                          >> 2U))], '#',32,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD
                         , '#',32,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE
                         , '#',32,vlSelfRef.debugbench__DOT__DataAdr
                         , '#',32,vlSelfRef.debugbench__DOT__WriteData
                         , '#',1,(IData)(vlSelfRef.debugbench__DOT__MemWrite)
                         , '#',1,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RegWriteM
                         , '#',1,(IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RegWriteW)
                         , '#',1,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__MemtoRegE
                         , '#',1,(IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__MemtoRegW)
                         , '#',1,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__BranchTakenE
                         , '#',1,(IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__PCSD)
                         , '#',1,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__PCSE
                         , '#',1,(IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__PCSM)
                         , '#',1,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__PCSW
                         , '#',2,(IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__FwdAE)
                         , '#',2,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__FwdBE
                         , '#',1,(IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__stallF)
                         , '#',1,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__stallD
                         , '#',1,(IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__flushD)
                         , '#',1,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__flushE
                         , '#',4,(IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3E)
                         , '#',4,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3M
                         , '#',4,(IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3W)
                         , '#',4,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA1D
                         , '#',4,(IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA2D)
                         , '#',4,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA1E
                         , '#',4,(IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA2E)
                         , '#',32,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD1E
                         , '#',32,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD2E
                         , '#',32,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__SrcAE
                         , '#',32,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__SrcBE
                         , '#',32,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__WriteDataE
                         , '#',2,(IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__ALUControlE)
                         , '#',32,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW
                         , '#',32,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf[2U]
                         , '#',32,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf[3U]
                         , '#',32,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf[4U]
                         , '#',32,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf[5U]
                         , '#',32,vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf[7U]);
            if (VL_UNLIKELY(((0x00000000000001a4ULL 
                              < VL_TIME_UNITED_Q(1))))) {
                VL_FINISH_MT("/private/tmp/rtl_debugbench.sv", 43, "");
            }
        }
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            if (vlSelfRef.__VdlySet__debugbench__DOT__clk__v0) {
                vlSelfRef.__VdlySet__debugbench__DOT__clk__v0 = 0U;
                vlSelfRef.debugbench__DOT__clk = 1U;
            }
            if (vlSelfRef.__VdlySet__debugbench__DOT__clk__v1) {
                vlSelfRef.__VdlySet__debugbench__DOT__clk__v1 = 0U;
                vlSelfRef.debugbench__DOT__clk = 0U;
            }
        }
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vdebugbench___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__5
            if (vlSelfRef.__VdlySet__debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf__v0) {
                vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf[vlSelfRef.__VdlyDim0__debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf__v0] 
                    = vlSelfRef.__VdlyVal__debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf__v0;
            }
        }
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__6
            if (vlSelfRef.__VdlySet__debugbench__DOT__reset__v0) {
                vlSelfRef.__VdlySet__debugbench__DOT__reset__v0 = 0U;
                vlSelfRef.debugbench__DOT__reset = 1U;
            }
            if (vlSelfRef.__VdlySet__debugbench__DOT__reset__v1) {
                vlSelfRef.__VdlySet__debugbench__DOT__reset__v1 = 0U;
                vlSelfRef.debugbench__DOT__reset = 0U;
            }
        }
    }
}

void Vdebugbench___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdebugbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vdebugbench___024root___eval_phase__act(Vdebugbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___eval_phase__act\n"); );
    Vdebugbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 4U) 
                                                         | ((((IData)(vlSelfRef.debugbench__DOT__reset) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__debugbench__DOT__reset__0))) 
                                                             << 2U) 
                                                            | ((((IData)(vlSelfRef.debugbench__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__debugbench__DOT__clk__0))) 
                                                                << 1U) 
                                                               | ((~ (IData)(vlSelfRef.debugbench__DOT__clk)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__debugbench__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__debugbench__DOT__clk__0 
            = vlSelfRef.debugbench__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__debugbench__DOT__reset__0 
            = vlSelfRef.debugbench__DOT__reset;
    }
    Vdebugbench___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdebugbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vdebugbench___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vdebugbench___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        {
            // Inlined CFunc: _timing_resume
            if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
                vlSelfRef.__VdlySched.resume();
            }
        }
    }
    return (__VactExecute);
}

bool Vdebugbench___024root___eval_phase__inact(Vdebugbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___eval_phase__inact\n"); );
    Vdebugbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/private/tmp/rtl_debugbench.sv", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vdebugbench___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vdebugbench___024root___eval_phase__nba(Vdebugbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___eval_phase__nba\n"); );
    Vdebugbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vdebugbench___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vdebugbench___024root___eval_nba(vlSelf);
        Vdebugbench___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vdebugbench___024root___eval(Vdebugbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___eval\n"); );
    Vdebugbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdebugbench___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/private/tmp/rtl_debugbench.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/private/tmp/rtl_debugbench.sv", 1, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vdebugbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/private/tmp/rtl_debugbench.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vdebugbench___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vdebugbench___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vdebugbench___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vdebugbench___024root___eval_debug_assertions(Vdebugbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___eval_debug_assertions\n"); );
    Vdebugbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
