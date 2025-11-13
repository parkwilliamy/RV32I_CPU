`timescale 1ns/1ps

module top (
    input rst_n, clk
);

    // ===================================== MEMORY ===================================== 

    reg [31:0] pc = 0;
    reg [31:0] next_pc = 0;

    // Simulation Memory (2 MB)
    localparam IMEM_START = 32'h00000000,
               IMEM_END   = 32'h00200000,
               DMEM_START = 32'h00200000,
               DMEM_END   = 32'h00250000;

    /* Synthesis Memory (32 KB)
    localparam IMEM_START = 32'h00000000,
               IMEM_END   = 32'h00005000,
               DMEM_START = 32'h00005000,
               DMEM_END   = 32'h00008000;
    */

    reg [7:0] mem [IMEM_START:DMEM_END-1]; 

               
    // =============================== INSTRUCTION FIELDS ===============================

    reg [31:0] instruction = 0;
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


    // ============================== CONTROL FIELDS/FLAGS ==============================

    wire [1:0] ALUOp;
    wire [1:0] RegSrc;
    wire ALUSrc, RegWrite, MemRead, MemWrite, Branch, Jump;
    wire [3:0] field;
    wire zero, sign, overflow, carry;
    wire branch_taken;


    // ================================== DATA FIELDS ===================================

    reg [31:0] rd_write_data;
    wire [31:0] rs1_data;
    wire [31:0] rs2_data;
    wire [31:0] eximm;
    wire [31:0] op1;
    wire [31:0] op2;
    assign op1 = (opcode == 7'b0110111) ? 0: rs1_data;
    assign op2 = ALUSrc ? eximm: rs2_data;
    wire [31:0] ALU_result;


    // ===================================== MODULES ====================================

    ControlUnit INST1 (
        .opcode(opcode), 
        .ALUOp(ALUOp), 
        .RegSrc(RegSrc), 
        .ALUSrc(ALUSrc), 
        .RegWrite(RegWrite), 
        .MemRead(MemRead), 
        .MemWrite(MemWrite), 
        .Branch(Branch),
        .Jump(Jump)
    );

    RegFile INST2 (
        .clk(clk), 
        .RegWrite(RegWrite), 
        .rs1(rs1), 
        .rs2(rs2), 
        .rd(rd), 
        .rd_write_data(rd_write_data), 
        .rs1_data(rs1_data), 
        .rs2_data(rs2_data)
    );

    ImmGen INST3 (
        .instruction(instruction), 
        .eximm(eximm)
    );

    ALUControl INST4 (
        .funct7(funct7), 
        .funct3(funct3), 
        .ALUOp(ALUOp), 
        .regbit(opcode[5]), 
        .field(field)
    );

    ALU INST5 (
        .op1(op1), 
        .op2(op2), 
        .field(field), 
        .ALU_result(ALU_result), 
        .zero(zero), 
        .sign(sign), 
        .overflow(overflow), 
        .carry(carry)
    );

    BPU INST6 (
        .Branch(Branch),
        .zero(zero),
        .sign(sign),
        .overflow(overflow),
        .carry(carry),
        .funct3(funct3),
        .branch_taken(branch_taken)
    );
    
    always @ (*) begin

        instruction = {mem[pc+3], mem[pc+2], mem[pc+1], mem[pc]};

        // Register File Writeback Logic

        case (RegSrc) 

            0: rd_write_data = ALU_result;
            1: begin 

                // Load Instruction Logic

                if (MemRead) begin

                    case (funct3) 
                    
                        3'b000: rd_write_data = {{24{mem[ALU_result][7]}}, mem[ALU_result]}; // LB
                        3'b001: rd_write_data = {{16{mem[ALU_result+1][7]}}, mem[ALU_result+1], mem[ALU_result]}; // LH
                        3'b010: rd_write_data = {mem[ALU_result+3], mem[ALU_result+2], mem[ALU_result+1], mem[ALU_result]}; // LW
                        3'b100: rd_write_data = {24'b0, mem[ALU_result]}; // LBU
                        3'b101: rd_write_data = {16'b0, mem[ALU_result+1], mem[ALU_result]}; // LHU
                    
                    endcase

                end

            end
            2: rd_write_data = pc+eximm;
            3: rd_write_data = pc+4;

        endcase

        // Branch Instruction Logic
        if (Branch && branch_taken) next_pc = pc+eximm;
        // Jump Instruction Logic
        else if (Jump) begin 
            if (ALUSrc == 0) next_pc = pc+eximm; // JAL
            else next_pc = (rs1_data+eximm) & 32'hFFFFFFFE; // JALR, clear lsb to ensure word alignment
        end
        else next_pc = pc+4;

    end

    always @ (posedge clk or negedge rst_n) begin

        if (!rst_n) begin
            pc <= 0;
        end

        else begin

            pc <= next_pc;
            
            // Store Instruction Logic

            if (MemWrite == 1'b1) begin

                case (funct3) 
                
                    3'b000: mem[ALU_result] <= rs2_data[7:0]; // SB
                    3'b001: {mem[ALU_result+1], mem[ALU_result]} <= rs2_data[15:0]; // SH
                    3'b010: {mem[ALU_result+3], mem[ALU_result+2], mem[ALU_result+1], mem[ALU_result]} <= rs2_data; // SW
                
                endcase
             
            end

        end

    end


endmodule
