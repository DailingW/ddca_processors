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
            VL_FATAL_MT("testbench/testbench.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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

extern const VlWide<128>/*4095:0*/ Vtestbench__ConstPool__CONST_h8c87706c_0;

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_sequent__TOP__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_0;
    __VdfgRegularize_hebeb780c_0_0 = 0;
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls 
        = (0x00000fffU & Vtestbench__ConstPool__CONST_h8c87706c_0
           [(0x0000007fU & vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD)]);
    vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__rd 
        = ((4U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__funct3M))
            ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__funct3M) 
                                    >> 1U))))) & ((
                                                   ((- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__funct3M)))) 
                                                    & vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
                                                    [
                                                    (0x000000ffU 
                                                     & ((IData)(1U) 
                                                        + vlSelfRef.testbench__DOT__DataAdr))]) 
                                                   << 8U) 
                                                  | vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
                                                  [
                                                  (0x000000ffU 
                                                   & vlSelfRef.testbench__DOT__DataAdr)]))
            : ((2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__funct3M))
                ? ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
                               [(0x000000ffU & ((IData)(3U) 
                                                + vlSelfRef.testbench__DOT__DataAdr))]) 
                       << 8U) | vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
                      [(0x000000ffU & ((IData)(2U) 
                                       + vlSelfRef.testbench__DOT__DataAdr))]) 
                     << 0x00000010U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
                                                 [(0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.testbench__DOT__DataAdr))]) 
                                         << 8U) | vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
                                        [(0x000000ffU 
                                          & vlSelfRef.testbench__DOT__DataAdr)])) 
                   & (- (IData)((1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__funct3M))))))
                : ((((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__funct3M))
                      ? ((0x00ffff00U & ((- (IData)(
                                                    (1U 
                                                     & (vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
                                                        [
                                                        (0x000000ffU 
                                                         & ((IData)(1U) 
                                                            + vlSelfRef.testbench__DOT__DataAdr))] 
                                                        >> 7U)))) 
                                         << 8U)) | vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
                         [(0x000000ffU & ((IData)(1U) 
                                          + vlSelfRef.testbench__DOT__DataAdr))])
                      : (- (IData)((1U & (vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
                                          [(0x000000ffU 
                                            & vlSelfRef.testbench__DOT__DataAdr)] 
                                          >> 7U))))) 
                    << 8U) | vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
                   [(0x000000ffU & vlSelfRef.testbench__DOT__DataAdr)])));
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__StallF 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ResultSrcE) 
           & ((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDE)) 
              & (((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDE) 
                  == (0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                     >> 0x00000014U))) 
                 | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDE) 
                    == (0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                       >> 0x0000000fU))))));
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCTargetE 
        = (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ImmExtE 
           + vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCE);
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ForwardAE 
        = (((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RS1E)) 
            & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RegWriteM) 
               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RS1E) 
                  == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDM))))
            ? 2U : (1U & (- (IData)(((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RS1E)) 
                                     & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RegWriteW) 
                                        & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RS1E) 
                                           == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDW))))))));
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ForwardBE 
        = (((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RS2E)) 
            & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RegWriteM) 
               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RS2E) 
                  == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDM))))
            ? 2U : (1U & (- (IData)(((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RS2E)) 
                                     & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RegWriteW) 
                                        & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RS2E) 
                                           == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDW))))))));
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ResultW 
        = ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ResultSrcW))
            ? vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ALUResultW
            : ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ResultSrcW))
                ? vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ReadDataW
                : vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4W));
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__a 
        = ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ForwardAE))
            ? vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__RD1E
            : ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ForwardAE))
                ? vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ResultW
                : vlSelfRef.testbench__DOT__DataAdr));
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__WriteDataE 
        = ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ForwardBE))
            ? vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__RD2E
            : ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ForwardBE))
                ? vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ResultW
                : vlSelfRef.testbench__DOT__DataAdr));
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__b 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUSrcE)
            ? vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ImmExtE
            : vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__WriteDataE);
    __VdfgRegularize_hebeb780c_0_0 = (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__a 
                                      << (0x0000001fU 
                                          & vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__b));
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__LessSignedE 
        = VL_LTS_III(32, vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__a, vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__b);
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__LessUnsignedE 
        = (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__a 
           < vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__b);
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__Result 
        = ((8U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE))
            ? (((2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE))
                 ? (VL_SHIFTRS_III(32,32,5, vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__a, 
                                   (0x0000001fU & vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__b)) 
                    & (- (IData)((1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE))))))
                 : ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE))
                     ? __VdfgRegularize_hebeb780c_0_0
                     : (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__a 
                        >> (0x0000001fU & vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__b)))) 
               & (- (IData)((1U & (~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE) 
                                      >> 2U)))))) : 
           ((4U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE))
             ? ((2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE))
                 ? ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE))
                     ? __VdfgRegularize_hebeb780c_0_0
                     : (1U & (- (IData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__LessUnsignedE)))))
                 : ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE))
                     ? (1U & (- (IData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__LessSignedE))))
                     : (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__a 
                        ^ vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__b)))
             : ((2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE))
                 ? ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE))
                     ? (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__a 
                        | vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__b)
                     : (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__a 
                        & vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__b))
                 : (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__a 
                    + ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE)) 
                       + ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE))
                           ? (~ vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__b)
                           : vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__b))))));
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__PCSrcE 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__BranchE)
            ? ((4U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3E))
                ? ((2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__JumpE)) 
                   | (1U & ((2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3E))
                             ? ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3E))
                                 ? (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__LessUnsignedE))
                                 : (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__LessUnsignedE))
                             : ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3E))
                                 ? (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__LessSignedE))
                                 : (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__LessSignedE)))))
                : (((2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__JumpE)) 
                    | ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3E))
                        ? (0U != vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__Result)
                        : (0U == vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__Result))) 
                   & (- (IData)((1U & (~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3E) 
                                          >> 1U)))))))
            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__JumpE));
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__FlushE 
        = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__PCSrcE) 
                 | (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__StallF)));
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCNext 
        = ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__PCSrcE))
            ? (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCTargetE 
               & (- (IData)((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__PCSrcE)))))
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
    vlSelf->testbench__DOT__WriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8245022015734017942ull);
    vlSelf->testbench__DOT__DataAdr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4145201284576670955ull);
    vlSelf->testbench__DOT__MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9870066378375929810ull);
    vlSelf->testbench__DOT__cycle = 0;
    vlSelf->testbench__DOT__dut__DOT__PC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11538613234525564121ull);
    vlSelf->testbench__DOT__dut__DOT__funct3M = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 476787571177708868ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__ALUSrcE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17994578383714471989ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__RegWriteM = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8924578870117388439ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__RegWriteW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13427514073770600418ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__LessSignedE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11371888350836120905ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__LessUnsignedE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263221087065370638ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__RS1E = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13485830579386749952ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__RS2E = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6509965299590832379ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__RDE = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 975862141161835965ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__RDM = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4229188098877035931ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__RDW = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10981679217021812006ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__StallF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4686013603652237037ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__FlushE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18392822213769210361ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__ForwardAE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4297554648159457949ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__ForwardBE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11297250138743135306ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__ResultSrcE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17081960987858623934ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__ResultSrcW = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7968351478215132087ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13177881083562658579ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6333659945662607761ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4D = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17818072181856987967ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4E = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4892194072985918358ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4M = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2821046304040926098ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4W = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 847519236638834163ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCNext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5004353566124647139ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCTarget = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14795643329657927530ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCTargetE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9824681919285946412ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCD = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8991646275511655194ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4421276705732815102ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ImmExtE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16358418806131683283ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ALUResultW = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10955673145621652184ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__WriteDataE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9905672740891952120ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__StoreDataE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9293629981015595912ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ReadDataW = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10399865949358371221ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__RD1E = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14915939918636328206ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__RD2E = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3964755382080561001ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ResultW = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11284895233355569665ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__Funct3E = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2211357250952369945ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__Funct3W = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4073092843933474126ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7026559843655044425ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5075921135112931371ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__Result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3698665263908486495ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__rf__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15890529767874337052ull);
    }
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__PCSrcE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1764956339203770623ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__JumpE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 791550003115916250ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__RegWriteE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16542732034590075662ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__BranchE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7041800293457444557ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__MemWriteE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3683552025968746871ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__ResultSrcM = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10419554892453055307ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3E = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16384308798208230845ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3M = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14435071260108400320ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3W = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12395025018964620120ull);
    vlSelf->testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11450015231630430448ull);
    vlSelf->testbench__DOT__dut__DOT__dmem__DOT__rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7789276907249627418ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__dmem__DOT__RAM[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 49813727177523641ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__imem__DOT__RAM[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 430732897116815573ull);
    }
    vlSelf->__VdlySet__testbench__DOT__reset__v0 = 0;
    vlSelf->__VdlySet__testbench__DOT__reset__v1 = 0;
    vlSelf->__VdlySet__testbench__DOT__clk__v0 = 0;
    vlSelf->__VdlySet__testbench__DOT__clk__v1 = 0;
    vlSelf->__VdlyVal__testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
    vlSelf->__VdlyDim0__testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
    vlSelf->__VdlySet__testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
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
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
