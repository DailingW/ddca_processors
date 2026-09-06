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

extern const VlUnpacked<CData/*0:0*/, 512> Vtestbench__ConstPool__TABLE_h3c44eaed_0;
extern const VlUnpacked<SData/*9:0*/, 256> Vtestbench__ConstPool__TABLE_h6944f904_0;
void Vtestbench___024root__trace_chg_dtype____0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 15>& __VdtypeVar);

void Vtestbench___024root__trace_chg_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0_sub_0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.testbench__DOT__dut__DOT__PC),32);
        bufp->chgCData(oldp+1,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA1E),4);
        bufp->chgCData(oldp+2,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA2E),4);
        bufp->chgBit(oldp+3,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUSrcE));
        bufp->chgBit(oldp+4,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__MemtoRegE));
        bufp->chgBit(oldp+5,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__MemtoRegW));
        bufp->chgBit(oldp+6,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSE));
        bufp->chgBit(oldp+7,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSM));
        bufp->chgBit(oldp+8,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSW));
        bufp->chgCData(oldp+9,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControlE),2);
        bufp->chgCData(oldp+10,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteE),2);
        bufp->chgBit(oldp+11,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__BranchE));
        bufp->chgBit(oldp+12,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__MemtoRegM));
        bufp->chgBit(oldp+13,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUSrcE));
        bufp->chgBit(oldp+14,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__BranchE));
        bufp->chgBit(oldp+15,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__MemtoRegE));
        bufp->chgBit(oldp+16,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__MemtoRegM));
        bufp->chgBit(oldp+17,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__MemtoRegW));
        bufp->chgBit(oldp+18,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSM));
        bufp->chgBit(oldp+19,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSW));
        bufp->chgBit(oldp+20,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSE));
        bufp->chgIData(oldp+21,(((IData)(4U) + vlSelfRef.testbench__DOT__dut__DOT__PC)),32);
        bufp->chgIData(oldp+22,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD1E),32);
        bufp->chgIData(oldp+23,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD2E),32);
        bufp->chgIData(oldp+24,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ExtImmE),32);
        bufp->chgIData(oldp+25,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultW),32);
        bufp->chgIData(oldp+26,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ReadDataW),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+27,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__hu__DOT__PCWritePendingF) 
                               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSW) 
                                  | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__BranchTakenE)))));
        bufp->chgBit(oldp+28,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSE) 
                               & Vtestbench__ConstPool__TABLE_h3c44eaed_0
                               [((((4U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                             >> 1U)))) 
                                  << 6U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge) 
                                             << 5U) 
                                            | ((0x00000010U 
                                                & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                                   << 4U)) 
                                               | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))])));
        bufp->chgBit(oldp+29,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__BranchTakenE)) 
                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSE) 
                                  & Vtestbench__ConstPool__TABLE_h3c44eaed_0
                                  [((((4U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                             << 1U)) 
                                      | ((2U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                << 1U)) 
                                         | (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                  >> 1U)))) 
                                     << 6U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge) 
                                                << 5U) 
                                               | ((0x00000010U 
                                                   & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                                      << 4U)) 
                                                  | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))]))));
        bufp->chgBit(oldp+30,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__BranchTakenE)) 
                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSE) 
                                  & Vtestbench__ConstPool__TABLE_h3c44eaed_0
                                  [((((4U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                             << 1U)) 
                                      | ((2U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                << 1U)) 
                                         | (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                  >> 1U)))) 
                                     << 6U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge) 
                                                << 5U) 
                                               | ((0x00000010U 
                                                   & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                                      << 4U)) 
                                                  | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))]))));
        bufp->chgIData(oldp+31,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__BranchTakenE)
                                  ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE
                                  : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSW)
                                      ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW
                                      : ((IData)(4U) 
                                         + vlSelfRef.testbench__DOT__dut__DOT__PC)))),32);
        bufp->chgIData(oldp+32,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSW)
                                  ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW
                                  : ((IData)(4U) + vlSelfRef.testbench__DOT__dut__DOT__PC))),32);
        bufp->chgBit(oldp+33,((IData)(((~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControlE) 
                                           >> 1U)) 
                                       & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum 
                                          >> 0x00000020U)))));
        bufp->chgBit(oldp+34,((1U & ((~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControlE) 
                                         >> 1U)) & 
                                     ((~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControlE) 
                                          ^ ((vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b 
                                              ^ vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a) 
                                             >> 0x0000001fU))) 
                                      & ((vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a 
                                          >> 0x0000001fU) 
                                         ^ (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum 
                                                    >> 0x0000001fU))))))));
        bufp->chgIData(oldp+35,(((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControlE))
                                  ? (~ vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b)
                                  : vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b)),32);
        bufp->chgBit(oldp+36,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA1E) 
                               == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3M))));
        bufp->chgBit(oldp+37,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA1E) 
                               == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3W))));
        bufp->chgBit(oldp+38,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA2E) 
                               == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3M))));
        bufp->chgBit(oldp+39,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA2E) 
                               == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3W))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+40,(vlSelfRef.testbench__DOT__WriteData),32);
        bufp->chgIData(oldp+41,(vlSelfRef.testbench__DOT__DataAdr),32);
        bufp->chgBit(oldp+42,(vlSelfRef.testbench__DOT__MemWrite));
        bufp->chgIData(oldp+43,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD),32);
        bufp->chgCData(oldp+44,(((8U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE 
                                        >> 0x0000001cU)) 
                                 | (((0U == vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE) 
                                     << 2U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__flagreg0__DOT__d)))),4);
        bufp->chgCData(oldp+45,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA1D),4);
        bufp->chgCData(oldp+46,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA2D),4);
        bufp->chgCData(oldp+47,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3E),4);
        bufp->chgCData(oldp+48,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3M),4);
        bufp->chgCData(oldp+49,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3W),4);
        bufp->chgBit(oldp+50,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RegWriteW));
        bufp->chgBit(oldp+51,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RegWriteM));
        bufp->chgBit(oldp+52,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSD));
        bufp->chgBit(oldp+53,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__BranchTakenE));
        bufp->chgBit(oldp+54,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__stallD) 
                               | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__hu__DOT__PCWritePendingF))));
        bufp->chgBit(oldp+55,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__stallD));
        bufp->chgBit(oldp+56,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__flushE));
        bufp->chgCData(oldp+57,((3U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                       [((0x000000fcU 
                                          & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                             >> 0x00000012U)) 
                                         | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                  >> 0x0000001aU)))] 
                                       >> 8U))),2);
        bufp->chgCData(oldp+58,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ImmSrcD),2);
        bufp->chgCData(oldp+59,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__FwdAE),2);
        bufp->chgCData(oldp+60,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__FwdBE),2);
        bufp->chgIData(oldp+61,((vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                 >> 0x0000000cU)),20);
        bufp->chgCData(oldp+62,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteD),2);
        bufp->chgBit(oldp+63,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__dec__DOT__RegW));
        bufp->chgBit(oldp+64,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                     [((0x000000fcU 
                                        & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                           >> 0x00000012U)) 
                                       | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                >> 0x0000001aU)))] 
                                     >> 2U))));
        bufp->chgBit(oldp+65,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                     [((0x000000fcU 
                                        & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                           >> 0x00000012U)) 
                                       | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                >> 0x0000001aU)))] 
                                     >> 4U))));
        bufp->chgBit(oldp+66,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                     [((0x000000fcU 
                                        & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                           >> 0x00000012U)) 
                                       | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                >> 0x0000001aU)))] 
                                     >> 5U))));
        bufp->chgBit(oldp+67,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                     [((0x000000fcU 
                                        & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                           >> 0x00000012U)) 
                                       | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                >> 0x0000001aU)))] 
                                     >> 1U))));
        bufp->chgCData(oldp+68,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__ALUControlD),2);
        bufp->chgCData(oldp+69,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE),4);
        bufp->chgBit(oldp+70,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__RegWriteE));
        bufp->chgBit(oldp+71,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__MemWriteE));
        bufp->chgBit(oldp+72,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__RegWriteE) 
                               & Vtestbench__ConstPool__TABLE_h3c44eaed_0
                               [((((4U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                             >> 1U)))) 
                                  << 6U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge) 
                                             << 5U) 
                                            | ((0x00000010U 
                                                & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                                   << 4U)) 
                                               | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))])));
        bufp->chgBit(oldp+73,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__MemWriteE) 
                               & Vtestbench__ConstPool__TABLE_h3c44eaed_0
                               [((((4U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                             >> 1U)))) 
                                  << 6U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge) 
                                             << 5U) 
                                            | ((0x00000010U 
                                                & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                                   << 4U)) 
                                               | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))])));
        bufp->chgBit(oldp+74,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                     [((0x000000fcU 
                                        & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                           >> 0x00000012U)) 
                                       | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                >> 0x0000001aU)))] 
                                     >> 5U))));
        bufp->chgBit(oldp+75,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                     [((0x000000fcU 
                                        & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                           >> 0x00000012U)) 
                                       | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                >> 0x0000001aU)))] 
                                     >> 1U))));
        bufp->chgCData(oldp+76,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__FlagWrite),2);
        bufp->chgCData(oldp+77,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                  << 2U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5))),4);
        bufp->chgBit(oldp+78,(Vtestbench__ConstPool__TABLE_h3c44eaed_0
                              [((((4U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                         << 1U)) | 
                                  ((2U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                          << 1U)) | 
                                   (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                          >> 1U)))) 
                                 << 6U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge) 
                                            << 5U) 
                                           | ((0x00000010U 
                                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                                  << 4U)) 
                                              | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))]));
        bufp->chgBit(oldp+79,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                     >> 1U))));
        bufp->chgBit(oldp+80,((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5))));
        bufp->chgBit(oldp+81,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                     >> 1U))));
        bufp->chgBit(oldp+82,((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5))));
        bufp->chgBit(oldp+83,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge));
        bufp->chgBit(oldp+84,((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__FlagWrite))));
        bufp->chgCData(oldp+85,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__flagreg0__DOT__d),2);
        bufp->chgCData(oldp+86,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5),2);
        bufp->chgBit(oldp+87,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__FlagWrite) 
                                     >> 1U))));
        bufp->chgCData(oldp+88,(((2U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE 
                                        >> 0x0000001eU)) 
                                 | (0U == vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE))),2);
        bufp->chgCData(oldp+89,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5),2);
        bufp->chgCData(oldp+90,((vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                 >> 0x0000001cU)),4);
        bufp->chgCData(oldp+91,((3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                       >> 0x0000001aU))),2);
        bufp->chgCData(oldp+92,((0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                >> 0x00000014U))),6);
        bufp->chgCData(oldp+93,((0x0000000fU & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                >> 0x0000000cU))),4);
        bufp->chgSData(oldp+94,(Vtestbench__ConstPool__TABLE_h6944f904_0
                                [((0x000000fcU & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                  >> 0x00000012U)) 
                                  | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                           >> 0x0000001aU)))]),10);
        bufp->chgBit(oldp+95,((1U & Vtestbench__ConstPool__TABLE_h6944f904_0
                               [((0x000000fcU & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                 >> 0x00000012U)) 
                                 | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                          >> 0x0000001aU)))])));
        bufp->chgBit(oldp+96,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                     [((0x000000fcU 
                                        & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                           >> 0x00000012U)) 
                                       | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                >> 0x0000001aU)))] 
                                     >> 4U))));
        bufp->chgBit(oldp+97,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__MemWriteE) 
                               & Vtestbench__ConstPool__TABLE_h3c44eaed_0
                               [((((4U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                          << 1U)) | 
                                   ((2U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                             >> 1U)))) 
                                  << 6U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge) 
                                             << 5U) 
                                            | ((0x00000010U 
                                                & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                                   << 4U)) 
                                               | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))])));
        bufp->chgBit(oldp+98,(vlSelfRef.testbench__DOT__MemWrite));
        bufp->chgBit(oldp+99,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                     [((0x000000fcU 
                                        & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                           >> 0x00000012U)) 
                                       | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                >> 0x0000001aU)))] 
                                     >> 2U))));
        bufp->chgBit(oldp+100,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__MemWriteE));
        bufp->chgBit(oldp+101,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSD));
        bufp->chgBit(oldp+102,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__RegWriteE) 
                                & Vtestbench__ConstPool__TABLE_h3c44eaed_0
                                [((((4U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                           << 1U)) 
                                    | ((2U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                              << 1U)) 
                                       | (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                >> 1U)))) 
                                   << 6U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge) 
                                              << 5U) 
                                             | ((0x00000010U 
                                                 & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                                    << 4U)) 
                                                | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))])));
        bufp->chgBit(oldp+103,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RegWriteM));
        bufp->chgBit(oldp+104,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__dec__DOT__RegW));
        bufp->chgBit(oldp+105,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__RegWriteE));
        bufp->chgBit(oldp+106,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RegWriteW));
        bufp->chgIData(oldp+107,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW),32);
        bufp->chgIData(oldp+108,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE),32);
        bufp->chgIData(oldp+109,(((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ImmSrcD))
                                   ? (0x000000ffU & vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD)
                                   : ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ImmSrcD))
                                       ? (0x00000fffU 
                                          & vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD)
                                       : ((((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                           >> 0x00000017U)))) 
                                            << 0x0000001aU) 
                                           | (0x03fffffcU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                 << 2U))) 
                                          & (- (IData)(
                                                       (2U 
                                                        == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ImmSrcD)))))))),32);
        bufp->chgIData(oldp+110,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a),32);
        bufp->chgIData(oldp+111,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b),32);
        bufp->chgIData(oldp+112,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__WriteDataE),32);
        bufp->chgBit(oldp+113,((vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE 
                                >> 0x0000001fU)));
        bufp->chgBit(oldp+114,((0U == vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE)));
        bufp->chgQData(oldp+115,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum),33);
        bufp->chgBit(oldp+117,((1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__stallD)))));
        bufp->chgIData(oldp+118,((0x00ffffffU & vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD)),24);
        bufp->chgBit(oldp+119,((1U & (~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__stallD) 
                                         | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__hu__DOT__PCWritePendingF))))));
        bufp->chgCData(oldp+120,((0x0000000fU & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                 >> 0x00000010U))),4);
        bufp->chgBit(oldp+121,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                      [((0x000000fcU 
                                         & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                            >> 0x00000012U)) 
                                        | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                 >> 0x0000001aU)))] 
                                      >> 8U))));
        bufp->chgCData(oldp+122,((0x0000000fU & vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD)),4);
        bufp->chgBit(oldp+123,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                      [((0x000000fcU 
                                         & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                            >> 0x00000012U)) 
                                        | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                                 >> 0x0000001aU)))] 
                                      >> 9U))));
        bufp->chgBit(oldp+124,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3E) 
                                 == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA2D)) 
                                | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3E) 
                                   == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA1D)))));
        bufp->chgBit(oldp+125,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__hu__DOT__PCWritePendingF));
    }
    bufp->chgBit(oldp+126,(vlSelfRef.testbench__DOT__clk));
    bufp->chgBit(oldp+127,(vlSelfRef.testbench__DOT__reset));
    bufp->chgIData(oldp+128,(vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                             [(0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                              >> 2U))]),32);
    bufp->chgIData(oldp+129,(vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
                             [(0x0000003fU & (vlSelfRef.testbench__DOT__DataAdr 
                                              >> 2U))]),32);
    bufp->chgIData(oldp+130,(((0x0fU == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA1D))
                               ? ((IData)(4U) + vlSelfRef.testbench__DOT__dut__DOT__PC)
                               : ((0x0eU >= (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA1D))
                                   ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf
                                  [vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA1D]
                                   : 0U))),32);
    bufp->chgIData(oldp+131,(((0x0fU == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA2D))
                               ? ((IData)(4U) + vlSelfRef.testbench__DOT__dut__DOT__PC)
                               : ((0x0eU >= (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA2D))
                                   ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf
                                  [vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA2D]
                                   : 0U))),32);
    Vtestbench___024root__trace_chg_dtype____0(vlSelf, bufp, 132, vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf);
}

void Vtestbench___024root__trace_chg_dtype____0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 15>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_dtype____0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[14]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[13]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[0]),32);
}

void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_cleanup\n"); );
    // Body
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
