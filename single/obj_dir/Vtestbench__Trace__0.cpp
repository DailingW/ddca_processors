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
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                               [(0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                                >> 2U))]),32);
        bufp->chgIData(oldp+1,((vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                [(0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                                 >> 2U))] 
                                >> 0x0000000cU)),20);
        bufp->chgIData(oldp+2,(((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ImmSrc))
                                 ? (0x000000ffU & vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                    [(0x0000003fU & 
                                      (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                       >> 2U))]) : 
                                ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ImmSrc))
                                  ? (0x00000fffU & vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                     [(0x0000003fU 
                                       & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                          >> 2U))])
                                  : ((((- (IData)((1U 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                                      [
                                                      (0x0000003fU 
                                                       & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                                          >> 2U))] 
                                                      >> 0x00000017U)))) 
                                       << 0x0000001aU) 
                                      | (0x03fffffcU 
                                         & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                            [(0x0000003fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                                 >> 2U))] 
                                            << 2U))) 
                                     & (- (IData)((2U 
                                                   == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ImmSrc)))))))),32);
        bufp->chgIData(oldp+3,((0x00ffffffU & vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                [(0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                                 >> 2U))])),24);
        bufp->chgCData(oldp+4,((0x0000000fU & (vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                               [(0x0000003fU 
                                                 & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                                    >> 2U))] 
                                               >> 0x00000010U))),4);
        bufp->chgCData(oldp+5,((0x0000000fU & vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                                [(0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                                 >> 2U))])),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+6,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__MemWrite));
        bufp->chgIData(oldp+7,(vlSelfRef.testbench__DOT__dut__DOT__PC),32);
        bufp->chgBit(oldp+8,((Vtestbench__ConstPool__TABLE_h3c44eaed_0
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
                                              | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2))))] 
                              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__dec__DOT__RegW))));
        bufp->chgBit(oldp+9,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                    [(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                                       << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))] 
                                    >> 5U))));
        bufp->chgBit(oldp+10,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                     [(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                                        << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))] 
                                     >> 4U))));
        bufp->chgBit(oldp+11,((Vtestbench__ConstPool__TABLE_h3c44eaed_0
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
                                               | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2))))] 
                               & ((Vtestbench__ConstPool__TABLE_h6944f904_0
                                   [(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                                      << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))] 
                                   >> 1U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__dec__DOT__RegW) 
                                             & (0x0fU 
                                                == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))))));
        bufp->chgCData(oldp+12,((3U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                       [(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                                          << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))] 
                                       >> 8U))),2);
        bufp->chgCData(oldp+13,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ImmSrc),2);
        bufp->chgCData(oldp+14,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControl),2);
        bufp->chgCData(oldp+15,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagW),2);
        bufp->chgBit(oldp+16,((1U & ((Vtestbench__ConstPool__TABLE_h6944f904_0
                                      [(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                                         << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))] 
                                      >> 1U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__dec__DOT__RegW) 
                                                & (0x0fU 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))))));
        bufp->chgBit(oldp+17,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__dec__DOT__RegW));
        bufp->chgBit(oldp+18,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                     [(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                                        << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))] 
                                     >> 2U))));
        bufp->chgCData(oldp+19,(vlSelfRef.__VdfgRegularize_hebeb780c_0_2),4);
        bufp->chgCData(oldp+20,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__FlagWrite),2);
        bufp->chgCData(oldp+21,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                  << 2U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5))),4);
        bufp->chgBit(oldp+22,(Vtestbench__ConstPool__TABLE_h3c44eaed_0
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
                                              | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2))))]));
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                     >> 1U))));
        bufp->chgBit(oldp+24,((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5))));
        bufp->chgBit(oldp+25,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                     >> 1U))));
        bufp->chgBit(oldp+26,((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5))));
        bufp->chgBit(oldp+27,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge));
        bufp->chgBit(oldp+28,((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__FlagWrite))));
        bufp->chgCData(oldp+29,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5),2);
        bufp->chgBit(oldp+30,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__FlagWrite) 
                                     >> 1U))));
        bufp->chgCData(oldp+31,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5),2);
        bufp->chgCData(oldp+32,(vlSelfRef.__VdfgRegularize_hebeb780c_0_9),2);
        bufp->chgCData(oldp+33,(vlSelfRef.__VdfgRegularize_hebeb780c_0_1),6);
        bufp->chgCData(oldp+34,(vlSelfRef.__VdfgRegularize_hebeb780c_0_0),4);
        bufp->chgSData(oldp+35,(Vtestbench__ConstPool__TABLE_h6944f904_0
                                [(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                                   << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))]),10);
        bufp->chgBit(oldp+36,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                     [(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                                        << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))] 
                                     >> 1U))));
        bufp->chgBit(oldp+37,((1U & Vtestbench__ConstPool__TABLE_h6944f904_0
                               [(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                                  << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))])));
        bufp->chgIData(oldp+38,(((IData)(4U) + vlSelfRef.testbench__DOT__dut__DOT__PC)),32);
        bufp->chgIData(oldp+39,(((IData)(8U) + vlSelfRef.testbench__DOT__dut__DOT__PC)),32);
        bufp->chgCData(oldp+40,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RA1),4);
        bufp->chgCData(oldp+41,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RA2),4);
        bufp->chgBit(oldp+42,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                     [(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                                        << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))] 
                                     >> 8U))));
        bufp->chgBit(oldp+43,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                     [(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                                        << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))] 
                                     >> 9U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+44,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__WriteData),32);
        bufp->chgIData(oldp+45,(vlSelfRef.testbench__DOT__DataAdr),32);
        bufp->chgCData(oldp+46,(((8U & (vlSelfRef.testbench__DOT__DataAdr 
                                        >> 0x0000001cU)) 
                                 | (((0U == vlSelfRef.testbench__DOT__DataAdr) 
                                     << 2U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__flagreg0__DOT__d)))),4);
        bufp->chgCData(oldp+47,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__flagreg0__DOT__d),2);
        bufp->chgCData(oldp+48,(((2U & (vlSelfRef.testbench__DOT__DataAdr 
                                        >> 0x0000001eU)) 
                                 | (0U == vlSelfRef.testbench__DOT__DataAdr))),2);
        bufp->chgIData(oldp+49,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a),32);
        bufp->chgIData(oldp+50,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b),32);
        bufp->chgIData(oldp+51,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__Result),32);
        bufp->chgBit(oldp+52,((vlSelfRef.testbench__DOT__DataAdr 
                               >> 0x0000001fU)));
        bufp->chgBit(oldp+53,((0U == vlSelfRef.testbench__DOT__DataAdr)));
        bufp->chgQData(oldp+54,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum),33);
    }
    bufp->chgBit(oldp+56,(vlSelfRef.testbench__DOT__clk));
    bufp->chgBit(oldp+57,(vlSelfRef.testbench__DOT__reset));
    bufp->chgIData(oldp+58,(vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
                            [(0x0000003fU & (vlSelfRef.testbench__DOT__DataAdr 
                                             >> 2U))]),32);
    bufp->chgIData(oldp+59,(((Vtestbench__ConstPool__TABLE_h3c44eaed_0
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
                                              | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2))))] 
                              & ((Vtestbench__ConstPool__TABLE_h6944f904_0
                                  [(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                                     << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))] 
                                  >> 1U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__dec__DOT__RegW) 
                                            & (0x0fU 
                                               == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))))
                              ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__Result
                              : ((IData)(4U) + vlSelfRef.testbench__DOT__dut__DOT__PC))),32);
    bufp->chgBit(oldp+60,((IData)(((~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControl) 
                                       >> 1U)) & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum 
                                                  >> 0x00000020U)))));
    bufp->chgBit(oldp+61,((1U & ((~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControl) 
                                     >> 1U)) & ((~ 
                                                 ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControl) 
                                                  ^ 
                                                  ((vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b 
                                                    ^ vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a) 
                                                   >> 0x0000001fU))) 
                                                & ((vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a 
                                                    >> 0x0000001fU) 
                                                   ^ (IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum 
                                                              >> 0x0000001fU))))))));
    bufp->chgIData(oldp+62,(((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControl))
                              ? (~ vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b)
                              : vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b)),32);
    Vtestbench___024root__trace_chg_dtype____0(vlSelf, bufp, 63, vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__rf__DOT__rf);
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
