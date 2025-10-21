`timescale 1ns/1ps

module top (
    input reset, clk,
    output [15:0] leds
);

    // MEMORY

    reg [7:0] pc;
    reg [31:0] imem [0:255]; // 1KB instruction memory (make sure its word aligned)
    reg [31:0] dmem [0:255]; // 1KB data memory (also needs to be word aligned)

    // INSTRUCTION FIELDS

    reg [31:0] instruction;
    wire [6:0] opcode;
    wire [11:7] rd;
    wire [14:12] funct3;
    wire [19:15] rs1;
    wire [24:20] rs2;
    wire [31:25] funct7;
    assign opcode = instruction[6:0];
    assign rd = instruction[11:7];
    assign funct3 = instruction[14:12];
    assign rs1 = instruction[19:15];
    assign rs2 = instruction[24:20];
    assign funct7 = instruction[31:25];

    // CONTROL FIELDS/FLAGS

    wire [1:0] ALUOp;
    wire [1:0] RegSrc;
    wire ALUSrc, RegWrite, MemRead, MemWrite, Branch;
    wire [3:0] field;
    wire zero, sign, overflow, carry;

    // MODULES 

    ControlUnit INST1 (.opcode(instruction[6:0]), .ALUOp(ALUOp), .RegSrc(RegSrc), .ALUSrc(ALUSrc), .RegWrite(RegWrite), .MemRead(MemRead), .MemWrite(MemWrite), .Branch(Branch));

    reg [31:0] rd_write_data;
    wire [31:0] rs1_data;
    wire [31:0] rs2_data;
    RegFile INST2 (.clk(clk), .RegWrite(RegWrite), .rs1(rs1), .rs2(rs2), .rd(rd), .rd_write_data(rd_write_data), .rs1_data(rs1_data), .rs2_data(rs2_data));

    wire [31:0] eximm;
    ImmGen INST3 (.instruction(instruction), .eximm(eximm));

    ALUControl INST4 (.funct7(funct7), .funct3(funct3), .ALUOp(ALUOp), .field(field));

    wire [31:0] op1;
    wire [31:0] op2;
    assign op2 = ALUSrc ? eximm: rs2;
    wire [31:0] result;

    ALU INST5 (.op1(op1), .op2(op2), .field(field), .result(result), .zero(zero), .sign(sign), .overflow(overflow), .carry(carry));

    // LEDS

    assign leds[7:0] = pc;

    // MISC

    integer i;
    
    always @ (*) begin

        case (RegSrc) 

            0: rd_write_data = result;
            1: rd_write_data = dmem[result];
            2: rd_write_data = pc+eximm; 
            3: rd_write_data = pc+4;

        endcase


    end

    always @ (posedge clk ) begin

        if (reset) begin

            pc <= 0;

        end

        else begin

            pc <= (Branch && zero) ? pc+eximm: pc+4;
            instruction <= imem[pc];

        end

    end


endmodule
