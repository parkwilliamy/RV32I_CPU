`timescale 1ns/1ps

module top_tb;

    bit reset, clk;
    top DUT (.reset(reset), .clk(clk));

    wire [7:0] pc;
    assign pc = DUT.pc;
    wire [31:0] instruction;
    assign instruction = DUT.instruction;
    wire [31:0] imem [0:255];
    assign imem = DUT.imem;
    
    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;  // 100 MHz
    end

    // Program loading
    initial begin

        $display("Loading program...");
        $readmemb("C:/Users/parkw/RV32I_CPU/tb/prog/bin/ADD.bin", DUT.imem); 
        $display("Program loaded.");

        reset = 1;
        #15;
        reset = 0;

        #20;
        $display("Simulation finished");
        $finish;

    end


    
  

endmodule

