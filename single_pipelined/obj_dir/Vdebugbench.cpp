// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdebugbench__pch.h"

//============================================================
// Constructors

Vdebugbench::Vdebugbench(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdebugbench__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdebugbench::Vdebugbench(const char* _vcname__)
    : Vdebugbench(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdebugbench::~Vdebugbench() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdebugbench___024root___eval_debug_assertions(Vdebugbench___024root* vlSelf);
#endif  // VL_DEBUG
void Vdebugbench___024root___eval_static(Vdebugbench___024root* vlSelf);
void Vdebugbench___024root___eval_initial(Vdebugbench___024root* vlSelf);
void Vdebugbench___024root___eval_settle(Vdebugbench___024root* vlSelf);
void Vdebugbench___024root___eval(Vdebugbench___024root* vlSelf);

void Vdebugbench::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdebugbench::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdebugbench___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdebugbench___024root___eval_static(&(vlSymsp->TOP));
        Vdebugbench___024root___eval_initial(&(vlSymsp->TOP));
        Vdebugbench___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdebugbench___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdebugbench::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vdebugbench::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vdebugbench::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdebugbench___024root___eval_final(Vdebugbench___024root* vlSelf);

VL_ATTR_COLD void Vdebugbench::final() {
    contextp()->executingFinal(true);
    Vdebugbench___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdebugbench::hierName() const { return vlSymsp->name(); }
const char* Vdebugbench::modelName() const { return "Vdebugbench"; }
unsigned Vdebugbench::threads() const { return 1; }
void Vdebugbench::prepareClone() const { contextp()->prepareClone(); }
void Vdebugbench::atClone() const {
    contextp()->threadPoolpOnClone();
}
