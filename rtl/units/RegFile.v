module RegFile (
    input [4:0] rs1, rs2, rd,
    input [31:0] rd_data,
    output [31:0] rs1_data, rs2_data
);

    reg [31:0] reg_file [31:0];
    assign reg_file[0] = 0; // x0 hardwired to 0
    assign rs1_data = reg_file[rs1];
    assign rs2_data = reg_file[rs2];
    assign reg_file[rd] = rd_data;


endmodule