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

extern const VlWide<128>/*4095:0*/ Vtestbench__ConstPool__CONST_hf7aac566_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vtestbench__ConstPool__TABLE_hf1b5509a_0;

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_sequent__TOP__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_3;
    __VdfgRegularize_hebeb780c_0_3 = 0;
    IData/*31:0*/ __VExpandSel_Lsb_1;
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__ra1 
        = (0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                          [(0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                           >> 2U))] 
                          >> 0x0000000fU));
    vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__wa3 
        = (0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                          [(0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                           >> 2U))] 
                          >> 7U));
    __VdfgRegularize_hebeb780c_0_3 = (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                      [(0x0000003fU 
                                        & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                           >> 2U))] 
                                      >> 0x0000001fU);
    vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__ra2 
        = (0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                          [(0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                           >> 2U))] 
                          >> 0x00000014U));
    vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__ad__DOT__funct3 
        = (7U & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                 [(0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                  >> 2U))] >> 0x0000000cU));
    vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__ad__DOT__RtypeSub 
        = (1U & ((vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                  [(0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                   >> 2U))] >> 0x0000001eU) 
                 & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                    [(0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                     >> 2U))] >> 5U)));
    __VExpandSel_Lsb_1 = (0x00000fe0U & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                         [(0x0000003fU 
                                           & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                              >> 2U))] 
                                         << 5U));
    vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__md__DOT__controls 
        = (0x000007ffU & (((0U == (0x0000001fU & __VExpandSel_Lsb_1))
                            ? 0U : (Vtestbench__ConstPool__CONST_hf7aac566_0
                                    [(((IData)(0x0000000aU) 
                                       + __VExpandSel_Lsb_1) 
                                      >> 5U)] << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & __VExpandSel_Lsb_1)))) 
                          | (Vtestbench__ConstPool__CONST_hf7aac566_0
                             [(__VExpandSel_Lsb_1 >> 5U)] 
                             >> (0x0000001fU & __VExpandSel_Lsb_1))));
    vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__a 
        = ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__ra1))
            ? 0U : vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__rf
           [vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__ra1]);
    vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__wd 
        = ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__ra2))
            ? 0U : vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__rf
           [vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__ra2]);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (1U 
                                                & Vtestbench__ConstPool__TABLE_hf1b5509a_0
                                                [(((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__ad__DOT__RtypeSub) 
                                                   << 5U) 
                                                  | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__ad__DOT__funct3) 
                                                      << 2U) 
                                                     | (3U 
                                                        & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__md__DOT__controls) 
                                                           >> 1U))))]);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = (1U 
                                                & (Vtestbench__ConstPool__TABLE_hf1b5509a_0
                                                   [
                                                   (((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__ad__DOT__RtypeSub) 
                                                     << 5U) 
                                                    | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__ad__DOT__funct3) 
                                                        << 2U) 
                                                       | (3U 
                                                          & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__md__DOT__controls) 
                                                             >> 1U))))] 
                                                   >> 1U));
    vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__ImmExt 
        = ((0x00000200U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__md__DOT__controls))
            ? (((0x00000100U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__md__DOT__controls))
                 ? ((0x7ff80000U & ((- (IData)((IData)(__VdfgRegularize_hebeb780c_0_3))) 
                                    << 0x00000013U)) 
                    | ((0x0007f800U & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                       [(0x0000003fU 
                                         & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                            >> 2U))] 
                                       >> 1U)) | ((0x00000400U 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                                      [
                                                      (0x0000003fU 
                                                       & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                                          >> 2U))] 
                                                      >> 0x0000000aU)) 
                                                  | (0x000003ffU 
                                                     & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                                        [
                                                        (0x0000003fU 
                                                         & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                                            >> 2U))] 
                                                        >> 0x00000015U)))))
                 : ((0x7ffff800U & ((- (IData)((IData)(__VdfgRegularize_hebeb780c_0_3))) 
                                    << 0x0000000bU)) 
                    | ((0x00000400U & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                       [(0x0000003fU 
                                         & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                            >> 2U))] 
                                       << 3U)) | ((0x000003f0U 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                                      [
                                                      (0x0000003fU 
                                                       & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                                          >> 2U))] 
                                                      >> 0x00000015U)) 
                                                  | (0x0000000fU 
                                                     & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                                        [
                                                        (0x0000003fU 
                                                         & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                                            >> 2U))] 
                                                        >> 8U)))))) 
               << 1U) : (((- (IData)((IData)(__VdfgRegularize_hebeb780c_0_3))) 
                          << 0x0000000cU) | ((0x00000fe0U 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                                 [(0x0000003fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                                      >> 2U))] 
                                                 >> 0x00000014U)) 
                                             | ((0x00000100U 
                                                 & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__md__DOT__controls))
                                                 ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__wa3)
                                                 : (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__ra2)))));
    vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__PCTarget 
        = (vlSelfRef.testbench__DOT__dut__DOT__PC + vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__ImmExt);
    vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__b 
        = ((0x00000080U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__md__DOT__controls))
            ? vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__ImmExt
            : vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__wd);
    vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__a 
        = ((4U & Vtestbench__ConstPool__TABLE_hf1b5509a_0
            [(((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__ad__DOT__RtypeSub) 
               << 5U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__ad__DOT__funct3) 
                          << 2U) | (3U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__md__DOT__controls) 
                                          >> 1U))))])
            ? (1U & (- (IData)(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1)) 
                                   & VL_LTS_III(32, vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__a, vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__b))))))
            : ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1)
                ? ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                    ? (vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__b 
                       | vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__a)
                    : (vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__b 
                       & vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__a))
                : (vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__a 
                   + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                      + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                          ? (~ vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__b)
                          : vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__b)))));
    vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__Result 
        = ((0U == (3U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__md__DOT__controls) 
                         >> 4U))) ? vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__a
            : ((1U == (3U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__md__DOT__controls) 
                             >> 4U))) ? vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
               [(0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__a 
                                >> 2U))] : ((IData)(4U) 
                                            + vlSelfRef.testbench__DOT__dut__DOT__PC)));
    vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__PCSrc 
        = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__md__DOT__controls) 
                 | ((0U == vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__a) 
                    & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__md__DOT__controls) 
                       >> 3U))));
    vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__PCNext 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__PCSrc)
            ? vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__PCTarget
            : ((IData)(4U) + vlSelfRef.testbench__DOT__dut__DOT__PC));
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
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge testbench.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge testbench.clk)\n");
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
    vlSelf->testbench__DOT__cycle = 0;
    vlSelf->testbench__DOT__dut__DOT__PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11538613234525564121ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__PCSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12569329067287860897ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__PCNext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9286844249731181958ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__PCTarget = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14962237541339242589ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__ImmExt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13170698325151042635ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__Result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6393871326450103019ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10111317890365733168ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6917378963568696569ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__ra1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7586956530572041253ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__ra2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18065322919806196519ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__wa3 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15795310229770378660ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3890707607181912859ull);
    }
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__ad__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1936444085247319050ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__ad__DOT__RtypeSub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1528744283322829795ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__md__DOT__controls = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13506089781287650311ull);
    vlSelf->testbench__DOT__dut__DOT__dmem__DOT__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12804908020987945445ull);
    vlSelf->testbench__DOT__dut__DOT__dmem__DOT__wd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13149029022366090880ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__dmem__DOT__RAM[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 49813727177523641ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__imem__DOT__RAM[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 430732897116815573ull);
    }
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_1 = 0;
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
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
