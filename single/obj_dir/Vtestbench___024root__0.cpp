// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"

VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__1(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval_initial(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        VL_READMEM_N(true, 32, 64, 0, "memfile.dat"s
                     ,  &(vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM)
                     , 0, ~0ULL);
    }
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtestbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtestbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__testbench__DOT__reset__v0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000016ULL, 
                                         nullptr, "testbench.sv", 
                                         15);
    vlSelfRef.__VdlySet__testbench__DOT__reset__v1 = 1U;
    co_return;
}

VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__1(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        vlSelfRef.__VdlySet__testbench__DOT__clk__v0 = 1U;
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "testbench.sv", 
                                             21);
        vlSelfRef.__VdlySet__testbench__DOT__clk__v1 = 1U;
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "testbench.sv", 
                                             21);
    }
    co_return;
}

bool Vtestbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___trigger_anySet__act\n"); );
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

void Vtestbench___024root___nba_sequent__TOP__3(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__3\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.testbench__DOT__reset) {
        vlSelfRef.testbench__DOT__dut__DOT__PC = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5 = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5 = 0U;
    } else {
        vlSelfRef.testbench__DOT__dut__DOT__PC = vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__PCNext;
        if ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__FlagWrite))) {
            vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5 
                = vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__flagreg0__DOT__d;
        }
        if ((2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__FlagWrite))) {
            vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5 
                = ((2U & (vlSelfRef.testbench__DOT__DataAdr 
                          >> 0x0000001eU)) | (0U == vlSelfRef.testbench__DOT__DataAdr));
        }
    }
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
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge 
        = ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5)) 
           == (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                     >> 1U)));
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
}

void Vtestbench___024root___nba_comb__TOP__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a 
        = ((0x0fU == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RA1))
            ? ((IData)(8U) + vlSelfRef.testbench__DOT__dut__DOT__PC)
            : ((0x0eU >= (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RA1))
                ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__rf__DOT__rf
               [vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RA1]
                : 0U));
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

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_nba\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            if (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__MemWrite) {
                if (VL_UNLIKELY((((0x000000f8U == vlSelfRef.testbench__DOT__DataAdr) 
                                  & (7U == vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__WriteData))))) {
                    VL_WRITEF_NX("Simulation succeeded\n",0);
                    VL_FINISH_MT("testbench.sv", 30, "");
                } else if (VL_UNLIKELY(((0x000000ecU 
                                         != vlSelfRef.testbench__DOT__DataAdr)))) {
                    VL_WRITEF_NX("Simulation failed: DataAdr=%0d WriteData=%0d\n",2
                                 , '#',32,vlSelfRef.testbench__DOT__DataAdr
                                 , '#',32,vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__WriteData);
                    VL_FINISH_MT("testbench.sv", 33, "");
                }
            }
        }
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__1___VdlyVal__testbench__DOT__dut__DOT__arm__DOT__dp__DOT__rf__DOT__rf__v0;
            __Vinline_0__nba_sequent__TOP__1___VdlyVal__testbench__DOT__dut__DOT__arm__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
            CData/*3:0*/ __Vinline_0__nba_sequent__TOP__1___VdlyDim0__testbench__DOT__dut__DOT__arm__DOT__dp__DOT__rf__DOT__rf__v0;
            __Vinline_0__nba_sequent__TOP__1___VdlyDim0__testbench__DOT__dut__DOT__arm__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__1___VdlySet__testbench__DOT__dut__DOT__arm__DOT__dp__DOT__rf__DOT__rf__v0;
            __Vinline_0__nba_sequent__TOP__1___VdlySet__testbench__DOT__dut__DOT__arm__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__1___VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0;
            __Vinline_0__nba_sequent__TOP__1___VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 0;
            CData/*5:0*/ __Vinline_0__nba_sequent__TOP__1___VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0;
            __Vinline_0__nba_sequent__TOP__1___VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__1___VdlySet__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0;
            __Vinline_0__nba_sequent__TOP__1___VdlySet__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 0;
            __Vinline_0__nba_sequent__TOP__1___VdlySet__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 0U;
            __Vinline_0__nba_sequent__TOP__1___VdlySet__testbench__DOT__dut__DOT__arm__DOT__dp__DOT__rf__DOT__rf__v0 = 0U;
            if (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__MemWrite) {
                __Vinline_0__nba_sequent__TOP__1___VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 
                    = vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__WriteData;
                __Vinline_0__nba_sequent__TOP__1___VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 
                    = (0x0000003fU & (vlSelfRef.testbench__DOT__DataAdr 
                                      >> 2U));
                __Vinline_0__nba_sequent__TOP__1___VdlySet__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 1U;
            }
            if ((Vtestbench__ConstPool__TABLE_h3c44eaed_0
                 [((((4U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                            << 1U)) | ((2U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                              << 1U)) 
                                       | (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                >> 1U)))) 
                    << 6U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge) 
                               << 5U) | ((0x00000010U 
                                          & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                             << 4U)) 
                                         | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2))))] 
                 & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__dec__DOT__RegW))) {
                if ((0x0eU >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                    __Vinline_0__nba_sequent__TOP__1___VdlyVal__testbench__DOT__dut__DOT__arm__DOT__dp__DOT__rf__DOT__rf__v0 
                        = vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__Result;
                    __Vinline_0__nba_sequent__TOP__1___VdlyDim0__testbench__DOT__dut__DOT__arm__DOT__dp__DOT__rf__DOT__rf__v0 
                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                    __Vinline_0__nba_sequent__TOP__1___VdlySet__testbench__DOT__dut__DOT__arm__DOT__dp__DOT__rf__DOT__rf__v0 = 1U;
                }
            }
            if (__Vinline_0__nba_sequent__TOP__1___VdlySet__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0) {
                vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM[__Vinline_0__nba_sequent__TOP__1___VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0] 
                    = __Vinline_0__nba_sequent__TOP__1___VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0;
            }
            if (__Vinline_0__nba_sequent__TOP__1___VdlySet__testbench__DOT__dut__DOT__arm__DOT__dp__DOT__rf__DOT__rf__v0) {
                vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__rf__DOT__rf[__Vinline_0__nba_sequent__TOP__1___VdlyDim0__testbench__DOT__dut__DOT__arm__DOT__dp__DOT__rf__DOT__rf__v0] 
                    = __Vinline_0__nba_sequent__TOP__1___VdlyVal__testbench__DOT__dut__DOT__arm__DOT__dp__DOT__rf__DOT__rf__v0;
            }
        }
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            if (vlSelfRef.__VdlySet__testbench__DOT__clk__v0) {
                vlSelfRef.__VdlySet__testbench__DOT__clk__v0 = 0U;
                vlSelfRef.testbench__DOT__clk = 1U;
            }
            if (vlSelfRef.__VdlySet__testbench__DOT__clk__v1) {
                vlSelfRef.__VdlySet__testbench__DOT__clk__v1 = 0U;
                vlSelfRef.testbench__DOT__clk = 0U;
            }
        }
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtestbench___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__4
            if (vlSelfRef.__VdlySet__testbench__DOT__reset__v0) {
                vlSelfRef.__VdlySet__testbench__DOT__reset__v0 = 0U;
                vlSelfRef.testbench__DOT__reset = 1U;
            }
            if (vlSelfRef.__VdlySet__testbench__DOT__reset__v1) {
                vlSelfRef.__VdlySet__testbench__DOT__reset__v1 = 0U;
                vlSelfRef.testbench__DOT__reset = 0U;
            }
        }
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtestbench___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vtestbench___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtestbench___024root___eval_phase__act(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__act\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 4U) 
                                                         | ((((IData)(vlSelfRef.testbench__DOT__reset) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__reset__0))) 
                                                             << 2U) 
                                                            | ((((IData)(vlSelfRef.testbench__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__clk__0))) 
                                                                << 1U) 
                                                               | ((~ (IData)(vlSelfRef.testbench__DOT__clk)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__clk__0 
            = vlSelfRef.testbench__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__reset__0 
            = vlSelfRef.testbench__DOT__reset;
    }
    Vtestbench___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtestbench___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtestbench___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
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

bool Vtestbench___024root___eval_phase__inact(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__inact\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("testbench.sv", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtestbench___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtestbench___024root___eval_phase__nba(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__nba\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtestbench___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtestbench___024root___eval_nba(vlSelf);
        Vtestbench___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtestbench___024root___eval(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtestbench___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("testbench.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("testbench.sv", 1, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtestbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("testbench.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtestbench___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtestbench___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtestbench___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtestbench___024root___eval_debug_assertions(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_debug_assertions\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
