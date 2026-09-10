// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"

VL_ATTR_COLD void Vtestbench___024root___eval_static(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_static\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__clk__0 
        = vlSelfRef.testbench__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__reset__0 
        = vlSelfRef.testbench__DOT__reset;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtestbench___024root___eval_final(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_final\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtestbench___024root___eval_phase__stl(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_settle(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_settle\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtestbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("testbench.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtestbench___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtestbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtestbench___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtestbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<SData/*9:0*/, 256> Vtestbench__ConstPool__TABLE_h6944f904_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtestbench__ConstPool__TABLE_h3c44eaed_0;

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_sequent__TOP__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ImmSrcD 
        = (3U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                 [((0x000000fcU & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                   >> 0x00000012U)) 
                   | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                            >> 0x0000001aU)))] >> 6U));
    if ((1U & Vtestbench__ConstPool__TABLE_h6944f904_0
         [((0x000000fcU & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                           >> 0x00000012U)) | (3U & 
                                               (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                >> 0x0000001aU)))])) {
        vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__ALUControlD 
            = (3U & (0x03000012U >> (0x0000001eU & 
                                     (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                      >> 0x00000014U))));
        vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteD 
            = ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteD)) 
               | (2U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                        >> 0x00000013U)));
        vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteD 
            = ((2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteD)) 
               | ((vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                   >> 0x00000014U) & ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__ALUControlD)) 
                                      | (1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__ALUControlD)))));
    } else {
        vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__ALUControlD = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteD = 0U;
    }
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__dec__DOT__RegW 
        = (1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                 [((0x000000fcU & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                   >> 0x00000012U)) 
                   | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                            >> 0x0000001aU)))] >> 3U));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA1D 
        = (0x0000000fU & ((vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                           >> 0x00000010U) | (- (IData)(
                                                        (1U 
                                                         & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                                            [
                                                            ((0x000000fcU 
                                                              & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                                 >> 0x00000012U)) 
                                                             | (3U 
                                                                & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                                   >> 0x0000001aU)))] 
                                                            >> 8U))))));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA2D 
        = (0x0000000fU & ((0x00000200U & Vtestbench__ConstPool__TABLE_h6944f904_0
                           [((0x000000fcU & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                             >> 0x00000012U)) 
                             | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                      >> 0x0000001aU)))])
                           ? (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                              >> 0x0000000cU) : vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge 
        = ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5)) 
           == (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                     >> 1U)));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__FwdAE 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RegWriteM) 
            & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA1E) 
               == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3M)))
            ? 2U : (1U & (- (IData)(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RegWriteW) 
                                     & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA1E) 
                                        == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3W)))))));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__FwdBE 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RegWriteM) 
            & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA2E) 
               == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3M)))
            ? 2U : (1U & (- (IData)(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RegWriteW) 
                                     & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA2E) 
                                        == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3W)))))));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__MemtoRegW)
            ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ReadDataW
            : vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultW);
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSD 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__dec__DOT__RegW) 
           & (0x0000f000U == (0x0000f000U & vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD)));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__stallD 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__MemtoRegE) 
           & (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3E) 
               == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA2D)) 
              | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3E) 
                 == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA1D))));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__FlagWrite 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteE) 
           & (- (IData)(Vtestbench__ConstPool__TABLE_h3c44eaed_0
                        [((((4U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                   << 1U)) | ((2U & 
                                               ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                    >> 1U)))) 
                           << 6U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge) 
                                      << 5U) | ((0x00000010U 
                                                 & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                                    << 4U)) 
                                                | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))])));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__BranchTakenE 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__BranchE) 
           & Vtestbench__ConstPool__TABLE_h3c44eaed_0
           [((((4U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                      << 1U)) | ((2U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                      >> 1U)))) 
              << 6U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge) 
                         << 5U) | ((0x00000010U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                                   << 4U)) 
                                   | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))]);
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a 
        = ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__FwdAE))
            ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD1E
            : ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__FwdAE))
                ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW
                : vlSelfRef.testbench__DOT__DataAdr));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__WriteDataE 
        = ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__FwdBE))
            ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD2E
            : ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__FwdBE))
                ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW
                : vlSelfRef.testbench__DOT__DataAdr));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__hu__DOT__PCWritePendingF 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSD) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSE) 
              | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSM)));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__flushE 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__BranchTakenE) 
           | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__stallD));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUSrcE)
            ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ExtImmE
            : vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__WriteDataE);
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a)) 
                                    + ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControlE)))) 
                                       + (QData)((IData)(
                                                         ((1U 
                                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControlE))
                                                           ? 
                                                          (~ vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b)
                                                           : vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b))))));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__flagreg0__DOT__d 
        = (((IData)(((~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControlE) 
                         >> 1U)) & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum 
                                    >> 0x00000020U))) 
            << 1U) | (1U & ((~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControlE) 
                                >> 1U)) & ((~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControlE) 
                                               ^ ((vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b 
                                                   ^ vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a) 
                                                  >> 0x0000001fU))) 
                                           & ((vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a 
                                               >> 0x0000001fU) 
                                              ^ (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum 
                                                         >> 0x0000001fU)))))));
    if ((0U == (2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControlE)))) {
        vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE 
            = (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum);
    } else if ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControlE))) {
        vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE 
            = (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a 
               & vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b);
    } else if ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControlE))) {
        vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE 
            = (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a 
               | vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b);
    }
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__PCNextF 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__BranchTakenE)
            ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE
            : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSW)
                ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW
                : ((IData)(4U) + vlSelfRef.testbench__DOT__dut__DOT__PC)));
}

VL_ATTR_COLD bool Vtestbench___024root___eval_phase__stl(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__stl\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vtestbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtestbench___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtestbench___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vtestbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtestbench___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(negedge testbench.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge testbench.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge testbench.reset)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([initial_nba])\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___ctor_var_reset(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___ctor_var_reset\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->testbench__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6000971430642848038ull);
    vlSelf->testbench__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7469142288805494519ull);
    vlSelf->testbench__DOT__WriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8245022015734017942ull);
    vlSelf->testbench__DOT__DataAdr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4145201284576670955ull);
    vlSelf->testbench__DOT__MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9870066378375929810ull);
    vlSelf->testbench__DOT__dut__DOT__PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11538613234525564121ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__InstrD = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12745630073290996970ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__RA1D = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14286178732143506221ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__RA2D = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3797252747951549206ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__RA1E = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 481193663216224144ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__RA2E = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14183312293741381944ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__A3E = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16614475449592254364ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__A3M = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13347061822746345881ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__A3W = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7527700869698081302ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__RegWriteW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9368290802785385358ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__RegWriteM = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3683230009511979800ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__ALUSrcE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15946562741083349557ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__MemtoRegE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2215238121427760049ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__MemtoRegW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8216929916688964039ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__PCSD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 438893505154618492ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__PCSE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5404539446931583159ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__PCSM = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5762748330793054850ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__PCSW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8406434038001845506ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__BranchTakenE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12689806638182534521ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__stallD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7993046890816781269ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__flushE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7514151637386518369ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__ImmSrcD = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13500547413527171129ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__ALUControlE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16275628196406974213ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__FwdAE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 113147559793702608ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__FwdBE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8563093319162498397ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteD = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13045165002374161725ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__c__DOT__ALUControlD = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16360019929223970854ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 119872189354973161ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9229008212018828407ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__c__DOT__RegWriteE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15269851194377643434ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__c__DOT__MemWriteE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9064410909436766540ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__c__DOT__BranchE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10706245148947378387ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__c__DOT__MemtoRegM = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13776031519369510271ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__FlagWrite = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17961717791623434464ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5 = 0;
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5 = 0;
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__flagreg0__DOT__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16054095369060974356ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12790961693679329718ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__c__DOT__dec__DOT__RegW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10693076567597992688ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__dp__DOT__PCNextF = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9025430254199079642ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14314620063130735002ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 512807922301211453ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD1E = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14186508889634375568ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD2E = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1164127251452074470ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ExtImmE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 118840069000564048ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__dp__DOT__WriteDataE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 62092490589955541ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultW = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9623507470034989433ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ReadDataW = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8271433783849079476ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3311285466559997735ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8613626279603130629ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 10737129308713284549ull);
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 119893520769685466ull);
    }
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__hu__DOT__PCWritePendingF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16076056193016601382ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__dmem__DOT__RAM[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 49813727177523641ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__imem__DOT__RAM[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 430732897116815573ull);
    }
    vlSelf->__Vdly__testbench__DOT__dut__DOT__arm__DOT__InstrD = 0;
    vlSelf->__VdlySet__testbench__DOT__reset__v0 = 0;
    vlSelf->__VdlySet__testbench__DOT__reset__v1 = 0;
    vlSelf->__VdlySet__testbench__DOT__clk__v0 = 0;
    vlSelf->__VdlySet__testbench__DOT__clk__v1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__reset__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
