// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


void Vtestbench___024root__trace_chg_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0\n"); );
    // Body
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtestbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlUnpacked<CData/*3:0*/, 64> Vtestbench__ConstPool__TABLE_h7b4ec6fd_0;
void Vtestbench___024root__trace_chg_dtype____0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);

void Vtestbench___024root__trace_chg_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0_sub_0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.testbench__DOT__WriteData),32);
        bufp->chgIData(oldp+1,(vlSelfRef.testbench__DOT__DataAdr),32);
        bufp->chgBit(oldp+2,(vlSelfRef.testbench__DOT__MemWrite));
        bufp->chgIData(oldp+3,(vlSelfRef.testbench__DOT__dut__DOT__PC),32);
        bufp->chgCData(oldp+4,(vlSelfRef.testbench__DOT__dut__DOT__funct3M),3);
        bufp->chgCData(oldp+5,((0x000000ffU & vlSelfRef.testbench__DOT__DataAdr)),8);
        bufp->chgBit(oldp+6,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUSrcE));
        bufp->chgBit(oldp+7,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RegWriteM));
        bufp->chgBit(oldp+8,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RegWriteW));
        bufp->chgBit(oldp+9,((0U == vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__Result)));
        bufp->chgBit(oldp+10,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__LessSignedE));
        bufp->chgBit(oldp+11,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__LessUnsignedE));
        bufp->chgBit(oldp+12,((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__PCSrcE))));
        bufp->chgCData(oldp+13,((0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+14,((0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                >> 0x00000014U))),5);
        bufp->chgCData(oldp+15,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RS1E),5);
        bufp->chgCData(oldp+16,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RS2E),5);
        bufp->chgCData(oldp+17,((0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                >> 7U))),5);
        bufp->chgCData(oldp+18,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDE),5);
        bufp->chgCData(oldp+19,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDM),5);
        bufp->chgCData(oldp+20,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RDW),5);
        bufp->chgBit(oldp+21,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__StallF));
        bufp->chgBit(oldp+22,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__FlushE));
        bufp->chgCData(oldp+23,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ForwardAE),2);
        bufp->chgCData(oldp+24,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ForwardBE),2);
        bufp->chgCData(oldp+25,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ResultSrcE),2);
        bufp->chgCData(oldp+26,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ResultSrcW),2);
        bufp->chgCData(oldp+27,((3U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls) 
                                       >> 9U))),2);
        bufp->chgCData(oldp+28,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE),4);
        bufp->chgIData(oldp+29,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD),32);
        bufp->chgCData(oldp+30,((0x0000007fU & vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD)),7);
        bufp->chgCData(oldp+31,((7U & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                       >> 0x0000000cU))),3);
        bufp->chgBit(oldp+32,((1U & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                     >> 0x0000001eU))));
        bufp->chgCData(oldp+33,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__PCSrcE),2);
        bufp->chgBit(oldp+34,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls) 
                                     >> 0x0000000bU))));
        bufp->chgBit(oldp+35,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls) 
                                     >> 4U))));
        bufp->chgBit(oldp+36,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls) 
                                     >> 8U))));
        bufp->chgBit(oldp+37,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls) 
                                     >> 7U))));
        bufp->chgCData(oldp+38,((3U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls) 
                                       >> 5U))),2);
        bufp->chgCData(oldp+39,((3U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls))),2);
        bufp->chgCData(oldp+40,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__JumpE),2);
        bufp->chgCData(oldp+41,(Vtestbench__ConstPool__TABLE_h7b4ec6fd_0
                                [(((IData)((0x40000020U 
                                            == (0x40000020U 
                                                & vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD))) 
                                   << 5U) | ((0x0000001cU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                 >> 0x0000000aU)) 
                                             | (3U 
                                                & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls) 
                                                   >> 2U))))]),4);
        bufp->chgBit(oldp+42,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__RegWriteE));
        bufp->chgBit(oldp+43,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__BranchE));
        bufp->chgBit(oldp+44,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__MemWriteE));
        bufp->chgCData(oldp+45,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__ResultSrcM),2);
        bufp->chgCData(oldp+46,((3U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls) 
                                       >> 2U))),2);
        bufp->chgCData(oldp+47,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3E),3);
        bufp->chgCData(oldp+48,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3M),3);
        bufp->chgCData(oldp+49,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__funct3W),3);
        bufp->chgBit(oldp+50,((1U & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                     >> 5U))));
        bufp->chgBit(oldp+51,((IData)((0x40000020U 
                                       == (0x40000020U 
                                           & vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD)))));
        bufp->chgBit(oldp+52,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls) 
                                     >> 8U))));
        bufp->chgBit(oldp+53,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUSrcE));
        bufp->chgBit(oldp+54,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls) 
                                     >> 4U))));
        bufp->chgBit(oldp+55,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__BranchE));
        bufp->chgSData(oldp+56,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls),12);
        bufp->chgBit(oldp+57,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls) 
                                     >> 7U))));
        bufp->chgBit(oldp+58,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__MemWriteE));
        bufp->chgBit(oldp+59,(vlSelfRef.testbench__DOT__MemWrite));
        bufp->chgBit(oldp+60,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls) 
                                     >> 0x0000000bU))));
        bufp->chgBit(oldp+61,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__RegWriteE));
        bufp->chgBit(oldp+62,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RegWriteM));
        bufp->chgBit(oldp+63,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__RegWriteW));
        bufp->chgCData(oldp+64,((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__PCSrcE))),2);
        bufp->chgIData(oldp+65,(((IData)(4U) + vlSelfRef.testbench__DOT__dut__DOT__PC)),32);
        bufp->chgIData(oldp+66,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4D),32);
        bufp->chgIData(oldp+67,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4E),32);
        bufp->chgIData(oldp+68,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4M),32);
        bufp->chgIData(oldp+69,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCPlus4W),32);
        bufp->chgIData(oldp+70,(((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__PCSrcE))
                                  ? (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCTargetE 
                                     & (- (IData)((1U 
                                                   & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__PCSrcE)))))
                                  : ((IData)(4U) + vlSelfRef.testbench__DOT__dut__DOT__PC))),32);
        bufp->chgIData(oldp+71,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCTargetE),32);
        bufp->chgIData(oldp+72,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCD),32);
        bufp->chgIData(oldp+73,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__PCE),32);
        bufp->chgIData(oldp+74,(((0x00000400U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls))
                                  ? (((0x00000200U 
                                       & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls))
                                       ? ((0x7ff80000U 
                                           & ((- (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                          >> 0x0000001fU))) 
                                              << 0x00000013U)) 
                                          | ((0x0007f800U 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                 >> 1U)) 
                                             | ((0x00000400U 
                                                 & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                    >> 0x0000000aU)) 
                                                | (0x000003ffU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                      >> 0x00000015U)))))
                                       : ((0x7ffff800U 
                                           & ((- (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                          >> 0x0000001fU))) 
                                              << 0x0000000bU)) 
                                          | ((0x00000400U 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                 << 3U)) 
                                             | ((0x000003f0U 
                                                 & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                    >> 0x00000015U)) 
                                                | (0x0000000fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                      >> 8U)))))) 
                                     << 1U) : (((- (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                            >> 0x0000001fU))) 
                                                << 0x0000000cU) 
                                               | ((0x00000fe0U 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001fU 
                                                     & ((0x00000200U 
                                                         & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__c__DOT__md__DOT__controls))
                                                         ? 
                                                        (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                         >> 7U)
                                                         : 
                                                        (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                                         >> 0x00000014U))))))),32);
        bufp->chgIData(oldp+75,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ImmExtE),32);
        bufp->chgIData(oldp+76,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__Result),32);
        bufp->chgIData(oldp+77,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ALUResultW),32);
        bufp->chgIData(oldp+78,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__WriteDataE),32);
        bufp->chgIData(oldp+79,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ReadDataW),32);
        bufp->chgIData(oldp+80,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__RD1E),32);
        bufp->chgIData(oldp+81,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__RD2E),32);
        bufp->chgIData(oldp+82,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__a),32);
        bufp->chgIData(oldp+83,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__b),32);
        bufp->chgIData(oldp+84,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__ResultW),32);
        bufp->chgCData(oldp+85,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__Funct3E),3);
        bufp->chgCData(oldp+86,(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__Funct3W),3);
        bufp->chgIData(oldp+87,(((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE))
                                  ? (~ vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__b)
                                  : vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__b)),32);
        bufp->chgQData(oldp+88,((0x00000001ffffffffULL 
                                 & ((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__a)) 
                                    + ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE)))) 
                                       + (QData)((IData)(
                                                         ((1U 
                                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__ALUControlE))
                                                           ? 
                                                          (~ vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__b)
                                                           : vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__alu__DOT__b))))))),33);
        bufp->chgIData(oldp+90,((vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                 >> 7U)),25);
        bufp->chgBit(oldp+91,((1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__StallF)))));
    }
    bufp->chgBit(oldp+92,(vlSelfRef.testbench__DOT__clk));
    bufp->chgBit(oldp+93,(vlSelfRef.testbench__DOT__reset));
    bufp->chgIData(oldp+94,(vlSelfRef.testbench__DOT__cycle),32);
    bufp->chgIData(oldp+95,(vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                            [(0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                             >> 2U))]),32);
    bufp->chgIData(oldp+96,(vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__rd),32);
    bufp->chgIData(oldp+97,(((0U == (0x0000001fU & 
                                     (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                      >> 0x0000000fU)))
                              ? 0U : vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__rf__DOT__rf
                             [(0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                              >> 0x0000000fU))])),32);
    bufp->chgIData(oldp+98,(((0U == (0x0000001fU & 
                                     (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                      >> 0x00000014U)))
                              ? 0U : vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__rf__DOT__rf
                             [(0x0000001fU & (vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__InstrD 
                                              >> 0x00000014U))])),32);
    Vtestbench___024root__trace_chg_dtype____0(vlSelf, bufp, 99, vlSelfRef.testbench__DOT__dut__DOT__rvpipeline__DOT__dp__DOT__rf__DOT__rf);
}

void Vtestbench___024root__trace_chg_dtype____0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_dtype____0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[31]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[30]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[29]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[28]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[27]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[26]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[25]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[24]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[23]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[22]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[21]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[20]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[19]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[18]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[17]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[16]),32);
    bufp->chgIData(oldp+16,(__VdtypeVar[15]),32);
    bufp->chgIData(oldp+17,(__VdtypeVar[14]),32);
    bufp->chgIData(oldp+18,(__VdtypeVar[13]),32);
    bufp->chgIData(oldp+19,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+20,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+21,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+22,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+23,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+24,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+25,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+26,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+27,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+28,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+29,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+30,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+31,(__VdtypeVar[0]),32);
}

void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_cleanup\n"); );
    // Body
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
