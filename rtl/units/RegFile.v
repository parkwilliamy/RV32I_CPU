`timescale 1ns/1ps

module RegFile (
    input clk, reg_write,
    input [4:0] rs1, rs2, rd,
    input [31:0] rd_write_data,
    output [31:0] rs1_data, rs2_data, rd_data // rd_data purely for testing, to see value before and after clock edge
);

    reg [31:0] reg_file [31:0];
    integer i;
    
    assign rs1_data = reg_file[rs1];
    assign rs2_data = reg_file[rs2];
    assign rd_data = reg_file[rd];

    initial begin

        reg_file[0] <= 0; // x0 hardwired to 0

        for (i = 1; i < 32; i = i+1) begin
        
            reg_file[i] = i;

        end

    end

    always @(posedge clk) begin

        if ((rd > 0 && rd <= 31) && reg_write) reg_file[rd] <= rd_write_data; // ensure address written to is from 1-31 and reg_write is HIGH
        
    end
    


endmodule