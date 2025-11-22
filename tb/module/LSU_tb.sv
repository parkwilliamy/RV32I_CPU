`timescale 1ns/1ps

class LSUInputs;

    rand logic [31:0] addrb_byte, addrb_hw, addrb_word, DMEM_word, rs2_data;
    rand logic [2:0] LOAD_funct3, STORE_funct3;

    constraint addr_space {
        addrb_byte inside {[32'h00005000:32'h00008000]};
        addrb_hw inside {[32'h00005000:32'h00007FFE]};
        addrb_word inside {[32'h00005000:32'h00007FFC]};
    }

    constraint addr_alignment {
        addrb_hw % 2 == 0;
        addrb_word % 4 == 0;
    }

    constraint funct_space {
        LOAD_funct3 inside {3'b000, 3'b001, 3'b010, 3'b100, 3'b101};
        STORE_funct3 inside {3'b000, 3'b001, 3'b010};
    }


endclass

module LSU_tb;

    bit MemWrite, MemRead;
    bit [31:0] addrb, DMEM_word, rs2_data;
    bit [2:0] funct3;
    logic [3:0] web;
    logic [31:0] dib, DMEM_result;

    LSU DUT (
        .addrb(addrb),
        .MemWrite(MemWrite),
        .MemRead(MemRead),
        .DMEM_word(DMEM_word),
        .rs2_data(rs2_data),
        .funct3(funct3),
        .web(web),
        .dib(dib),
        .DMEM_result(DMEM_result)
    );

    LSUInputs LSUTest = new;

    /* Test Plan

    * ALL INPUTS ARE ALIGNED BASED ON THEIR INSTRUCTION TYPE

    1) Load Tests

    - no load on !MemRead
    - data must be written accordingly based on funct3 (byte, halfword, word)

    2) Store Tests

    - no store on !MemWrite
    - DMEM_result must have 0s where bytes are not written to
    - web must be written accordingly based on funct3 (byte, halfword, word)

    */


    initial begin

        $display("LOAD TESTS");

        $display("==================================================================");

        $display("MemRead LOW");

        MemRead = 0;

        repeat (5) begin

            LSUTest.randomize();
            addrb = LSUTest.addrb_byte;
            DMEM_word = LSUTest.DMEM_word;
            funct3 = LSUTest.STORE_funct3;
            #5;
            $display("DMEM_result: %0h", DMEM_result);

        end

        $display("MemRead High");

        $display("==================================================================");

        $display("Load Byte");

        MemRead = 1;
        funct3 = 3'b000;

        repeat (5) begin

            LSUTest.randomize();
            addrb = LSUTest.addrb_byte;
            DMEM_word = LSUTest.DMEM_word;
            #5;
            assert(DMEM_result == )

        $finish;

    

    end



endmodule