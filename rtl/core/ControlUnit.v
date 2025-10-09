`timescale 1ns/1ps

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

        ALUOp = 0;
        RegSrc = 0;
        ALUSrc = 0;
        RegWrite = 1;
        MemRead = 0;
        MemWrite = 0;
        Branch = 0;

        case (opcode)

            // since default vals satisfy OP_R, there is no case for R-type instructions

            OP_I: ALUSrc = 1;

            OP_I_LD: begin
                
                ALUSrc = 1;
                MemRead = 1;
                
            end

            OP_I_JALR: begin

                RegSrc = 3;
                ALUSrc = 1; // REMEMBER TO SET LSB TO 0 LATER ON

            end
        
            OP_I_FENCE: RegWrite = 0;

            OP_S: begin

                ALUOp = 1; 
                ALUSrc = 1;
                RegWrite = 0;
                MemWrite = 1;
                
            end

            OP_U_LUI: begin
                ALUOp = 1;
                ALUSrc = 1;
            end

            OP_U_AUIPC: RegSrc = 2;

            OP_J: RegSrc = 3;

            OP_B: begin

                ALUOp = 2;
                RegWrite = 0;
                Branch = 1;

            end 
            
        endcase

    end

endmodule