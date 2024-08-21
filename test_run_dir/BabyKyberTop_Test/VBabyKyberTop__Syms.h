// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBABYKYBERTOP__SYMS_H_
#define VERILATED_VBABYKYBERTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VBabyKyberTop.h"

// INCLUDE MODULE CLASSES
#include "VBabyKyberTop___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VBabyKyberTop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VBabyKyberTop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VBabyKyberTop___024root        TOP;

    // CONSTRUCTORS
    VBabyKyberTop__Syms(VerilatedContext* contextp, const char* namep, VBabyKyberTop* modelp);
    ~VBabyKyberTop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
