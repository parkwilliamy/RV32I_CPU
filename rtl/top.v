`timescale 1ns/1ps

module top (
    input rst_n, clk
);

    // MEMORY

    reg [31:0] pc = 0;
    reg [31:0] next_pc = 0;
    reg [7:0] mem [32'h00000000:32'h00008000-1]; // 32KB RAM (make sure its word aligned)
    reg [31:0] old_mem_byte;
    localparam IMEM_START = 32'h00000000,
               IMEM_END   = 32'h00005000,
               DMEM_START = 32'h00005000,
               DMEM_END   = 32'h00008000;

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

    ALUControl INST4 (.funct7(funct7), .funct3(funct3), .ALUOp(ALUOp), .field(field));

    wire [31:0] op1;
    wire [31:0] op2;
    assign op1 = rs1_data;
    assign op2 = ALUSrc ? eximm: rs2_data;
    wire [31:0] result;

    ALU INST5 (.op1(op1), .op2(op2), .field(field), .result(result), .zero(zero), .sign(sign), .overflow(overflow), .carry(carry));
    
    always @ (*) begin

        old_mem_byte = rs2_data;

        case (RegSrc) 

            0: rd_write_data = result;
            1: if (result >= DMEM_START && result < DMEM_END) rd_write_data = {mem[result+3], mem[result+2], mem[result+1], mem[result]};
            2: rd_write_data = pc+eximm;
            3: rd_write_data = (pc+4) % IMEM_END;
            default: rd_write_data = 0;

        endcase

        

        next_pc = (Branch && zero || RegSrc == 3) ? pc+eximm: (pc+4) % IMEM_END; // combinational block above guarantees pc+eximm and pc+4 are between IMEM_START and IMEM_END


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
                if (result >= DMEM_START && result < DMEM_END) begin
                    mem[result+3] <= old_mem_byte[31:24];  
                    mem[result+2] <= old_mem_byte[23:16];  
                    mem[result+1] <= old_mem_byte[15:8]; 
                    mem[result] <= old_mem_byte[7:0];
                end
            end

        end

    end


endmodule
