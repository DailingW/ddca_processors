// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDEBUGBENCH__SYMS_H_
#define VERILATED_VDEBUGBENCH__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdebugbench.h"

// INCLUDE MODULE CLASSES
#include "Vdebugbench___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vdebugbench__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdebugbench* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdebugbench___024root          TOP;

    // CONSTRUCTORS
    Vdebugbench__Syms(VerilatedContext* contextp, const char* namep, Vdebugbench* modelp);
    ~Vdebugbench__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
