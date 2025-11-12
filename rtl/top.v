`timescale 1ns/1ps

module top (
    input rst_n, clk
);

    // MEMORY

    reg [31:0] pc = 0;
    reg [31:0] next_pc = 0;
    reg [7:0] mem [32'h00000000:32'h00250000-1]; // 352KB RAM (make sure its word aligned)
    reg [31:0] old_mem_byte;
    localparam IMEM_START = 32'h00000000,
               IMEM_END   = 32'h00200000,
               DMEM_START = 32'h00200000,
               DMEM_END   = 32'h00250000;
               

    // INSTRUCTION FIELDS

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

    // CONTROL FIELDS/FLAGS

    wire [1:0] ALUOp;
    wire [1:0] RegSrc;
    wire ALUSrc, RegWrite, MemRead, MemWrite, Branch;
    wire [3:0] field;
    wire zero, sign, overflow, carry;

    // MODULES 

    ControlUnit INST1 (.opcode(opcode), .ALUOp(ALUOp), .RegSrc(RegSrc), .ALUSrc(ALUSrc), .RegWrite(RegWrite), .MemRead(MemRead), .MemWrite(MemWrite), .Branch(Branch));

    reg [31:0] rd_write_data;
    wire [31:0] rs1_data;
    wire [31:0] rs2_data;
    RegFile INST2 (.clk(clk), .RegWrite(RegWrite), .rs1(rs1), .rs2(rs2), .rd(rd), .rd_write_data(rd_write_data), .rs1_data(rs1_data), .rs2_data(rs2_data));

    wire [31:0] eximm;
    ImmGen INST3 (.instruction(instruction), .eximm(eximm));

    ALUControl INST4 (.funct7(funct7), .funct3(funct3), .ALUOp(ALUOp), .regbit(opcode[5]), .field(field));

    wire [31:0] op1;
    wire [31:0] op2;
    assign op1 = (opcode == 7'b0110111) ? 0: rs1_data;
    assign op2 = ALUSrc ? eximm: rs2_data;
    wire [31:0] result;

    ALU INST5 (.op1(op1), .op2(op2), .field(field), .result(result), .zero(zero), .sign(sign), .overflow(overflow), .carry(carry));
    
    reg branch_taken;

    always @ (*) begin

        old_mem_byte = rs2_data;

        case (RegSrc) 

            0: rd_write_data = result;
            1: begin
                if (MemRead) begin

                    case (funct3) 
                    
                        3'b000: rd_write_data = {{24{mem[result][7]}}, mem[result]}; // LB
                        3'b001: rd_write_data = {{16{mem[result+1][7]}}, mem[result+1], mem[result]}; // LH
                        3'b010: rd_write_data = {mem[result+3], mem[result+2], mem[result+1], mem[result]}; // LW
                        3'b100: rd_write_data = {24'b0, mem[result]}; // LBU
                        3'b101: rd_write_data = {16'b0, mem[result+1], mem[result]}; // LHU
                    
                    endcase

                end

                else rd_write_data = 32'b0;
            end
            2: rd_write_data = pc+eximm;
            3: rd_write_data = (pc+4) % IMEM_END;
            default: rd_write_data = 0;

        endcase

        if (Branch) begin
            
            case (funct3) 
                
                3'b000: branch_taken = zero; // BGE
                3'b001: branch_taken = ~zero; // BNE
                3'b100: branch_taken = sign^overflow; // BLT
                3'b101: branch_taken = ~(sign^overflow); // BGE
                3'b110: branch_taken = carry; // BLTU
                3'b111: branch_taken = ~carry; // BGEU
                
            endcase


        end
        if (Branch && branch_taken) next_pc = pc+eximm;
        else if (RegSrc == 3) begin
            if (ALUSrc == 0) next_pc = pc+eximm;
            else if (ALUSrc == 1) next_pc = (rs1_data+eximm) & 32'hFFFFFFFE; //clear lsb to ensure alignmen
            else next_pc = pc+4;
        end
        else next_pc = pc+4;

    end

    always @ (posedge clk or negedge rst_n) begin

        if (!rst_n) begin
            pc <= 0;
            instruction <= {mem[pc+3], mem[pc+2], mem[pc+1], mem[pc]};
        end

        else begin

            pc <= next_pc;
            instruction <= {mem[next_pc+3], mem[next_pc+2], mem[next_pc+1], mem[next_pc]};
            if (MemWrite == 1'b1) begin

                case (funct3) 
                
                    3'b000: mem[result] <= old_mem_byte[7:0]; // SB
                    3'b001: {mem[result+1], mem[result]} <= old_mem_byte[15:0]; // SH
                    3'b010: {mem[result+3], mem[result+2], mem[result+1], mem[result]} <= old_mem_byte; // SW
                
                endcase
             
            end

        end

    end


endmodule
