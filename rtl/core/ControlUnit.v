`timescale 1ps/1ns

module ControlUnit (
    input [6:0] opcode,
    output reg [3:0] ALUOp,
    output reg Branch, MemRead, MemToReg, MemWrite, ALUSrc, RegWrite
);

    localparam [6:0] // opcodes for different instruction types
        OP_R = 7'b0110011,
        OP_I = 7'b0010011,
        OP_S = 7'b0100011,
        OP_B = 7'b1100011,
        OP_U = 7'b0110111,
        OP_J = 7'b1101111;

    always @(*) begin



    end


endmodule