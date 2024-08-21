#include <iostream>
#include <verilated.h>
#include "VTop.h"


int main(int argc, char **argv, char **env) {
    // Initialize Verilated variables
    Verilated::commandArgs(argc, argv);

    // Instantiate the Top module
    VTop* top = new VTop;

    // Initialize simulation inputs
    top->clk = 0;
    top->rst_n = 0;
    top->enable = 0;
    top->data_Req = 0;
    top->addr_Req = 0;
    top->wen_Req = 0;
    top->bytelane_Req = 0;

    // Reset the design
    for (int i = 0; i < 2; i++) {
        top->clk = !top->clk;
        top->eval();
    }
    top->rst_n = 1;

    // Apply a single test vector
    top->enable = 1;
    top->data_Req = 42;
    top->addr_Req = 0x4007000;
    top->wen_Req = 1;
    top->bytelane_Req = 0xFF;

    // Simulate a few cycles to observe output
    for (int i = 0; i < 10; i++) {
        top->clk = !top->clk;
        top->eval();

        // Print output value at each cycle
        std::cout << "At time " << i << ": data_Resp = " << top->data_Resp << std::endl;
    }

    // Final model cleanup
    top->final();

    // Cleanup
    delete top;
    return 0;
}
