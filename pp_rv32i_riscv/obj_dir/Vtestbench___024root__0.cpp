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
        VL_READMEM_N(true, 32, 64, 0, "memfile.txt"s
                     ,  &(vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM)
                     , 0, ~0ULL);
    }
    Vtestbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtestbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__cycle = 0U;
    vlSymsp->_vm_contextp__->dumpfile("waveform.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.__VdlySet__testbench__DOT__reset__v0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000016ULL, 
                                         nullptr, "testbench/testbench.sv", 
                                         21);
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
                                             "testbench/testbench.sv", 
                                             27);
        vlSelfRef.__VdlySet__testbench__DOT__clk__v1 = 1U;
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "testbench/testbench.sv", 
                                             27);
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

void Vtestbench___024root___nba_sequent__TOP__1(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__1\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vfunc_testbench__DOT__read_reg__0__regnum;
    __Vfunc_testbench__DOT__read_reg__0__regnum = 0;
    CData/*4:0*/ __Vfunc_testbench__DOT__read_reg__1__regnum;
    __Vfunc_testbench__DOT__read_reg__1__regnum = 0;
    IData/*31:0*/ __Vdly__testbench__DOT__cycle;
    __Vdly__testbench__DOT__cycle = 0;
    IData/*31:0*/ __VdlyMask__testbench__DOT__cycle;
    __VdlyMask__testbench__DOT__cycle = 0;
    CData/*7:0*/ __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0;
    __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 0;
    CData/*7:0*/ __VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0;
    __VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 0;
    CData/*0:0*/ __VdlySet__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0;
    __VdlySet__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 0;
    CData/*7:0*/ __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v1;
    __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v1 = 0;
    CData/*7:0*/ __VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v1;
    __VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v1 = 0;
    CData/*0:0*/ __VdlySet__testbench__DOT__dut__DOT__dmem__DOT__RAM__v1;
    __VdlySet__testbench__DOT__dut__DOT__dmem__DOT__RAM__v1 = 0;
    CData/*7:0*/ __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v2;
    __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v2 = 0;
    CData/*7:0*/ __VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v2;
    __VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v2 = 0;
    CData/*7:0*/ __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v3;
    __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v3 = 0;
    CData/*7:0*/ __VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v3;
    __VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v3 = 0;
    CData/*0:0*/ __VdlySet__testbench__DOT__dut__DOT__dmem__DOT__RAM__v3;
    __VdlySet__testbench__DOT__dut__DOT__dmem__DOT__RAM__v3 = 0;
    CData/*7:0*/ __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v4;
    __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v4 = 0;
    CData/*7:0*/ __VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v4;
    __VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v4 = 0;
    CData/*7:0*/ __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v5;
    __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v5 = 0;
    CData/*7:0*/ __VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v5;
    __VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v5 = 0;
    CData/*7:0*/ __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v6;
    __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v6 = 0;
    CData/*7:0*/ __VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v6;
    __VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v6 = 0;
    // Body
    __VdlySet__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 0U;
    __VdlySet__testbench__DOT__dut__DOT__dmem__DOT__RAM__v1 = 0U;
    __VdlySet__testbench__DOT__dut__DOT__dmem__DOT__RAM__v3 = 0U;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.testbench__DOT__reset)))))) {
        __Vdly__testbench__DOT__cycle = ((IData)(1U) 
                                         + vlSelfRef.testbench__DOT__cycle);
        __VdlyMask__testbench__DOT__cycle = 0xffffffffU;
        __Vfunc_testbench__DOT__read_reg__0__regnum 
            = (0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                              [(0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                               >> 2U))] 
                              >> 0x0fU));
        vlSelfRef.testbench__DOT____VlemCall_0__read_reg 
            = ((0U == (IData)(__Vfunc_testbench__DOT__read_reg__0__regnum))
                ? 0U : vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__rf__DOT__rf
               [__Vfunc_testbench__DOT__read_reg__0__regnum]);
        __Vfunc_testbench__DOT__read_reg__1__regnum 
            = (0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                              [(0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                               >> 2U))] 
                              >> 0x14U));
        vlSelfRef.testbench__DOT____VlemCall_1__read_reg 
            = ((0U == (IData)(__Vfunc_testbench__DOT__read_reg__1__regnum))
                ? 0U : vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__rf__DOT__rf
               [__Vfunc_testbench__DOT__read_reg__1__regnum]);
        VL_WRITEF_NX("cycle=%0d pc=%h instr=%h rs1=x%0d(%0d) rs2=x%0d(%0d) rd=x%0d alu=%0d memwrite=%b addr=%0d wdata=%0d\n",12
                     , '~',32,((IData)(1U) + vlSelfRef.testbench__DOT__cycle)
                     , '#',32,vlSelfRef.testbench__DOT__dut__DOT__PC
                     , '#',32,vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                     [(0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                      >> 2U))], '#',5,
                     (0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                     [(0x0000003fU 
                                       & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                          >> 2U))] 
                                     >> 0x0fU)), '#',32,vlSelfRef.testbench__DOT____VlemCall_0__read_reg
                     , '#',5,(0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                             [(0x0000003fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                                  >> 2U))] 
                                             >> 0x14U))
                     , '#',32,vlSelfRef.testbench__DOT____VlemCall_1__read_reg
                     , '#',5,(0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                             [(0x0000003fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                                  >> 2U))] 
                                             >> 7U))
                     , '#',32,vlSelfRef.testbench__DOT__DataAdr
                     , '#',1,(IData)(vlSelfRef.testbench__DOT__MemWrite)
                     , '#',32,vlSelfRef.testbench__DOT__DataAdr
                     , '#',32,vlSelfRef.testbench__DOT__WriteData);
        if (VL_UNLIKELY((((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RegWriteW) 
                          & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDW)))))) {
            VL_WRITEF_NX("  WB:  x%0d <= %0d\n",2, '#',5,vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDW
                         , '#',32,vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ResultW);
        }
        if (VL_UNLIKELY((vlSelfRef.testbench__DOT__MemWrite))) {
            VL_WRITEF_NX("  MEM: [%0d] <= %0d\n",2, '#',32,vlSelfRef.testbench__DOT__DataAdr
                         , '#',32,vlSelfRef.testbench__DOT__WriteData);
        }
        if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__PCSrcE))))) {
            VL_WRITEF_NX("  PC:  next <= %h\n",1, '#',32,vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCTargetE);
        }
        if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, 
                                    ((IData)(1U) + vlSelfRef.testbench__DOT__cycle))))) {
            VL_WRITEF_NX("Simulation timed out\n",0);
            VL_FINISH_MT("testbench/testbench.sv", 53, "");
        }
    }
    if (vlSelfRef.testbench__DOT__MemWrite) {
        if ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__funct3M))) {
            __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 
                = (0x000000ffU & vlSelfRef.testbench__DOT__WriteData);
            __VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 
                = (0x000000ffU & vlSelfRef.testbench__DOT__DataAdr);
            __VdlySet__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 1U;
        } else if ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__funct3M))) {
            __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v1 
                = (0x000000ffU & vlSelfRef.testbench__DOT__WriteData);
            __VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v1 
                = (0x000000ffU & vlSelfRef.testbench__DOT__DataAdr);
            __VdlySet__testbench__DOT__dut__DOT__dmem__DOT__RAM__v1 = 1U;
            __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v2 
                = (0x000000ffU & (vlSelfRef.testbench__DOT__WriteData 
                                  >> 8U));
            __VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v2 
                = (0x000000ffU & ((IData)(1U) + vlSelfRef.testbench__DOT__DataAdr));
        } else if ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__funct3M))) {
            __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v3 
                = (0x000000ffU & vlSelfRef.testbench__DOT__WriteData);
            __VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v3 
                = (0x000000ffU & vlSelfRef.testbench__DOT__DataAdr);
            __VdlySet__testbench__DOT__dut__DOT__dmem__DOT__RAM__v3 = 1U;
            __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v4 
                = (0x000000ffU & (vlSelfRef.testbench__DOT__WriteData 
                                  >> 8U));
            __VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v4 
                = (0x000000ffU & ((IData)(1U) + vlSelfRef.testbench__DOT__DataAdr));
            __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v5 
                = (0x000000ffU & (vlSelfRef.testbench__DOT__WriteData 
                                  >> 0x10U));
            __VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v5 
                = (0x000000ffU & ((IData)(2U) + vlSelfRef.testbench__DOT__DataAdr));
            __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v6 
                = (vlSelfRef.testbench__DOT__WriteData 
                   >> 0x18U);
            __VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v6 
                = (0x000000ffU & ((IData)(3U) + vlSelfRef.testbench__DOT__DataAdr));
        }
    }
    vlSelfRef.testbench__DOT__cycle = ((__Vdly__testbench__DOT__cycle 
                                        & __VdlyMask__testbench__DOT__cycle) 
                                       | (vlSelfRef.testbench__DOT__cycle 
                                          & (~ __VdlyMask__testbench__DOT__cycle)));
    __VdlyMask__testbench__DOT__cycle = 0U;
    if (__VdlySet__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0) {
        vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM[__VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0] 
            = __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0;
    }
    if (__VdlySet__testbench__DOT__dut__DOT__dmem__DOT__RAM__v1) {
        vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM[__VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v1] 
            = __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v1;
        vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM[__VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v2] 
            = __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v2;
    }
    if (__VdlySet__testbench__DOT__dut__DOT__dmem__DOT__RAM__v3) {
        vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM[__VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v3] 
            = __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v3;
        vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM[__VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v4] 
            = __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v4;
        vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM[__VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v5] 
            = __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v5;
        vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM[__VdlyDim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v6] 
            = __VdlyVal__testbench__DOT__dut__DOT__dmem__DOT__RAM__v6;
    }
}

extern const VlUnpacked<CData/*3:0*/, 64> Vtestbench__ConstPool__TABLE_h7b4ec6fd_0;
extern const VlWide<128>/*4095:0*/ Vtestbench__ConstPool__CONST_hbd3b8ab4_0;

void Vtestbench___024root___nba_sequent__TOP__3(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__3\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_0;
    __VdfgRegularize_hebeb780c_0_0 = 0;
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__BranchE 
        = (1U & ((~ (IData)(vlSelfRef.testbench__DOT__reset)) 
                 & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__FlushE)) 
                    & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls) 
                       >> 4U))));
    if (vlSelfRef.testbench__DOT__reset) {
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__JumpE = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__SrcASelectE = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__Funct3W = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3W = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCE = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ReadDataW = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__RD1E = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RS1E = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__RD2E = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RS2E = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ImmExtE = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ResultSrcW = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4W = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ALUResultW = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDW = 0U;
        vlSelfRef.testbench__DOT__WriteData = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__funct3M = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3M = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCD = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__ResultSrcM = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4M = 0U;
        vlSelfRef.testbench__DOT__DataAdr = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDM = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__Funct3E = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3E = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ResultSrcE = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4E = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDE = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4D = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__PC = 0U;
    } else {
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__Funct3W 
            = vlSelfRef.testbench__DOT__dut__DOT__funct3M;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3W 
            = vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3M;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ReadDataW 
            = vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__rd;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ResultSrcW 
            = vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__ResultSrcM;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4W 
            = vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4M;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ALUResultW 
            = vlSelfRef.testbench__DOT__DataAdr;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDW 
            = vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDM;
        vlSelfRef.testbench__DOT__WriteData = vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__WriteDataE;
        vlSelfRef.testbench__DOT__dut__DOT__funct3M 
            = vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__Funct3E;
        vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3M 
            = vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3E;
        if (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__FlushE) {
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__JumpE = 0U;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__SrcASelectE = 0U;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE = 0U;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCE = 0U;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__ResultSrcM 
                = vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ResultSrcE;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4M 
                = vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4E;
            vlSelfRef.testbench__DOT__DataAdr = vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__Result;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDM 
                = vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDE;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__RD1E = 0U;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RS1E = 0U;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__RD2E = 0U;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RS2E = 0U;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ImmExtE = 0U;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__Funct3E = 0U;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3E = 0U;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ResultSrcE = 0U;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4E = 0U;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDE = 0U;
        } else {
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__JumpE 
                = (3U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls));
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__SrcASelectE 
                = (3U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls) 
                         >> 8U));
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE 
                = Vtestbench__ConstPool__TABLE_h7b4ec6fd_0
                [(((IData)((0x40000020U == (0x40000020U 
                                            & vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD))) 
                   << 5U) | ((0x0000001cU & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                             >> 0x0000000aU)) 
                             | (3U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls) 
                                      >> 2U))))];
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCE 
                = vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCD;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__ResultSrcM 
                = vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ResultSrcE;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4M 
                = vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4E;
            vlSelfRef.testbench__DOT__DataAdr = vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__Result;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDM 
                = vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDE;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__RD1E 
                = ((0U == (0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                          >> 0x0000000fU)))
                    ? 0U : vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__rf__DOT__rf
                   [(0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                    >> 0x0000000fU))]);
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RS1E 
                = (0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                  >> 0x0000000fU));
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__RD2E 
                = ((0U == (0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                          >> 0x00000014U)))
                    ? 0U : vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__rf__DOT__rf
                   [(0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                    >> 0x00000014U))]);
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RS2E 
                = (0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                  >> 0x00000014U));
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ImmExtE 
                = ((0x00002000U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls))
                    ? (0xfffff000U & ((- (IData)((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls) 
                                                      >> 0x0000000bU))))) 
                                      & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls) 
                                                           >> 0x0000000cU))))))))
                    : ((0x00001000U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls))
                        ? (((0x00000800U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls))
                             ? ((0x7ff80000U & ((- (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                            >> 0x0000001fU))) 
                                                << 0x00000013U)) 
                                | ((0x0007f800U & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                   >> 1U)) 
                                   | ((0x00000400U 
                                       & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                          >> 0x0000000aU)) 
                                      | (0x000003ffU 
                                         & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                            >> 0x00000015U)))))
                             : ((0x7ffff800U & ((- (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                            >> 0x0000001fU))) 
                                                << 0x0000000bU)) 
                                | ((0x00000400U & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                   << 3U)) 
                                   | ((0x000003f0U 
                                       & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                          >> 0x00000015U)) 
                                      | (0x0000000fU 
                                         & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                            >> 8U)))))) 
                           << 1U) : (((- (IData)((vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                  >> 0x0000001fU))) 
                                      << 0x0000000cU) 
                                     | ((0x00000fe0U 
                                         & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                            >> 0x00000014U)) 
                                        | (0x0000001fU 
                                           & ((0x00000800U 
                                               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls))
                                               ? (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                  >> 7U)
                                               : (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                  >> 0x00000014U)))))));
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__Funct3E 
                = (7U & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                         >> 0x0000000cU));
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3E 
                = (7U & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                         >> 0x0000000cU));
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ResultSrcE 
                = (3U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls) 
                         >> 5U));
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4E 
                = vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4D;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDE 
                = (0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                  >> 7U));
        }
        if ((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__PCSrcE))) {
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCD = 0U;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4D = 0U;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__StallF)))) {
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCD 
                = vlSelfRef.testbench__DOT__dut__DOT__PC;
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4D 
                = ((IData)(4U) + vlSelfRef.testbench__DOT__dut__DOT__PC);
            vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                = vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                [(0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                 >> 2U))];
        }
        if ((1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__StallF)))) {
            vlSelfRef.testbench__DOT__dut__DOT__PC 
                = vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCNext;
        }
    }
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUSrcE 
        = (1U & ((~ (IData)(vlSelfRef.testbench__DOT__reset)) 
                 & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__FlushE)) 
                    & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls) 
                       >> 0x0000000aU))));
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RegWriteW 
        = ((~ (IData)(vlSelfRef.testbench__DOT__reset)) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RegWriteM));
    vlSelfRef.testbench__DOT__MemWrite = ((~ (IData)(vlSelfRef.testbench__DOT__reset)) 
                                          & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__MemWriteE));
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCTargetE 
        = (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCE 
           + vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ImmExtE);
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ResultW 
        = ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ResultSrcW))
            ? vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ALUResultW
            : ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ResultSrcW))
                ? vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ReadDataW
                : vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4W));
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RegWriteM 
        = ((~ (IData)(vlSelfRef.testbench__DOT__reset)) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__RegWriteE));
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__MemWriteE 
        = (1U & ((~ (IData)(vlSelfRef.testbench__DOT__reset)) 
                 & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__FlushE)) 
                    & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls) 
                       >> 7U))));
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__RegWriteE 
        = (((~ (IData)(vlSelfRef.testbench__DOT__reset)) 
            & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__FlushE))) 
           & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls) 
              >> 0x0000000eU));
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
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__a 
        = ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__SrcASelectE))
            ? ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ForwardAE))
                ? vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__RD1E
                : ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ForwardAE))
                    ? vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ResultW
                    : vlSelfRef.testbench__DOT__DataAdr))
            : (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCE 
               & (- (IData)((1U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__SrcASelectE))))));
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
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls 
        = (0x00007fffU & Vtestbench__ConstPool__CONST_hbd3b8ab4_0
           [(0x0000007fU & vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD)]);
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__PCSrcE 
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
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__StallF 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ResultSrcE) 
           & ((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDE)) 
              & (((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDE) 
                  == (0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                     >> 0x00000014U))) 
                 | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDE) 
                    == (0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                       >> 0x0000000fU))))));
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCNext 
        = ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__PCSrcE))
            ? ((IData)(4U) + vlSelfRef.testbench__DOT__dut__DOT__PC)
            : ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__PCSrcE))
                ? vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCTargetE
                : (0xfffffffeU & vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__Result)));
    vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__FlushE 
        = ((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__PCSrcE)) 
           | (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__StallF));
}

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_nba\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            if (vlSelfRef.testbench__DOT__MemWrite) {
                if (VL_UNLIKELY((((0x00000064U == vlSelfRef.testbench__DOT__DataAdr) 
                                  & (0x00000019U == vlSelfRef.testbench__DOT__WriteData))))) {
                    VL_WRITEF_NX("Simulation succeeded\n",0);
                    VL_FINISH_MT("testbench/testbench.sv", 64, "");
                } else if (VL_UNLIKELY(((0x00000060U 
                                         != vlSelfRef.testbench__DOT__DataAdr)))) {
                    VL_WRITEF_NX("Simulation failed\n",0);
                    VL_FINISH_MT("testbench/testbench.sv", 67, "");
                }
            }
            vlSelfRef.__VdlySet__testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__rf__DOT__rf__v0 = 0U;
            if (((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RegWriteW) 
                 & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDW)))) {
                vlSelfRef.__VdlyVal__testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__rf__DOT__rf__v0 
                    = vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ResultW;
                vlSelfRef.__VdlyDim0__testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__rf__DOT__rf__v0 
                    = vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDW;
                vlSelfRef.__VdlySet__testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__rf__DOT__rf__v0 = 1U;
            }
        }
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtestbench___024root___nba_sequent__TOP__1(vlSelf);
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
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtestbench___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__4
            if (vlSelfRef.__VdlySet__testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__rf__DOT__rf__v0) {
                vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__rf__DOT__rf[vlSelfRef.__VdlyDim0__testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__rf__DOT__rf__v0] 
                    = vlSelfRef.__VdlyVal__testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__rf__DOT__rf__v0;
            }
        }
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__rd 
                = ((4U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__funct3M))
                    ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__funct3M) 
                                            >> 1U))))) 
                       & ((((- (IData)((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__funct3M)))) 
                            & vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
                            [(0x000000ffU & ((IData)(1U) 
                                             + vlSelfRef.testbench__DOT__DataAdr))]) 
                           << 8U) | vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
                          [(0x000000ffU & vlSelfRef.testbench__DOT__DataAdr)]))
                    : ((2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__funct3M))
                        ? ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
                                       [(0x000000ffU 
                                         & ((IData)(3U) 
                                            + vlSelfRef.testbench__DOT__DataAdr))]) 
                               << 8U) | vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
                              [(0x000000ffU & ((IData)(2U) 
                                               + vlSelfRef.testbench__DOT__DataAdr))]) 
                             << 0x00000010U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
                                                         [
                                                         (0x000000ffU 
                                                          & ((IData)(1U) 
                                                             + vlSelfRef.testbench__DOT__DataAdr))]) 
                                                 << 8U) 
                                                | vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
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
                                                 << 8U)) 
                                 | vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
                                 [(0x000000ffU & ((IData)(1U) 
                                                  + vlSelfRef.testbench__DOT__DataAdr))])
                              : (- (IData)((1U & (vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
                                                  [
                                                  (0x000000ffU 
                                                   & vlSelfRef.testbench__DOT__DataAdr)] 
                                                  >> 7U))))) 
                            << 8U) | vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
                           [(0x000000ffU & vlSelfRef.testbench__DOT__DataAdr)])));
        }
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__5
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
                                                            | ((((~ (IData)(vlSelfRef.testbench__DOT__clk)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__clk__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.testbench__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__clk__0))))))));
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
        VL_FATAL_MT("testbench/testbench.sv", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
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
            VL_FATAL_MT("testbench/testbench.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("testbench/testbench.sv", 1, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtestbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("testbench/testbench.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
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
