/* Created By Hamna Mohiuddin @hamnamohi as a Google Summer of Code 2024 Project.*/

#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VTop.h"

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);

    VTop* top = new VTop;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");

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
        tfp->dump(i);
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
        tfp->dump(i+2); 

        std::cout << "At time " << i << ": data_Resp = " << top->data_Resp << std::endl;
    }

    top->final();

    tfp->close();
    delete tfp;
    delete top;

    return 0;
}
