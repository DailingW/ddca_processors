// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdebugbench.h for the primary calling header

#include "Vdebugbench__pch.h"

VL_ATTR_COLD void Vdebugbench___024root___eval_static(Vdebugbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___eval_static\n"); );
    Vdebugbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__debugbench__DOT__clk__0 
        = vlSelfRef.debugbench__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__debugbench__DOT__reset__0 
        = vlSelfRef.debugbench__DOT__reset;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vdebugbench___024root___eval_final(Vdebugbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___eval_final\n"); );
    Vdebugbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdebugbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdebugbench___024root___eval_phase__stl(Vdebugbench___024root* vlSelf);

VL_ATTR_COLD void Vdebugbench___024root___eval_settle(Vdebugbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___eval_settle\n"); );
    Vdebugbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vdebugbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/private/tmp/rtl_debugbench.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vdebugbench___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vdebugbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdebugbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vdebugbench___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vdebugbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<SData/*9:0*/, 256> Vdebugbench__ConstPool__TABLE_h6944f904_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vdebugbench__ConstPool__TABLE_h3c44eaed_0;

VL_ATTR_COLD void Vdebugbench___024root___stl_sequent__TOP__0(Vdebugbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___stl_sequent__TOP__0\n"); );
    Vdebugbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ debugbench__DOT__dut__DOT__arm__DOT__hu__DOT__PCWritePendingF;
    debugbench__DOT__dut__DOT__arm__DOT__hu__DOT__PCWritePendingF = 0;
    // Body
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
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW 
        = ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__MemtoRegW)
            ? vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ReadDataW
            : vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultW);
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__stallD 
        = ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__MemtoRegE) 
           & (((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3E) 
               == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA2D)) 
              | ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__A3E) 
                 == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__RA1D))));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__PCSD 
        = ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__c__DOT__RegWriteD) 
           & (0x0000f000U == (0x0000f000U & vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__InstrD)));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__SrcAE 
        = ((0U == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__FwdAE))
            ? vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD1E
            : ((1U == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__FwdAE))
                ? vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW
                : vlSelfRef.debugbench__DOT__DataAdr));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__WriteDataE 
        = ((0U == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__FwdBE))
            ? vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD2E
            : ((1U == (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__FwdBE))
                ? vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW
                : vlSelfRef.debugbench__DOT__DataAdr));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__flushE 
        = ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__BranchTakenE) 
           | (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__stallD));
    debugbench__DOT__dut__DOT__arm__DOT__hu__DOT__PCWritePendingF 
        = ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__PCSD) 
           | ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__PCSE) 
              | (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__PCSM)));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__SrcBE 
        = ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__ALUSrcE)
            ? vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ExtImmE
            : vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__WriteDataE);
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__stallF 
        = ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__stallD) 
           | (IData)(debugbench__DOT__dut__DOT__arm__DOT__hu__DOT__PCWritePendingF));
    vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__flushD 
        = ((IData)(debugbench__DOT__dut__DOT__arm__DOT__hu__DOT__PCWritePendingF) 
           | ((IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__PCSW) 
              | (IData)(vlSelfRef.debugbench__DOT__dut__DOT__arm__DOT__BranchTakenE)));
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
}

VL_ATTR_COLD bool Vdebugbench___024root___eval_phase__stl(Vdebugbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___eval_phase__stl\n"); );
    Vdebugbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdebugbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vdebugbench___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vdebugbench___024root___stl_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vdebugbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdebugbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vdebugbench___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(negedge debugbench.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge debugbench.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge debugbench.reset)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([initial_nba])\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdebugbench___024root___ctor_var_reset(Vdebugbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebugbench___024root___ctor_var_reset\n"); );
    Vdebugbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->debugbench__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 891687583558991865ull);
    vlSelf->debugbench__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12909886252300841126ull);
    vlSelf->debugbench__DOT__WriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11995439601301049919ull);
    vlSelf->debugbench__DOT__DataAdr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11060966896197600156ull);
    vlSelf->debugbench__DOT__MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5474471378428600983ull);
    vlSelf->debugbench__DOT__dut__DOT__PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11192660506054438643ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__InstrD = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18286199845581385878ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__RA1D = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14835098852155866401ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__RA2D = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10583878786190402309ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__RA1E = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7366816425226056634ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__RA2E = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4006435437272073562ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__A3E = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11148579353232123679ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__A3M = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2292448539130270403ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__A3W = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8547148770549988760ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__RegWriteW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11593858223865287644ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__RegWriteM = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9055887928797388662ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__ALUSrcE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10196870853520909869ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__MemtoRegE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13613639189730404066ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__MemtoRegW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11852805401904476512ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__PCSD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18149889449602885239ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__PCSE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11686875595979792119ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__PCSM = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16613313671495020059ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__PCSW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3553437509470296483ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__BranchTakenE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 33519047258881045ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__stallF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9505168243368009956ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__stallD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11113086326406235012ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__flushE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18128535032246951747ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__flushD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105538854170178758ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__ImmSrcD = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13851249727616691163ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__ALUControlE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3246835771565002658ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__FwdAE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5744246395175686568ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__FwdBE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12322898115668928108ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteD = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10207989813552331207ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__c__DOT__RegWriteD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3349215932703557216ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__c__DOT__ALUControlD = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10030798207652703623ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15309559709691452111ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9320097135659817902ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__c__DOT__RegWriteE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 644134237165901476ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__c__DOT__MemWriteE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16832972190913114051ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__c__DOT__BranchE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5137581815167995185ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__c__DOT__MemtoRegM = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3991939542616593323ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__FlagWrite = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15614969640403111382ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5 = 0;
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5 = 0;
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__PCPlus4F = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6889942632596199913ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11133748767808488336ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6598076319383432300ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD1E = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9084507306820615432ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD2E = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6948623326128704767ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ExtImmE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4050107450541632907ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__SrcAE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15452728368207610232ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__SrcBE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14727748443067868095ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__WriteDataE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3811743989441083037ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultW = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6656843344348015200ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__ReadDataW = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3119864056446456237ull);
    vlSelf->debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 4254927175667633696ull);
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1789858072947128625ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->debugbench__DOT__dut__DOT__dmem__DOT__RAM[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16039941913020676432ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->debugbench__DOT__dut__DOT__imem__DOT__RAM[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12563333381344279824ull);
    }
    vlSelf->__Vdly__debugbench__DOT__dut__DOT__PC = 0;
    vlSelf->__VdlySet__debugbench__DOT__reset__v0 = 0;
    vlSelf->__VdlySet__debugbench__DOT__reset__v1 = 0;
    vlSelf->__VdlySet__debugbench__DOT__clk__v0 = 0;
    vlSelf->__VdlySet__debugbench__DOT__clk__v1 = 0;
    vlSelf->__VdlyVal__debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf__v0 = 0;
    vlSelf->__VdlyDim0__debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf__v0 = 0;
    vlSelf->__VdlySet__debugbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__debugbench__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__debugbench__DOT__reset__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
