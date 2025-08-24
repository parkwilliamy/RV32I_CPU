module ImmGen (
    input [31:0] instruction,
    output [31:0] eximm;
);

    assign wire [11:0] imm = instruction[31:20]; //for I-type instructions, will implement ImmGen for other types later
    assign eximm = {{20{imm[11]}}, imm};


endmodule