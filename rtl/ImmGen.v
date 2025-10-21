`timescale 1ns/1ps

module ImmGen (
    input [31:0] instruction,
    //output reg [11:0] imm1,
    //output reg [19:0] imm2,
    output reg [31:0] eximm
);

    reg [6:0] opcode;
    reg [2:0] funct3;
    reg [11:0] intimm1; // 12-bit immediate
    reg [19:0] intimm2; // 20-bit immediate
    reg [31:0] eximm1;
    reg [31:0] eximm2;
    reg [31:0] eximm3;
    reg [31:0] eximm4;

    localparam [6:0] // opcodes for different instruction types
        OP_R = 7'b0110011,
        OP_I = 7'b0010011,
        OP_S = 7'b0100011,
        OP_B = 7'b1100011,
        OP_U = 7'b0110111,
        OP_J = 7'b1101111;

    always @(*) begin

        opcode = instruction[6:0];
        funct3 = instruction[14:12]; // used for I-type instructions

        case(opcode)

            OP_I: begin
                intimm1 = (funct3 == 3'b001 || funct3 == 3'b101) ? {7'b0000000, instruction[24:20]} : instruction[31:20];
                intimm2 = 0;
            end
            OP_S: begin
                intimm1 = {instruction[31:25], instruction[11:7]};
                intimm2 = 0;
            end
            OP_B: begin
                intimm1 = {instruction[31], instruction[7], instruction[30:25], instruction[11:8]};
                intimm2 = 0;
            end
            OP_U: begin
                intimm1 = 0;
                intimm2 = instruction[31:12];
            end
            OP_J: begin
                intimm1 = 0;
                intimm2 = {instruction[31], instruction[19:12], instruction[20], instruction[30:21]};
            end
            default: begin 
                intimm1 = 0; // only for R-type format
                intimm2 = 0;
            end

        endcase

        //imm1 = intimm1;
        //imm2 = intimm2;
        eximm1 = {{20{intimm1[11]}}, intimm1};
        eximm2 = {{11{intimm2[19]}}, intimm2, 1'b0};
        eximm3 = {intimm2, 12'b0};
        eximm4 = {{19{intimm1[11]}}, intimm1, 1'b0};

        case (opcode)

            OP_J: eximm = eximm2;
            OP_U: eximm = eximm3;
            OP_B: eximm = eximm4;
            default: eximm = eximm1;

        endcase
    

    end

    

endmodule