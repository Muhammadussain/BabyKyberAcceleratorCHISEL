// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBabyKyberTop.h for the primary calling header

#include "VBabyKyberTop__pch.h"
#include "VBabyKyberTop__Syms.h"
#include "VBabyKyberTop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VBabyKyberTop___024root___dump_triggers__ico(VBabyKyberTop___024root* vlSelf);
#endif  // VL_DEBUG

void VBabyKyberTop___024root___eval_triggers__ico(VBabyKyberTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VBabyKyberTop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBabyKyberTop___024root___dump_triggers__act(VBabyKyberTop___024root* vlSelf);
#endif  // VL_DEBUG

void VBabyKyberTop___024root___eval_triggers__act(VBabyKyberTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))) 
                                     | ((~ (IData)(vlSelf->reset)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0))));
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VBabyKyberTop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
