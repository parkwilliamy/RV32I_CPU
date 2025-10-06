`timescale 1ns/1ps

class RegFileInputs;

    rand logic [4:0] rs1, rs2, rd;
    rand logic [31:0] rd_data;

    constraint addr_space {
        rs1 inside {[0:31]};
        rs2 inside {[0:31]};
        rd inside {[0:31]};
    }

endclass

module RegFile_tb;

    bit clk, reg_write;
    logic [4:0] rs1, rs2, rd;
    logic [31:0] rd_data;
    logic [31:0] rs1_data, rs2_data;

    RegFile DUT(.clk(clk), .reg_write(reg_write), .rs1(rs1), .rs2(rs2), .rd(rd), .rd_data(rd_data), .rs1_data(rs1_data), .rs2_data(rs2_data));
    RegFileInputs RegFileTest = new;

    always #10 clk = ~clk;

    initial begin

        $display("Testbench started!");

        reg_write = 0;

        repeat (5) begin //CRV Read Tests

            RegFileTest.randomize();
            rs1 = RegFileTest.rs1;
            rs2 = RegFileTest.rs2;
            #2;
            $display("rs1: %0d, rs2: %0d, rs1_data: %0d, rs2_data: %0d", rs1, rs2, rs1_data, rs2_data);

        end


        $finish;

    end

endmodule