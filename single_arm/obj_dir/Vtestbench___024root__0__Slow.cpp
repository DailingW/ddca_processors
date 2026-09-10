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

extern const VlUnpacked<CData/*0:0*/, 512> Vtestbench__ConstPool__TABLE_h3c44eaed_0;
extern const VlUnpacked<SData/*9:0*/, 256> Vtestbench__ConstPool__TABLE_h6944f904_0;

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_sequent__TOP__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge 
        = ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5)) 
           == (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                     >> 1U)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                                [(0x0000003fU 
                                                  & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                                     >> 2U))] 
                                                >> 0x0000001cU);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x0000000fU 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                                   [
                                                   (0x0000003fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                                       >> 2U))] 
                                                   >> 0x0000000cU));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = (0x0000003fU 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                                   [
                                                   (0x0000003fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                                       >> 2U))] 
                                                   >> 0x00000014U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_9 = (3U 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                                   [
                                                   (0x0000003fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                                       >> 2U))] 
                                                   >> 0x0000001aU));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__MemWrite 
        = (Vtestbench__ConstPool__TABLE_h3c44eaed_0
           [((((4U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                      << 1U)) | ((2U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                      >> 1U)))) 
              << 6U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge) 
                         << 5U) | ((0x00000010U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                                   << 4U)) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2))))] 
           & (Vtestbench__ConstPool__TABLE_h6944f904_0
              [(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                 << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))] 
              >> 2U));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__dec__DOT__RegW 
        = (1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                 [(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                    << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))] 
                 >> 3U));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RA1 
        = (0x0000000fU & ((vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                           [(0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                            >> 2U))] 
                           >> 0x00000010U) | (- (IData)(
                                                        (1U 
                                                         & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                                            [
                                                            (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                                                              << 2U) 
                                                             | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))] 
                                                            >> 8U))))));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ImmSrc 
        = (3U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                 [(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                    << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))] 
                 >> 6U));
    if ((1U & Vtestbench__ConstPool__TABLE_h6944f904_0
         [(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
            << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))])) {
        vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControl 
            = (3U & (0x03000012U >> (0x0000001eU & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))));
        vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagW 
            = ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagW)) 
               | (2U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                        << 1U)));
        vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagW 
            = ((2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagW)) 
               | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                  & ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControl)) 
                     | (1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControl)))));
    } else {
        vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControl = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagW = 0U;
    }
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RA2 
        = (0x0000000fU & ((0x00000200U & Vtestbench__ConstPool__TABLE_h6944f904_0
                           [(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                              << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))])
                           ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                           : vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                          [(0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                           >> 2U))]));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a 
        = ((0x0fU == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RA1))
            ? ((IData)(8U) + vlSelfRef.testbench__DOT__dut__DOT__PC)
            : ((0x0eU >= (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RA1))
                ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__rf__DOT__rf
               [vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RA1]
                : 0U));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__FlagWrite 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagW) 
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
                                                | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2))))])));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__WriteData 
        = ((0x0fU == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RA2))
            ? ((IData)(8U) + vlSelfRef.testbench__DOT__dut__DOT__PC)
            : ((0x0eU >= (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RA2))
                ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__rf__DOT__rf
               [vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RA2]
                : 0U));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b 
        = ((0x00000020U & Vtestbench__ConstPool__TABLE_h6944f904_0
            [(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
               << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))])
            ? ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ImmSrc))
                ? (0x000000ffU & vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                   [(0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                    >> 2U))]) : ((1U 
                                                  == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ImmSrc))
                                                  ? 
                                                 (0x00000fffU 
                                                  & vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                                  [
                                                  (0x0000003fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                                      >> 2U))])
                                                  : 
                                                 ((((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                                                   [
                                                                   (0x0000003fU 
                                                                    & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                                                       >> 2U))] 
                                                                   >> 0x00000017U)))) 
                                                    << 0x0000001aU) 
                                                   | (0x03fffffcU 
                                                      & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                                         [
                                                         (0x0000003fU 
                                                          & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                                             >> 2U))] 
                                                         << 2U))) 
                                                  & (- (IData)(
                                                               (2U 
                                                                == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ImmSrc)))))))
            : vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__WriteData);
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a)) 
                                    + ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControl)))) 
                                       + (QData)((IData)(
                                                         ((1U 
                                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControl))
                                                           ? 
                                                          (~ vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b)
                                                           : vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b))))));
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__flagreg0__DOT__d 
        = (((IData)(((~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControl) 
                         >> 1U)) & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum 
                                    >> 0x00000020U))) 
            << 1U) | (1U & ((~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControl) 
                                >> 1U)) & ((~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControl) 
                                               ^ ((vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b 
                                                   ^ vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a) 
                                                  >> 0x0000001fU))) 
                                           & ((vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a 
                                               >> 0x0000001fU) 
                                              ^ (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum 
                                                         >> 0x0000001fU)))))));
    if ((0U == (2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControl)))) {
        vlSelfRef.testbench__DOT__DataAdr = (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum);
    } else if ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControl))) {
        vlSelfRef.testbench__DOT__DataAdr = (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a 
                                             & vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b);
    } else if ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControl))) {
        vlSelfRef.testbench__DOT__DataAdr = (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a 
                                             | vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b);
    }
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__Result 
        = ((0x00000010U & Vtestbench__ConstPool__TABLE_h6944f904_0
            [(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
               << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))])
            ? vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
           [(0x0000003fU & (vlSelfRef.testbench__DOT__DataAdr 
                            >> 2U))] : vlSelfRef.testbench__DOT__DataAdr);
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__PCNext 
        = ((Vtestbench__ConstPool__TABLE_h3c44eaed_0
            [((((4U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                       << 1U)) | ((2U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                         << 1U)) | 
                                  (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                         >> 1U)))) 
               << 6U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge) 
                          << 5U) | ((0x00000010U & 
                                     ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                      << 4U)) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2))))] 
            & ((Vtestbench__ConstPool__TABLE_h6944f904_0
                [(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                   << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))] 
                >> 1U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__dec__DOT__RegW) 
                          & (0x0fU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))))
            ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__Result
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
    vlSelf->testbench__DOT__DataAdr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4145201284576670955ull);
    vlSelf->testbench__DOT__dut__DOT__PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11538613234525564121ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16754566010774491976ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__WriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6230259560994154020ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__ImmSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4092746333379137144ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__ALUControl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 204998651813173887ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__dp__DOT__PCNext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4066474052812500441ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__dp__DOT__Result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10961773448370584241ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RA1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2489455637738541137ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RA2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4051149354779550807ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3311285466559997735ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8613626279603130629ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 10737129308713284549ull);
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__arm__DOT__dp__DOT__rf__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1105108534016589161ull);
    }
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagW = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7247734894407488147ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__FlagWrite = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17961717791623434464ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5 = 0;
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5 = 0;
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__flagreg0__DOT__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16054095369060974356ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12790961693679329718ull);
    vlSelf->testbench__DOT__dut__DOT__arm__DOT__c__DOT__dec__DOT__RegW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10693076567597992688ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__dmem__DOT__RAM[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 49813727177523641ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__imem__DOT__RAM[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 430732897116815573ull);
    }
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_1 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_2 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_9 = 0;
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
