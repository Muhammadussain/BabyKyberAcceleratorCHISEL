// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBabyKyberTop__pch.h"

//============================================================
// Constructors

VBabyKyberTop::VBabyKyberTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VBabyKyberTop__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_req_ready{vlSymsp->TOP.io_req_ready}
    , io_req_valid{vlSymsp->TOP.io_req_valid}
    , io_req_bits_activeByteLane{vlSymsp->TOP.io_req_bits_activeByteLane}
    , io_req_bits_isWrite{vlSymsp->TOP.io_req_bits_isWrite}
    , io_rsp_ready{vlSymsp->TOP.io_rsp_ready}
    , io_rsp_valid{vlSymsp->TOP.io_rsp_valid}
    , io_req_bits_addrRequest{vlSymsp->TOP.io_req_bits_addrRequest}
    , io_req_bits_dataRequest{vlSymsp->TOP.io_req_bits_dataRequest}
    , io_rsp_bits_dataResponse{vlSymsp->TOP.io_rsp_bits_dataResponse}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VBabyKyberTop::VBabyKyberTop(const char* _vcname__)
    : VBabyKyberTop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VBabyKyberTop::~VBabyKyberTop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VBabyKyberTop___024root___eval_debug_assertions(VBabyKyberTop___024root* vlSelf);
#endif  // VL_DEBUG
void VBabyKyberTop___024root___eval_static(VBabyKyberTop___024root* vlSelf);
void VBabyKyberTop___024root___eval_initial(VBabyKyberTop___024root* vlSelf);
void VBabyKyberTop___024root___eval_settle(VBabyKyberTop___024root* vlSelf);
void VBabyKyberTop___024root___eval(VBabyKyberTop___024root* vlSelf);

void VBabyKyberTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBabyKyberTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBabyKyberTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VBabyKyberTop___024root___eval_static(&(vlSymsp->TOP));
        VBabyKyberTop___024root___eval_initial(&(vlSymsp->TOP));
        VBabyKyberTop___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VBabyKyberTop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VBabyKyberTop::eventsPending() { return false; }

uint64_t VBabyKyberTop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VBabyKyberTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VBabyKyberTop___024root___eval_final(VBabyKyberTop___024root* vlSelf);

VL_ATTR_COLD void VBabyKyberTop::final() {
    VBabyKyberTop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VBabyKyberTop::hierName() const { return vlSymsp->name(); }
const char* VBabyKyberTop::modelName() const { return "VBabyKyberTop"; }
unsigned VBabyKyberTop::threads() const { return 1; }
void VBabyKyberTop::prepareClone() const { contextp()->prepareClone(); }
void VBabyKyberTop::atClone() const {
    contextp()->threadPoolpOnClone();
}
