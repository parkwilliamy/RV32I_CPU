`timescale 1ps/1ns

module ControlUnit (
    input [6:0] opcode,
    output reg [1:0] ALUOp, RegSrc,
    // for ALUOp, 0 is decode funct3 and funct7 in ALUControl, 1 is ADD, 2 is SUB
    // for RegSrc, 0 is ALU result, 1 is data memory, and 2 is PC-imm adder, 3 is next instruction address (PC+4)
    output reg ALUSrc, RegWrite, MemRead, MemWrite, Branch
    // ALUSrc - 0 means operands are rs1 and rs2, 1 means operands are rs1 and sign extended immediate
);

    localparam [6:0] // opcodes for different instruction types
        OP_R = 7'b0110011,
        OP_I = 7'b0010011,
        OP_I_LD = 7'b0000011,
        OP_I_FENCE = 7'b0001111,
        OP_I_JALR = 7'b1100111,
        OP_S = 7'b0100011,
        OP_B = 7'b1100011,
        OP_U_LUI = 7'b0110111,
        OP_U_AUIPC = 7'b0010111,
        OP_J = 7'b1101111;

    always @(*) begin

        case (opcode)

            OP_R: begin
                ALUOp = 0; 
                RegSrc = 0;
                ALUSrc = 0;
                RegWrite = 1;
                MemRead = 0;
                MemWrite = 0;
                Branch = 0;
            end
            OP_I: begin
                ALUOp = 0;
                RegSrc = 0;
                ALUSrc = 1;
                RegWrite = 1;
                MemRead = 0;
                MemWrite = 0;
                Branch = 0;
            end
            OP_I_LD: begin
                ALUOp = 0;
                RegSrc = 0;
                ALUSrc = 1;
                RegWrite = 1;
                MemRead = 1;
                MemWrite = 0;
                Branch = 0;
            end
            OP_I_JALR: begin // REMEMBER TO SET LSB TO 0 LATER ON
                ALUOp = 0;
                RegSrc = 0;
                ALUSrc = 1;
                RegWrite = 1;
                MemRead = 0;
                MemWrite = 0;
                Branch = 0;
            end
            OP_I_FENCE: begin 
                ALUOp = 0;
                RegSrc = 0;
                ALUSrc = 0;
                RegWrite = 0;
                MemRead = 0;
                MemWrite = 0;
                Branch = 0;
            end
            OP_S: begin
                ALUOp = 1; 
                RegSrc = 0; // doesn't matter since no write back
                ALUSrc = 1;
                RegWrite = 0;
                MemRead = 0;
                MemWrite = 1;
                Branch = 0;
            end
            OP_U_LUI: begin
                ALUOp = 1;
                RegSrc = 0;
                ALUSrc = 1;
                RegWrite = 1;
                MemRead = 0;
                MemWrite = 0;
                Branch = 0;
            end
            OP_U_AUIPC: begin
                ALUOp = 0;
                RegSrc = 2;
                ALUSrc = 0;
                RegWrite = 1;
                MemRead = 0;
                MemWrite = 0;
                Branch = 0;
            end
            OP_J: begin
                ALUOp = 0;
                RegSrc = 3;
                ALUSrc = 0;
                //ALU result won't be used, control signals are being set to avoid undefined behaviour
                RegWrite = 1;
                MemRead = 0;
                MemWrite = 0;
                Branch = 0;
            end
            OP_B: begin
                ALUOp = 2;
                RegSrc = 0; // doesn't matter since no write back
                ALUSrc = 0;
                RegWrite = 0;
                MemRead = 0;
                MemWrite = 0;
                Branch = 1;
            end 
            
        endcase


    end


endmodule