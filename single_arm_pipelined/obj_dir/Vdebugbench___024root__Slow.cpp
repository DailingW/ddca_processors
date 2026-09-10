// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdebugbench.h for the primary calling header

#include "Vdebugbench__pch.h"

void Vdebugbench___024root___ctor_var_reset(Vdebugbench___024root* vlSelf);

Vdebugbench___024root::Vdebugbench___024root(Vdebugbench__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vdebugbench___024root___ctor_var_reset(this);
}

void Vdebugbench___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdebugbench___024root::~Vdebugbench___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
