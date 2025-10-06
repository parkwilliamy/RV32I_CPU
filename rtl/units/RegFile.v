`timescale 1ns/1ps

module RegFile (
    input clk, reg_write,
    input [4:0] rs1, rs2, rd,
    input [31:0] rd_data,
    output [31:0] rs1_data, rs2_data
);

    reg [31:0] reg_file [31:0];
    integer i;
    
    assign rs1_data = reg_file[rs1];
    assign rs2_data = reg_file[rs2];

    always @(*) begin

        for (i = 0; i < 32; i = i+1) begin
        
            reg_file[i] = i;

        end

    end

    always @(posedge clk) begin

        reg_file[0] <= 0; // x0 hardwired to 0
        if ((rd > 0 && rd <= 31) && reg_write) reg_file[rd] <= rd_data; // ensure address written to is from 1-31 and reg_write is HIGH
        
    end
    


endmodule