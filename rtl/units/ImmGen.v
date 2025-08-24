module ImmGen (
    input [31:0] instruction,
    output [31:0] eximm;
);

    assign wire [6:0] opcode = instruction[6:0];
    wire [11:0] imm;
    
    localparam [6:0] // opcodes for different instruction types
        OP      = 7'b0110011;
        OP_I  = 7'b0010011,
        OP_S = 7'b0100011,
        OP_B = 7'b1100011,
        OP_U = 7'0110111,
        OP_J = 7'1101111;

    always @(*) begin

        case(opcode)

            OP_I: imm = instruction[31:20];
            OP_S: imm = {instruction[31:25], instruction[11:7]};
            OP_B: imm = {instruction[31], instruction[7], instruction[30:25], instruction[11:8]};
            OP_U: imm = instruction[31:12];
            OP_J: imm = {instruction[31], instruction[19:12], instruction[20], instruction[30:21]};
            default: imm = 0; // only for R-type format

        endcase

    end

    assign exnum = (opcode == OP_U || opcode == OP_J) ? 12 : 20; // sign extend by 12 bits for U and J-type formats, extend by 20 bits for other formats
    assign eximm = {{exnum{imm[exnum-1]}}, imm}; 


endmodule