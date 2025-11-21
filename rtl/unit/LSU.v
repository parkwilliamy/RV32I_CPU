`timescale 1ns/1ps

module LSU (
    input addrb, MemWrite, MemRead,
    input [31:0] DMEM_word, rs2_data,
    input [1:0] byte_offset,
    input [2:0] funct3,
    output reg [3:0] web,
    output reg [31:0] dib, DMEM_result
);

    reg [31:0] DMEM_shifted_word; // for loads

    always @ (*) begin

        DMEM_shifted_word = DMEM_word >> 8*byte_offset;

        if (MemWrite) begin

                case (funct3) 

                    3'b000: begin // SB
                        
                        web = (4'b0001 << byte_offset);
                        dib = {24'b0, rs2_data[7:0]};

                    end

                    3'b001: begin // SH

                        web = (4'b0011 << byte_offset);
                        dib = {16'b0, rs2_data[15:0]};
                    
                    end

                    3'b010: begin // SW

                        web = 4'b1111;
                        dib = rs2_data;

                    end
                
                endcase
             
        end

        else if (MemRead) begin

            case (funct3) 
            
                3'b000: DMEM_result = {{24{DMEM_word[7]}}, DMEM_shifted_word[7:0]}; // LB
                3'b001: DMEM_result = {{16{DMEM_word[15]}}, DMEM_shifted_word[15:0]}; // LH
                3'b010: DMEM_result = DMEM_shifted_word; // LW
                3'b100: DMEM_result = {24'b0, DMEM_shifted_word[7:0]}; // LBU
                3'b101: DMEM_result = {16'b0, DMEM_shifted_word[15:0]}; // LHU

            endcase

        end


    end


endmodule