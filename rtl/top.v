`timescale 1ns/1ps

module top (
    input rst_n, clk
);

    // ===================================== MEMORY ===================================== 

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
    reg [145:0] ID/EX; // ID/EX[145:143] = funct3, ID/EX[142:141] = ALUOp, ID/EX[140:139] = RegSrc, ID/EX[138] = ALUSrc, ID/EX[137] = RegWrite, ID/EX[136] = MemRead, ID/EX[135] = MemWrite, ID/EX[134] = Branch, ID/EX[133] = Jump, ID/EX[132:101] = pc, ID/EX[100:69] = rs1_data, ID/EX[68:37] = rs2_data, ID/EX[36:5] = eximm, ID/EX[4:0] = rd
    reg [114:0] EX/MEM; // EX/MEM[114:112] = funct3, EX/MEM[111:110] = RegSrc, EX/MEM[109] = RegWrite, EX/MEM[108] = MemRead, EX/MEM[107] = MemWrite, EX/MEM[106] = Branch, EX/MEM[105] = Jump, EX/MEM[104:73] = pc+eximm, EX/MEM[72:41] = rs2_data, EX/MEM[40:9] = ALU_result, EX/MEM[8] = zero, EX/MEM[7] = sign, EX/MEM[6] = overflow, EX/MEM[5] = carry, EX/MEM[4:0] = rd
    reg [75:0] MEM/WB; // MEM/WB[75:73] = funct3, MEM/WB[72:71] = RegSrc, MEM/WB[70] = RegWrite, MEM/WB[69] = MemWrite, MEM/WB[68:37] = ALU_result, MEM/WB[36:5] = mem[ALU_result], MEM/WB[4:0] = rd

               
    // =============================== INSTRUCTION FETCH ================================

    reg [31:0] IF_instruction;
    reg [31:0] IF_pc;

    // =============================== INSTRUCTION DECODE ===============================

    wire [31:0] ID_instruction;
    wire [31:0] ID_pc;
    wire [6:0] opcode;
    wire [11:7] ID_rd;
    wire [14:12] ID_funct3;
    wire [19:15] rs1;
    wire [24:20] rs2;
    wire [31:25] funct7;
    
    assign {ID_PC, ID_instruction} = IF/ID;
    assign opcode = ID_instruction[6:0];
    assign ID_rd = ID_instruction[11:7];
    assign ID_funct3 = ID_instruction[14:12];
    assign rs1 = ID_instruction[19:15];
    assign rs2 = ID_instruction[24:20];
    assign funct7 = ID_instruction[31:25];

    wire [1:0] ID_ALUOp; // EX
    wire [1:0] ID_RegSrc; // WB
    wire ID_ALUSrc, ID_RegWrite, ID_MemRead, ID_MemWrite, ID_Branch, ID_Jump; // EX, WB, MEM, MEM, WB, MEM, MEM
    wire [3:0] field;
    wire [31:0] ID_eximm;
    wire [31:0] ID_rs1_data;
    wire [31:0] ID_rs2_data;

    ControlUnit INST1 (
        .opcode(opcode), 
        .ALUOp(ID_ALUOp), 
        .RegSrc(ID_RegSrc), 
        .ALUSrc(ID_ALUSrc), 
        .RegWrite(ID_RegWrite), 
        .MemRead(ID_MemRead), 
        .MemWrite(ID_MemWrite), 
        .Branch(ID_Branch),
        .Jump(ID_Jump)
    );

    RegFile INST2 (
        .clk(clk), 
        .RegWrite(WB_RegWrite), 
        .rs1(rs1), 
        .rs2(rs2), 
        .rd(WB_rd), 
        .rd_write_data(WB_rd_write_data), 
        .rs1_data(ID_rs1_data), 
        .rs2_data(ID_rs2_data)
    );

    ImmGen INST3 (
        .instruction(ID_instruction), 
        .eximm(ID_eximm)
    );

    ALUControl INST4 (
        .funct7(funct7), 
        .funct3(ID_funct3), 
        .ALUOp(ID_ALUOp), 
        .regbit(opcode[5]), 
        .field(field)
    );
    

    // ==================================== EXECUTE =====================================

    wire EX_zero, EX_sign, EX_overflow, EX_carry;
    
    wire [2:0] EX_funct3;
    wire [1:0] EX_ALUOp; 
    wire [1:0] EX_RegSrc; 
    wire EX_ALUSrc, EX_RegWrite, EX_MemRead, EX_MemWrite, EX_Branch, EX_Jump;
    wire [31:0] EX_pc;
    wire [31:0] EX_rs1_data;
    wire [31:0] EX_rs2_data;
    wire [31:0] EX_eximm;
    wire [4:0] EX_rd;

    wire [31:0] op1;
    wire [31:0] op2;

    assign {
        EX_funct3, 
        EX_ALUOp, 
        EX_RegSrc, 
        EX_RegWrite, 
        EX_MemRead, 
        EX_MemWrite, 
        EX_Branch, 
        EX_Jump,
        EX_pc,
        EX_rs1_data,
        EX_rs2_data,
        EX_eximm,
        EX_rd
    } = ID/EX;

    assign op1 = (EX_ALUOp == 1 && EX_ALUSrc == 1) ? 0: EX_rs1_data;
    assign op2 = EX_ALUSrc ? EX_eximm: EX_rs2_data;
    wire [31:0] EX_ALU_result;

    ALU INST5 (
        .op1(op1), 
        .op2(op2), 
        .field(field), 
        .ALU_result(EX_ALU_result), 
        .zero(EX_zero), 
        .sign(EX_sign), 
        .overflow(EX_overflow), 
        .carry(EX_carry)
    );


    // ================================== MEMORY WRITE ==================================

    wire [2:0] MEM_funct3;
    wire [1:0] MEM_RegSrc; 
    wire MEM_RegWrite, MEM_MemRead, MEM_MemWrite, MEM_Branch, MEM_Jump;
    
    wire [31:0] MEM_pc_eximm;
    wire [31:0 ]MEM_rs2_data;
    wire [31:0] MEM_alu_result;
    wire MEM_zero, MEM_sign, MEM_overflow, MEM_carry;
    wire [4:0] MEM_rd;

    assign {
        MEM_funct3, 
        MEM_RegSrc, 
        MEM_RegWrite, 
        MEM_MemRead, 
        MEM_MemWrite, 
        MEM_Branch, 
        MEM_Jump,
        MEM_pc_eximm,
        MEM_rs2_data,
        MEM_alu_result,
        MEM_zero,
        MEM_sign,
        MEM_overflow,
        MEM_carry,
        MEM_rd
    } = EX/MEM;

    wire branch_taken;

    BPU INST6 (
        .Branch(MEM_Branch),
        .zero(MEM_zero),
        .sign(MEM_sign),
        .overflow(MEM_overflow),
        .carry(MEM_carry),
        .funct3(MEM_funct3),
        .branch_taken(branch_taken)
    );


    // =============================== REGFILE WRITE BACK ===============================

    wire [2:0] WB_funct3;
    wire [1:0] WB_RegSrc;
    wire WB_RegWrite, WB_MemWrite;

    wire [31:0] WB_ALU_result;
    wire [4:0] WB_rd;

    assign {
        WB_funct3,
        WB_RegSrc,
        WB_RegWrite,
        WB_MemWrite,
        WB_ALU_result,
        {mem[WB_ALU_result+3], mem[WB_ALU_result+2], mem[WB_ALU_result+1], mem[WB_ALU_result]}, // not all of the word is used for non LW instructions
        WB_rd
    } = EX/WB;

    reg [31:0] WB_rd_write_data;
    reg [31:0] next_pc;

    always @ (posedge clk or negedge rst_n) begin

        if (!rst_n) begin
            IF_pc <= 0;
        end

        else begin

            IF_pc <= next_pc;
            IF/ID <= {IF_pc,IF_instruction};
            ID/EX <= {funct3, ALUOp, RegSrc, ALUSrc, RegWrite, MemRead, MemWrite, Branch, Jump, ID_pc, rs1_data, rs2_data, eximm, rd};
            EX/MEM <= {EX_funct3, EX_RegSrc, EX_RegWrite, EX_MemRead, EX_MemWrite, EX_Branch, EX_Jump, EX_pc_eximm, EX_rs2_data, ALU_result, zero, sign, overflow, carry, EX_rd};
            MEM/WB <= {WB_funct3, WB_RegSrc, WB_RegWrite, WB_MemWrite, WB_ALU_result, {mem[WB_ALU_result+3], mem[WB_ALU_result+2], mem[WB_ALU_result+1], mem[WB_ALU_result]}, WB_rd};

        end

    end

    // TO DO: WRITE COMBINATIONAL BLOCKS FOR EACH PIPELINE STAGE

    always @ (*) begin

        IF_instruction = {mem[IF_pc+3], mem[IF_pc+2], mem[IF_pc+1], mem[IF_pc]};

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
            2: rd_write_data = IF_pc+eximm;
            3: rd_write_data = IF_pc+4;

        endcase

        // Branch Instruction Logic
        if (Branch && branch_taken) next_pc = IF_pc+eximm;
        // Jump Instruction Logic
        else if (Jump) begin 
            if (ALUSrc == 0) next_pc = IF_pc+eximm; // JAL
            else next_pc = (rs1_data+eximm) & 32'hFFFFFFFE; // JALR, clear lsb to ensure word alignment
        end
        else next_pc = IF_pc+4;

    end

    always @ (posedge clk or negedge rst_n) begin

        if (!rst_n) begin
            IF_pc <= 0;
        end

        else begin

            IF_pc <= next_pc;
            
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
