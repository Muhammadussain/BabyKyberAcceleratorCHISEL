#include <iostream>
#include <verilated.h>
#include "VTop.h"


int main(int argc, char **argv, char **env) {
    
    Verilated::commandArgs(argc, argv);

    VTop* top = new VTop;

    top->clk = 0;
    top->rst_n = 0;
    top->enable = 0;
    top->data_Req = 0;
    top->addr_Req = 0;
    top->wen_Req = 0;
    top->bytelane_Req = 0;

    for (int i = 0; i < 2; i++) {
        top->clk = !top->clk;
        top->eval();
    }
    top->rst_n = 1;

    top->enable = 1;
    top->data_Req = 42;
    top->addr_Req = 0x4007000;
    top->wen_Req = 1;
    top->bytelane_Req = 0xFF;

    for (int i = 0; i < 10; i++) {
        top->clk = !top->clk;
        top->eval();

        std::cout << "At time " << i << ": data_Resp = " << top->data_Resp << std::endl;
    }

    top->final();

    delete top;
    return 0;
}
