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

VL_ATTR_COLD void Vtestbench___024root___eval_stl(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_stl\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        {
            // Inlined CFunc: _stl_sequent__TOP__0
            vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__md__DOT__controls 
                = (0x000007ffU & Vtestbench__ConstPool__CONST_hf7aac566_0
                   [(0x0000007fU & vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__InstrD)]);
            vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__StallF 
                = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__ResultSrcE) 
                   & (((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__RDE) 
                       == (0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__InstrD 
                                          >> 0x00000014U))) 
                      | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__RDE) 
                         == (0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__InstrD 
                                            >> 0x0000000fU)))));
            vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__PCTargetE 
                = (vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__ImmExtE 
                   + vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__PCE);
            vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__ForwardAE 
                = (((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__RS1E)) 
                    & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__RegWriteM) 
                       & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__RS1E) 
                          == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__RDM))))
                    ? 2U : (1U & (- (IData)(((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__RS1E)) 
                                             & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__RegWriteW) 
                                                & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__RS1E) 
                                                   == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__RDW))))))));
            vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__ForwardBE 
                = (((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__RS2E)) 
                    & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__RegWriteM) 
                       & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__RS2E) 
                          == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__RDM))))
                    ? 2U : (1U & (- (IData)(((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__RS2E)) 
                                             & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__RegWriteW) 
                                                & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__RS2E) 
                                                   == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__RDW))))))));
            vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__ResultW 
                = ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__ResultSrcW))
                    ? vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__ALUResultW
                    : ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__ResultSrcW))
                        ? vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__ReadDataW
                        : vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__PCPlus4W));
            vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__a 
                = ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__ForwardAE))
                    ? vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__RD1E
                    : ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__ForwardAE))
                        ? vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__ResultW
                        : vlSelfRef.testbench__DOT__DataAdr));
            vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__WriteDataE 
                = ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__ForwardBE))
                    ? vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__RD2E
                    : ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__ForwardBE))
                        ? vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__ResultW
                        : vlSelfRef.testbench__DOT__DataAdr));
            vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__b 
                = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__ALUSrcE)
                    ? vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__ImmExtE
                    : vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__WriteDataE);
            vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__Result 
                = ((4U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__ALUControlE))
                    ? (1U & (- (IData)((IData)(((1U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__ALUControlE))) 
                                                & VL_LTS_III(32, vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__a, vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__b))))))
                    : ((2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__ALUControlE))
                        ? ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__ALUControlE))
                            ? (vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__a 
                               | vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__b)
                            : (vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__a 
                               & vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__b))
                        : (vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__a 
                           + ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__ALUControlE)) 
                              + ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__ALUControlE))
                                  ? (~ vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__b)
                                  : vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__b)))));
            vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__PCSrcE 
                = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__JumpE) 
                   | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__BranchE) 
                      & (0U == vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__Result)));
            vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__FlushE 
                = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__StallF) 
                   | (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__PCSrcE));
            vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__PCNext 
                = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__PCSrcE)
                    ? vlSelfRef.testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__PCTargetE
                    : ((IData)(4U) + vlSelfRef.testbench__DOT__dut__DOT__PC));
        }
        {
            // Inlined CFunc: __Vm_traceActivitySetAll
            vlSelfRef.__Vm_traceActivity[0U] = 1U;
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
        }
    }
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
        Vtestbench___024root___eval_stl(vlSelf);
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
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__ALUSrcE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9163620960286318192ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__RegWriteM = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3828091374955398154ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__RegWriteW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 567621797849504144ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__PCSrcE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16911276680293560431ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__RS1E = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 805587890567990403ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__RS2E = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3513702651221601626ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__RDE = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14626513379481044891ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__RDM = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12192729511278492777ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__RDW = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7095241845765650662ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__StallF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12606305751920364944ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__FlushE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8094992015945591339ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__ForwardAE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6872726254890885123ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__ForwardBE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16905044083795171507ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__ResultSrcE = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5981414369391542462ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__ResultSrcW = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1246522146306126873ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__ALUControlE = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7331631779364375200ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__InstrD = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6635149027443014548ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__PCPlus4D = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8859242634401444419ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__PCPlus4E = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12105861380059129029ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__PCPlus4M = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15029663225613021353ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__PCPlus4W = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12715601689390170285ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__PCNext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9286844249731181958ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__PCTarget = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14962237541339242589ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__PCTargetE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17627452264298831642ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__PCD = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14261514863999649958ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__PCE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7715893495493105444ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__ImmExtE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3305653589457121235ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__ALUResultW = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14793457128922307581ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__WriteDataE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7509608551865839406ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__ReadDataW = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7647919807550626059ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__RD1E = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17460397564016113993ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__RD2E = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14233300174895103815ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__ResultW = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5918313092921157985ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10111317890365733168ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6917378963568696569ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__alu__DOT__Result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17741247886994786114ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3890707607181912859ull);
    }
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__RegWriteE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16708915169143099663ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__JumpE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12496706093094357340ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__BranchE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3685905708690170048ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__MemWriteE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14057772518329541769ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__ResultSrcM = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18069435745026631849ull);
    vlSelf->testbench__DOT__dut__DOT__rvsingle__DOT__c__DOT__md__DOT__controls = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13506089781287650311ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__dmem__DOT__RAM[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 49813727177523641ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__imem__DOT__RAM[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 430732897116815573ull);
    }
    vlSelf->__VdlySet__testbench__DOT__reset__v0 = 0;
    vlSelf->__VdlySet__testbench__DOT__reset__v1 = 0;
    vlSelf->__VdlySet__testbench__DOT__clk__v0 = 0;
    vlSelf->__VdlySet__testbench__DOT__clk__v1 = 0;
    vlSelf->__VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 0;
    vlSelf->__VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 0;
    vlSelf->__VdlySet__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 0;
    vlSelf->__VdlyVal__testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
    vlSelf->__VdlyDim0__testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
    vlSelf->__VdlySet__testbench__DOT__dut__DOT__rvsingle__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
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
