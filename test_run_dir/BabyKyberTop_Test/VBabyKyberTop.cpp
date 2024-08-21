// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBabyKyberTop.h"
#include "VBabyKyberTop__Syms.h"
#include "verilated_vcd_c.h"

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
// Evaluation loop

void VBabyKyberTop___024root___eval_initial(VBabyKyberTop___024root* vlSelf);
void VBabyKyberTop___024root___eval_settle(VBabyKyberTop___024root* vlSelf);
void VBabyKyberTop___024root___eval(VBabyKyberTop___024root* vlSelf);
QData VBabyKyberTop___024root___change_request(VBabyKyberTop___024root* vlSelf);
#ifdef VL_DEBUG
void VBabyKyberTop___024root___eval_debug_assertions(VBabyKyberTop___024root* vlSelf);
#endif  // VL_DEBUG
void VBabyKyberTop___024root___final(VBabyKyberTop___024root* vlSelf);

static void _eval_initial_loop(VBabyKyberTop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VBabyKyberTop___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VBabyKyberTop___024root___eval_settle(&(vlSymsp->TOP));
        VBabyKyberTop___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VBabyKyberTop___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("BabyKyberTop.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VBabyKyberTop___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VBabyKyberTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBabyKyberTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBabyKyberTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VBabyKyberTop___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VBabyKyberTop___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("BabyKyberTop.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VBabyKyberTop___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VBabyKyberTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VBabyKyberTop::final() {
    VBabyKyberTop___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VBabyKyberTop::hierName() const { return vlSymsp->name(); }
const char* VBabyKyberTop::modelName() const { return "VBabyKyberTop"; }
unsigned VBabyKyberTop::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VBabyKyberTop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VBabyKyberTop___024root__trace_init_top(VBabyKyberTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBabyKyberTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBabyKyberTop___024root*>(voidSelf);
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VBabyKyberTop___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VBabyKyberTop___024root__trace_register(VBabyKyberTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBabyKyberTop::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VBabyKyberTop::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBabyKyberTop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
