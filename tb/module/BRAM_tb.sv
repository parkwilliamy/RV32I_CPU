`timescale 1ns/1ps

class BRAMInputs;

    rand logic [31:0] addra, addrb, dia, dib;

    constraint addr_space {
        addra inside {[0:32'h00008000]};
        addrb inside {[0:32'h00008000]};
    }

endclass

module BRAM_tb;

    bit clk;
    bit [3:0] wea, web;
    logic [31:0] addra, addrb, dia, dib, doa, dob;

    BRAM DUT ( 
        .clk(clk),
        .wea(wea),
        .web(web),
        .addra(addra),
        .addrb(addrb),
        .dia(dia),
        .dib(dib),
        .doa(doa),
        .dob(dob)
    );

    BRAMInputs BRAMTest = new;

    //always #10 clk = ~clk;

    initial begin

        clk = 0;

        $display("READ on port A")

        wea = 0;
        web = 0;

        repeat (5) begin

            BRAMTest.randomize();
            addra = BRAMTest.addra;
            #5;
            $display("Address A: %0h, Data A: %0h", addra, doa);

        end

    

    end



endmodule