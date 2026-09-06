// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


VL_ATTR_COLD void Vtestbench___024root__trace_init_dtype____0(Vtestbench___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__0(Vtestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "testbench", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"WriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"DataAdr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+42,0,"MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"WriteData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"DataAdr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+42,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+128,0,"Instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+129,0,"ReadData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "arm", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+128,0,"Instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+42,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"ALUResult",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"WriteData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+129,0,"ReadData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"InstrD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"ALUFlagsE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"RA1D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"RA2D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"RA1E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"RA2E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"A3E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"A3M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"A3W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+50,0,"RegWriteW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"RegWriteM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"ALUSrcE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"MemtoRegE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"MemtoRegW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+52,0,"PCSD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"PCSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"PCSM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"PCSW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"BranchTakenE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"stallF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+55,0,"stallD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"flushE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"flushD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"RegSrcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"ImmSrcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"ALUControlE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"FwdAE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+60,0,"FwdBE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_PUSH_PREFIX(tracep, "c", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"InstrD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,12);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"ALUFlagsE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"flushE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"RegSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"RegWriteM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+50,0,"RegWriteW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"ImmSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"ALUSrcE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"ALUControlE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+42,0,"MemWriteM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"MemtoRegE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"MemtoRegW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+52,0,"PCSD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"PCSE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"PCSM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"PCSW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"BranchTakenE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"FlagWriteD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"RegWriteD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"MemWriteD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"MemtoRegD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+66,0,"ALUSrcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"BranchD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"ALUControlD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"CondE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"FlagWriteE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+70,0,"RegWriteE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+71,0,"MemWriteE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"PCSE_condout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+72,0,"RegWriteE_condout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"MemWriteE_condout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"BranchE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"PCSrcE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"MemtoRegM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "alucontroldreg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+147,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "alusrcdreg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "branchdreg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+75,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "cl", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"Cond",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"ALUFlags",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"FlagW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"PCS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+70,0,"RegW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+71,0,"MemW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"Br",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"PCSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+72,0,"RegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"Branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"FlagWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"Flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"CondEx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "cc", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"Cond",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"Flags",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"CondEx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+79,0,"neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+81,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+82,0,"overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+83,0,"ge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "flagreg0", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+147,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+84,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "flagreg1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+147,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "condreg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+149,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "dec", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"Op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"Funct",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"Rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"FlagW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+52,0,"PCS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"RegW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"MemW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"MemtoReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+66,0,"ALUSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"ImmSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"RegSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"ALUControl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"Branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"controls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"ALUOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "flagwritereg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+147,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "memtoregmreg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "memtoregreg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "memtoregwreg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "memwritemreg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "memwritereg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "pcsmreg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "pcsrcwreg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "pcsreg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "regwritemreg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+102,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+103,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "regwritereg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+104,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+105,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "regwritewreg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+103,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+106,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "dp", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"RegSrcD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+50,0,"RegWriteW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"ImmSrcD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"ALUSrcE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"ALUControlE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"MemtoRegW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"PCSrcW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"BranchTakenE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"FwdAE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+60,0,"FwdBE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"stallF",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+55,0,"stallD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"flushD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"flushE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"RA1D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"RA2D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"RA1E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"RA2E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"A3E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"A3M",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"A3W",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"ALUFlagsE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"PCF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+128,0,"InstrF",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"InstrD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"ALUResultM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"WriteDataM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+129,0,"ReadData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"PCNextF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"PCNextNormalF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"PCPlus4F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"PCPlus8D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"ResultW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+108,0,"ALUResultE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+109,0,"ExtImmD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+130,0,"RD1D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+131,0,"RD2D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"RD1E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"RD2E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"ExtImmE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+110,0,"SrcAE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"SrcBE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+112,0,"WriteDataE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"ALUResultW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"ReadDataW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "alu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+110,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"ALUControl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+108,0,"Result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"ALUFlags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+113,0,"neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+114,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"condinvb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+115,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 32,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "branchmux", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+108,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "decodeReg_Instr", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+117,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+128,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "executeReg_a3reg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+149,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "executeReg_extimmreg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+109,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "executeReg_ra1reg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+149,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "executeReg_ra2reg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+149,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "executeReg_rd1reg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+130,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "executeReg_rd2reg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+131,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "ext", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+118,0,"Instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"ImmSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+109,0,"ExtImm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "memReg_a3reg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+149,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "memReg_aluresultreg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+108,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "memReg_writedatereg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+112,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "pcadd1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+151,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "pcmux", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "pcreg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+119,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "ra1mux", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+149,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+120,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+152,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+121,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "ra2mux", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+149,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+122,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+123,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "regfile_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+50,0,"we3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"ra1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"ra2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"wa3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"wd3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"r15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+130,0,"rd1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+131,0,"rd2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);

    Vtestbench___024root__trace_init_dtype____0(vlSelf, tracep, "rf", 0, c+132, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "resmux", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "srcafwdmux", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+110,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "srcbfwdmux", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+60,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+112,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "srcbmux", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+112,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "writebackReg_a3reg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+149,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "writebackReg_readdatareg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+129,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "writebackReg_writedatereg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "hu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"RA1D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"RA2D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"RA1E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"RA2E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"A3E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"A3M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"A3W",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"MemtoRegE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"RegWriteM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+50,0,"RegWriteW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+52,0,"PCSD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"PCSE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"PCSM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"PCSW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"BranchTakenE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"FwdAE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+60,0,"FwdBE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"StallF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+55,0,"StallD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"flushE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"flushD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+36,0,"Match_1E_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+37,0,"Match_1E_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"Match_2E_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+39,0,"Match_2E_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+124,0,"Match_12D_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+55,0,"LDRstall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+125,0,"PCWritePendingF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "dmem", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+42,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+129,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "imem", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+128,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_dtype_sub____0(Vtestbench___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtestbench___024root__trace_init_dtype____0(Vtestbench___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_dtype____0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtestbench___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_dtype_sub____0(Vtestbench___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_dtype_sub____0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 14, 0);
    for (int i = 0; i < 15; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (14 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_top(Vtestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_top\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtestbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtestbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtestbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtestbench___024root__trace_register(Vtestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_register\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtestbench___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtestbench___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtestbench___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtestbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtestbench___024root__trace_const_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtestbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_const_0\n"); );
    // Body
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtestbench___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtestbench___024root__trace_const_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_const_0_sub_0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+147,(2U),32);
    bufp->fullIData(oldp+148,(1U),32);
    bufp->fullIData(oldp+149,(4U),32);
    bufp->fullIData(oldp+150,(0x00000020U),32);
    bufp->fullIData(oldp+151,(4U),32);
    bufp->fullCData(oldp+152,(0x0fU),4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtestbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_0\n"); );
    // Body
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtestbench___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlUnpacked<CData/*0:0*/, 512> Vtestbench__ConstPool__TABLE_h3c44eaed_0;
extern const VlUnpacked<SData/*9:0*/, 256> Vtestbench__ConstPool__TABLE_h6944f904_0;
VL_ATTR_COLD void Vtestbench___024root__trace_full_dtype____0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 15>& __VdtypeVar);

VL_ATTR_COLD void Vtestbench___024root__trace_full_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_0_sub_0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.testbench__DOT__dut__DOT__PC),32);
    bufp->fullCData(oldp+1,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA1E),4);
    bufp->fullCData(oldp+2,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA2E),4);
    bufp->fullBit(oldp+3,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUSrcE));
    bufp->fullBit(oldp+4,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__MemtoRegE));
    bufp->fullBit(oldp+5,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__MemtoRegW));
    bufp->fullBit(oldp+6,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSE));
    bufp->fullBit(oldp+7,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSM));
    bufp->fullBit(oldp+8,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSW));
    bufp->fullCData(oldp+9,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControlE),2);
    bufp->fullCData(oldp+10,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteE),2);
    bufp->fullBit(oldp+11,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__BranchE));
    bufp->fullBit(oldp+12,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__MemtoRegM));
    bufp->fullBit(oldp+13,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUSrcE));
    bufp->fullBit(oldp+14,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__BranchE));
    bufp->fullBit(oldp+15,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__MemtoRegE));
    bufp->fullBit(oldp+16,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__MemtoRegM));
    bufp->fullBit(oldp+17,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__MemtoRegW));
    bufp->fullBit(oldp+18,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSM));
    bufp->fullBit(oldp+19,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSW));
    bufp->fullBit(oldp+20,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSE));
    bufp->fullIData(oldp+21,(((IData)(4U) + vlSelfRef.testbench__DOT__dut__DOT__PC)),32);
    bufp->fullIData(oldp+22,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD1E),32);
    bufp->fullIData(oldp+23,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__RD2E),32);
    bufp->fullIData(oldp+24,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ExtImmE),32);
    bufp->fullIData(oldp+25,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultW),32);
    bufp->fullIData(oldp+26,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ReadDataW),32);
    bufp->fullBit(oldp+27,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__hu__DOT__PCWritePendingF) 
                            | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSW) 
                               | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__BranchTakenE)))));
    bufp->fullBit(oldp+28,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSE) 
                            & Vtestbench__ConstPool__TABLE_h3c44eaed_0
                            [((((4U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                       << 1U)) | ((2U 
                                                   & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                        >> 1U)))) 
                               << 6U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge) 
                                          << 5U) | 
                                         ((0x00000010U 
                                           & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                              << 4U)) 
                                          | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))])));
    bufp->fullBit(oldp+29,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__BranchTakenE)) 
                            & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSE) 
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
                                               | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))]))));
    bufp->fullBit(oldp+30,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__BranchTakenE)) 
                            & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSE) 
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
                                               | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))]))));
    bufp->fullIData(oldp+31,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__BranchTakenE)
                               ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE
                               : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSW)
                                   ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW
                                   : ((IData)(4U) + vlSelfRef.testbench__DOT__dut__DOT__PC)))),32);
    bufp->fullIData(oldp+32,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSW)
                               ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW
                               : ((IData)(4U) + vlSelfRef.testbench__DOT__dut__DOT__PC))),32);
    bufp->fullBit(oldp+33,((IData)(((~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControlE) 
                                        >> 1U)) & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum 
                                                   >> 0x00000020U)))));
    bufp->fullBit(oldp+34,((1U & ((~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControlE) 
                                      >> 1U)) & ((~ 
                                                  ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControlE) 
                                                   ^ 
                                                   ((vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b 
                                                     ^ vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a) 
                                                    >> 0x0000001fU))) 
                                                 & ((vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a 
                                                     >> 0x0000001fU) 
                                                    ^ (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum 
                                                               >> 0x0000001fU))))))));
    bufp->fullIData(oldp+35,(((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ALUControlE))
                               ? (~ vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b)
                               : vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b)),32);
    bufp->fullBit(oldp+36,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA1E) 
                            == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3M))));
    bufp->fullBit(oldp+37,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA1E) 
                            == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3W))));
    bufp->fullBit(oldp+38,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA2E) 
                            == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3M))));
    bufp->fullBit(oldp+39,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA2E) 
                            == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3W))));
    bufp->fullIData(oldp+40,(vlSelfRef.testbench__DOT__WriteData),32);
    bufp->fullIData(oldp+41,(vlSelfRef.testbench__DOT__DataAdr),32);
    bufp->fullBit(oldp+42,(vlSelfRef.testbench__DOT__MemWrite));
    bufp->fullIData(oldp+43,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD),32);
    bufp->fullCData(oldp+44,(((8U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE 
                                     >> 0x0000001cU)) 
                              | (((0U == vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE) 
                                  << 2U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__flagreg0__DOT__d)))),4);
    bufp->fullCData(oldp+45,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA1D),4);
    bufp->fullCData(oldp+46,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA2D),4);
    bufp->fullCData(oldp+47,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3E),4);
    bufp->fullCData(oldp+48,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3M),4);
    bufp->fullCData(oldp+49,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3W),4);
    bufp->fullBit(oldp+50,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RegWriteW));
    bufp->fullBit(oldp+51,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RegWriteM));
    bufp->fullBit(oldp+52,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSD));
    bufp->fullBit(oldp+53,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__BranchTakenE));
    bufp->fullBit(oldp+54,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__stallD) 
                            | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__hu__DOT__PCWritePendingF))));
    bufp->fullBit(oldp+55,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__stallD));
    bufp->fullBit(oldp+56,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__flushE));
    bufp->fullCData(oldp+57,((3U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                    [((0x000000fcU 
                                       & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                          >> 0x00000012U)) 
                                      | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                               >> 0x0000001aU)))] 
                                    >> 8U))),2);
    bufp->fullCData(oldp+58,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ImmSrcD),2);
    bufp->fullCData(oldp+59,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__FwdAE),2);
    bufp->fullCData(oldp+60,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__FwdBE),2);
    bufp->fullIData(oldp+61,((vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                              >> 0x0000000cU)),20);
    bufp->fullCData(oldp+62,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__FlagWriteD),2);
    bufp->fullBit(oldp+63,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__dec__DOT__RegW));
    bufp->fullBit(oldp+64,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                  [((0x000000fcU & 
                                     (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                      >> 0x00000012U)) 
                                    | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                             >> 0x0000001aU)))] 
                                  >> 2U))));
    bufp->fullBit(oldp+65,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                  [((0x000000fcU & 
                                     (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                      >> 0x00000012U)) 
                                    | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                             >> 0x0000001aU)))] 
                                  >> 4U))));
    bufp->fullBit(oldp+66,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                  [((0x000000fcU & 
                                     (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                      >> 0x00000012U)) 
                                    | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                             >> 0x0000001aU)))] 
                                  >> 5U))));
    bufp->fullBit(oldp+67,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                  [((0x000000fcU & 
                                     (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                      >> 0x00000012U)) 
                                    | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                             >> 0x0000001aU)))] 
                                  >> 1U))));
    bufp->fullCData(oldp+68,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__ALUControlD),2);
    bufp->fullCData(oldp+69,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE),4);
    bufp->fullBit(oldp+70,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__RegWriteE));
    bufp->fullBit(oldp+71,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__MemWriteE));
    bufp->fullBit(oldp+72,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__RegWriteE) 
                            & Vtestbench__ConstPool__TABLE_h3c44eaed_0
                            [((((4U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                       << 1U)) | ((2U 
                                                   & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                        >> 1U)))) 
                               << 6U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge) 
                                          << 5U) | 
                                         ((0x00000010U 
                                           & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                              << 4U)) 
                                          | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))])));
    bufp->fullBit(oldp+73,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__MemWriteE) 
                            & Vtestbench__ConstPool__TABLE_h3c44eaed_0
                            [((((4U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                       << 1U)) | ((2U 
                                                   & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                        >> 1U)))) 
                               << 6U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge) 
                                          << 5U) | 
                                         ((0x00000010U 
                                           & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                              << 4U)) 
                                          | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))])));
    bufp->fullBit(oldp+74,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                  [((0x000000fcU & 
                                     (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                      >> 0x00000012U)) 
                                    | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                             >> 0x0000001aU)))] 
                                  >> 5U))));
    bufp->fullBit(oldp+75,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                  [((0x000000fcU & 
                                     (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                      >> 0x00000012U)) 
                                    | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                             >> 0x0000001aU)))] 
                                  >> 1U))));
    bufp->fullCData(oldp+76,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__FlagWrite),2);
    bufp->fullCData(oldp+77,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                               << 2U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5))),4);
    bufp->fullBit(oldp+78,(Vtestbench__ConstPool__TABLE_h3c44eaed_0
                           [((((4U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                      << 1U)) | ((2U 
                                                  & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                       >> 1U)))) 
                              << 6U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge) 
                                         << 5U) | (
                                                   (0x00000010U 
                                                    & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                                       << 4U)) 
                                                   | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))]));
    bufp->fullBit(oldp+79,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                  >> 1U))));
    bufp->fullBit(oldp+80,((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5))));
    bufp->fullBit(oldp+81,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                  >> 1U))));
    bufp->fullBit(oldp+82,((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5))));
    bufp->fullBit(oldp+83,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge));
    bufp->fullBit(oldp+84,((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__FlagWrite))));
    bufp->fullCData(oldp+85,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__flagreg0__DOT__d),2);
    bufp->fullCData(oldp+86,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5),2);
    bufp->fullBit(oldp+87,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__FlagWrite) 
                                  >> 1U))));
    bufp->fullCData(oldp+88,(((2U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE 
                                     >> 0x0000001eU)) 
                              | (0U == vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE))),2);
    bufp->fullCData(oldp+89,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5),2);
    bufp->fullCData(oldp+90,((vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                              >> 0x0000001cU)),4);
    bufp->fullCData(oldp+91,((3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                    >> 0x0000001aU))),2);
    bufp->fullCData(oldp+92,((0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                             >> 0x00000014U))),6);
    bufp->fullCData(oldp+93,((0x0000000fU & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                             >> 0x0000000cU))),4);
    bufp->fullSData(oldp+94,(Vtestbench__ConstPool__TABLE_h6944f904_0
                             [((0x000000fcU & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                               >> 0x00000012U)) 
                               | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                        >> 0x0000001aU)))]),10);
    bufp->fullBit(oldp+95,((1U & Vtestbench__ConstPool__TABLE_h6944f904_0
                            [((0x000000fcU & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                              >> 0x00000012U)) 
                              | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                       >> 0x0000001aU)))])));
    bufp->fullBit(oldp+96,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                  [((0x000000fcU & 
                                     (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                      >> 0x00000012U)) 
                                    | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                             >> 0x0000001aU)))] 
                                  >> 4U))));
    bufp->fullBit(oldp+97,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__MemWriteE) 
                            & Vtestbench__ConstPool__TABLE_h3c44eaed_0
                            [((((4U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                       << 1U)) | ((2U 
                                                   & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                        >> 1U)))) 
                               << 6U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge) 
                                          << 5U) | 
                                         ((0x00000010U 
                                           & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                              << 4U)) 
                                          | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))])));
    bufp->fullBit(oldp+98,(vlSelfRef.testbench__DOT__MemWrite));
    bufp->fullBit(oldp+99,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                  [((0x000000fcU & 
                                     (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                      >> 0x00000012U)) 
                                    | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                             >> 0x0000001aU)))] 
                                  >> 2U))));
    bufp->fullBit(oldp+100,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__MemWriteE));
    bufp->fullBit(oldp+101,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__PCSD));
    bufp->fullBit(oldp+102,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__RegWriteE) 
                             & Vtestbench__ConstPool__TABLE_h3c44eaed_0
                             [((((4U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                        << 1U)) | (
                                                   (2U 
                                                    & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg0____pinNumber5) 
                                                         >> 1U)))) 
                                << 6U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT__cc__DOT__ge) 
                                           << 5U) | 
                                          ((0x00000010U 
                                            & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__cl__DOT____Vcellout__flagreg1____pinNumber5) 
                                               << 4U)) 
                                           | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__CondE))))])));
    bufp->fullBit(oldp+103,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RegWriteM));
    bufp->fullBit(oldp+104,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__dec__DOT__RegW));
    bufp->fullBit(oldp+105,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__c__DOT__RegWriteE));
    bufp->fullBit(oldp+106,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RegWriteW));
    bufp->fullIData(oldp+107,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ResultW),32);
    bufp->fullIData(oldp+108,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE),32);
    bufp->fullIData(oldp+109,(((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__ImmSrcD))
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
    bufp->fullIData(oldp+110,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__a),32);
    bufp->fullIData(oldp+111,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__b),32);
    bufp->fullIData(oldp+112,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__WriteDataE),32);
    bufp->fullBit(oldp+113,((vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE 
                             >> 0x0000001fU)));
    bufp->fullBit(oldp+114,((0U == vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__ALUResultE)));
    bufp->fullQData(oldp+115,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__alu__DOT__sum),33);
    bufp->fullBit(oldp+117,((1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__stallD)))));
    bufp->fullIData(oldp+118,((0x00ffffffU & vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD)),24);
    bufp->fullBit(oldp+119,((1U & (~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__stallD) 
                                      | (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__hu__DOT__PCWritePendingF))))));
    bufp->fullCData(oldp+120,((0x0000000fU & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                              >> 0x00000010U))),4);
    bufp->fullBit(oldp+121,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                   [((0x000000fcU & 
                                      (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                       >> 0x00000012U)) 
                                     | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                              >> 0x0000001aU)))] 
                                   >> 8U))));
    bufp->fullCData(oldp+122,((0x0000000fU & vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD)),4);
    bufp->fullBit(oldp+123,((1U & (Vtestbench__ConstPool__TABLE_h6944f904_0
                                   [((0x000000fcU & 
                                      (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                       >> 0x00000012U)) 
                                     | (3U & (vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__InstrD 
                                              >> 0x0000001aU)))] 
                                   >> 9U))));
    bufp->fullBit(oldp+124,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3E) 
                              == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA2D)) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__A3E) 
                                == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA1D)))));
    bufp->fullBit(oldp+125,(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__hu__DOT__PCWritePendingF));
    bufp->fullBit(oldp+126,(vlSelfRef.testbench__DOT__clk));
    bufp->fullBit(oldp+127,(vlSelfRef.testbench__DOT__reset));
    bufp->fullIData(oldp+128,(vlSelfRef.testbench__DOT__dut__DOT__imem__DOT__RAM
                              [(0x0000003fU & (vlSelfRef.testbench__DOT__dut__DOT__PC 
                                               >> 2U))]),32);
    bufp->fullIData(oldp+129,(vlSelfRef.testbench__DOT__dut__DOT__dmem__DOT__RAM
                              [(0x0000003fU & (vlSelfRef.testbench__DOT__DataAdr 
                                               >> 2U))]),32);
    bufp->fullIData(oldp+130,(((0x0fU == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA1D))
                                ? ((IData)(4U) + vlSelfRef.testbench__DOT__dut__DOT__PC)
                                : ((0x0eU >= (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA1D))
                                    ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf
                                   [vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA1D]
                                    : 0U))),32);
    bufp->fullIData(oldp+131,(((0x0fU == (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA2D))
                                ? ((IData)(4U) + vlSelfRef.testbench__DOT__dut__DOT__PC)
                                : ((0x0eU >= (IData)(vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA2D))
                                    ? vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf
                                   [vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__RA2D]
                                    : 0U))),32);
    Vtestbench___024root__trace_full_dtype____0(vlSelf, bufp, 132, vlSelfRef.testbench__DOT__dut__DOT__arm__DOT__dp__DOT__regfile_inst__DOT__rf);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_dtype____0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 15>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_dtype____0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[14]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[13]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+14,(__VdtypeVar[0]),32);
}
