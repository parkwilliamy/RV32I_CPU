#include "Vtop_tb.h"
#include "verilated.h"

// Simulation time (used by $time and %t)
vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

// Clock tick helper
void tick(Vtop_tb* tb) {
    // Rising edge
    tb->clk = 1;
    tb->eval();
    main_time += 5;

    // Falling edge
    tb->clk = 0;
    tb->eval();
    main_time += 5;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    // Create the testbench instance
    Vtop_tb* tb = new Vtop_tb;

    // Reset sequence
    tb->rst_n = 0;
    for (int i = 0; i < 2; ++i) tick(tb); // 2 cycles (~20ns)
    tb->rst_n = 1;

    // Main simulation loop
    while (!Verilated::gotFinish()) {
        tick(tb);
    }

    delete tb;
    return 0;
}
