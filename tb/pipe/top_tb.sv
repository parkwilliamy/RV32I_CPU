`timescale 1ns/1ps

module top_tb;

    bit reset, clk;
    logic [15:0] leds;
    top DUT (.reset(reset), .clk(clk), .leds(leds));
    
    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;  // 100 MHz
    end

    // Program loading
    initial begin

        reset = 1;
        #15;
        reset = 0;

        $display("Loading program...");
        $readmemb("C:/Users/parkw/RV32I_CPU/tb/prog/bin/ADD.bin", DUT.imem); 
        $display("Program loaded.");
        
    end

    // Simulation stop condition
    initial begin
        #2000;
        $display("Simulation finished");
        $finish;
  end


    
  

endmodule

