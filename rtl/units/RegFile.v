module RegFile (
    input [31:0] instruction, data,
    output [31:0] rs1, rs2
);

    assign rs1 = instruction[19:15];

    always @(*) begin

        

    end


endmodule