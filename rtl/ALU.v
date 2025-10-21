`timescale 1ns/1ps

module ALU (
    input [31:0] op1, op2,
    input [3:0] field, // funct7[5]/0 + funct3 (only funct7[5] for certain instructions)
    output reg [31:0] result,
    output zero, sign, overflow, carry
);

    reg intcarry;

    assign zero = (result == 0);
    assign sign = ($signed(result) < 0);
    assign overflow = (op1[31] != op2[31]) && (result[31] != op1[31]); // only detects overflow for subtraction used in branch decisions
    assign carry = intcarry;

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
        SLTU = 4'b0011;

    always @(*) begin

        intcarry = 0;

        case (field) 

            ADD: {intcarry, result} = op1+op2;
            SUB: {intcarry, result} = op1-op2;
            AND: result = op1&op2;
            OR: result = op1|op2;
            XOR: result = op1^op2;
            SLL: result = op1<<op2[4:0];
            SRL: result = op1>>op2[4:0];
            SRA: result = $signed(op1)>>>op2[4:0];
            SLT: result = {31'b0, $signed(op1)<$signed(op2)};
            SLTU: result = {31'b0, op1<op2};

        endcase
        
    end


endmodule