module ALU (
    input [31:0] rs1, rs2, imm
    input [6:0] opcode,
    input [3:0] field, // funct7[5] + funct3
    output [31:0] rd
);

    localparam [6:0] // opcodes for different instruction types
        OP      = 7'b0110011;
        OP_I  = 7'b0010011,
        OP_S = 7'b0100011,
        OP_B = 7'b1100011,
        OP_U = 7'0110111,
        OP_J = 7'1101111;

    localparam [3:0] // different fields for ALU operations
        ADD = 4'b0000,
        SUB = 4'b1000,
        AND = 4'b0111,
        OR  = 4'b0110,
        XOR = 4'b0100,
        SLL = 4'b0001,
        SRL = 4'b0101,
        SRA = 4'b1101,
        SLT = 4'b0010,
        SLTU= 4'b0011;

    always @(*) begin

        op2 = (opcode == OP) ? rs2 : imm;

        case (field) 

            ADD: rd = rs1+op2;
            SUB: rd = rs1-op2;
            AND: rd = rs1&op2;
            OR: rd = rs1|op2;
            XOR: rd = rs1^op2;
            SLL: rd = rs1<<op2;
            SRL: rd = rs1>>op2;
            SRA: rd = {{op2{rs1[31]}}, (rs1>>op2)[31-op2:0]};
            SLT: rd = $signed(rs1)<$signed(op2);
            SLTU: rd = rs1<op2;
            // default: handle exception logic later

        endcase
        
    end


endmodule