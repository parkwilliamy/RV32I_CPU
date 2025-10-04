`timescale 1ns/1ps

class RegFileInputs;

    rand logic [4:0] rs1, rs2, rd;
    rand logic [31:0] rd_data;
    rand logic [31:0] reg_file [31:0];

    constraint addr_space = {
        rs1 inside {[0:31]};
        rs2 inside {[0:31]};
        rd inside {[0:31]};
    }

    constraint reg_file_data = {
        reg_file[0] = 0; //x0 hardwired to 0
    }

endclass

module RegFile_tb

    bit clk, reg_write;
    logic [4:0] rs1, rs2, rd;
    logic [31:0] rd_data;
    logic [31:0] reg_file [31:0];
    logic [31:0] rs1_data, rs2_data;

    RegFile DUT(.clk(clk), .rs1(rs1), .rs2(rs2), .rd(rd), .rd_data(rd_data), .reg_file(reg_file), .rs1_data(rs1_data), .rs2_data(rs2_data));
    RegFileInputs RegFileTest = new;

    always #10 clk = ~clk;

    initial begin

        $display("Testbench started!");

        reg_write = 0;

        repeat (5) begin //CRV Read Tests

            RegFileTest.randomize();
            rs1 = RegFileTest.rs1;
            rs2 = RegFileTest.rs2;
            reg_file = RegFileTest.reg_file;
            #2;
            $display("RegFile:");
            for (int i = 0; i < 32; i++) begin
                $display("%0h", reg_file[i]);
            end;
            $display("rs1: %0d, rs2: %0d", rs1, rs2);

        end


        $finish;

    end

endmodule