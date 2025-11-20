#include "VBRAM_tb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

void tick(Vtop_tb* tb, VerilatedVcdC* tfp) {
    tb->clk = 1;
    tb->eval();
    if (tfp) tfp->dump(main_time);
    main_time += 5;

    tb->clk = 0;
    tb->eval();
    if (tfp) tfp->dump(main_time);
    main_time += 5;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vtop_tb* tb = new Vtop_tb;
    VerilatedVcdC* tfp = new VerilatedVcdC;

    tb->trace(tfp, 99);
    tfp->open("dump.vcd");

    tb->rst_n = 0;
    for (int i = 0; i < 2; ++i) tick(tb, tfp);
    tb->rst_n = 1;

    while (!Verilated::gotFinish()) {
        tick(tb, tfp);
    }

    // ⚡ Important: process one more eval after $finish
    tb->eval();
    if (tfp) tfp->dump(main_time);

    tb->final();
    tfp->close();

    delete tfp;
    delete tb;
    return 0;
}
