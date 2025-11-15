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


    // ================================ PIPELINE REGISTERS ==============================

    // TODO: FIGURE OUT DUAL PORT BRAM IP BLOCK

    reg [63:0] IF/ID; // IF/ID[63:32] = pc, IF/ID[31:0] = instruction
    reg [132:0] ID/EX; // ID/EX[132:101] = pc, ID/EX[100:69] = rs1_data, ID/EX[68:37] = rs2_data, ID/EX[36:5] = eximm, ID/EX[4:0] = rd
    reg [104:0] EX/MEM; // EX/MEM[104:73] = pc+eximm, EX/MEM[72:41] = rs2_data, EX/MEM[40:9] = alu_result, EX/MEM[8] = zero, EX/MEM[7] = sign, EX/MEM[6] = overflow, EX/MEM[5] = carry, EX/MEM[4:0] = rd
    reg [68:0] MEM/WB; // MEM/WB[68:37] = alu_result, MEM/WB[36:5] = mem[alu_result], MEM/WB[4:0] = rd

               
    // =============================== INSTRUCTION FETCH ================================

    reg [31:0] instruction;


    // =============================== INSTRUCTION DECODE ===============================

    wire [31:0] ID_instruction;
    wire [6:0] opcode;
    wire [11:7] rd;
    wire [14:12] funct3;
    wire [19:15] rs1;
    wire [24:20] rs2;
    wire [31:25] funct7;
    
    assign ID_instruction = IF/ID[31:0]
    assign opcode = ID_instruction[6:0];
    assign rd = ID_instruction[11:7];
    assign funct3 = ID_instruction[14:12];
    assign rs1 = ID_instruction[19:15];
    assign rs2 = ID_instruction[24:20];
    assign funct7 = ID_instruction[31:25];

    wire [1:0] ALUOp; // EX
    wire [1:0] RegSrc; // WB
    wire ALUSrc, RegWrite, MemRead, MemWrite, Branch, Jump; // EX, WB, MEM, MEM, WB, 
    wire [3:0] field;
    wire [31:0] eximm;
    wire [31:0] rs1_data;
    wire [31:0] rs2_data;

    // TODO: FILL PIPELINE REGS WITH CONTROL SIGNALS, REWRITE MODULE INSTANTIATIONS TO FIT IN EACH STAGE

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
    

    // ==================================== EXECUTE =====================================

    wire zero, sign, overflow, carry;
    wire branch_taken;
    
    wire [31:0] EX_pc;
    wire [31:0] EX_rs1_data;
    wire [31:0] EX_rs2_data;
    wire [31:0] EX_eximm;
    wire [31:0] op1;
    wire [31:0] op2;

    assign EX_pc = ID/EX[127:96];
    assign EX_rs1_data = ID/EX[95:64];
    assign EX_rs2_data = ID/EX[63:32];
    assign EX_eximm = ID/EX[31:0];
    assign op1 = (ALUOp == 1 && ALUSrc == 1) ? 0: rs1_data;
    assign op2 = ALUSrc ? eximm: rs2_data;
    wire [31:0] ALU_result;

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


    // ================================== MEMORY WRITE ==================================


    // =============================== REGFILE WRITE BACK ===============================

    reg [31:0] rd_write_data;
    

    always @ (posedge clk or negedge rst_n) begin

        if (!rst_n) begin
            pc <= 0;
        end

        else begin

            pc <= next_pc;
            IF/ID <= {pc,instruction};
            ID/EX <= {pc, rs1_data, rs2_data, eximm};
            EX/MEM <= {pc+eximm, rs2_data, alu_result, zero, sign, overflow, carry};
            MEM/WB <= {alu_result, mem[alu_result]};

        end

    end

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
