`timescale 1ns/1ps

/*

Test cases:
1) CRV (op1, op2 constrained from -2^31 to 2^31-1, field is constrained to one of the 10 operations
2) Edge cases 
ADD/SUB: overflow, 1 or both operands 0
remainder of ops: 1 or both operands 0 or min/max values


*/

class ALUinputs;

    rand int a, b;

    constraint size {
        a inside {[32'sh8000_0000:32'sh7FFF_FFFF]};
        b inside {[32'sh8000_0000:32'sh7FFF_FFFF]};
    }

endclass

/*
task direct_tests;

    //ADD Tests
    op1 = -2147483648;
    op2 = 1;
    field = 4'b0000; 
    $display("op1 = %0d, op2 = %0d, field = %0d, result = %0d", op1, op2, field, result);
    assert(result = )

endtask
*/

module tb;

    int op1, op2;
    logic [3:0] field;
    logic [0:9][3:0] opcodes = '{4'b0000, 4'b1000, 4'b0111, 4'b0110, 4'b0100, 4'b0001, 4'b0101, 4'b1101, 4'b0010, 4'b0011};
    int result;
    ALU DUT(.op1(op1), .op2(op2), .field(field), .result(result));
    ALUinputs ALUtest = new;

    initial begin

        $display("Testbench started!");

        

        for (int i = 0; i < 10; i++) begin

            field = opcodes[i];
            $display("Operation: %0b", field);

/* 
            // CRV
            repeat (5) begin
                ALUtest.randomize();
                op1 = ALUtest.a;
                op2 = ALUtest.b;
                #5;
                $display("op1 = %0d, op2 = %0d, result = %0d", op1, op2, result);
            end
*/

            // Directed Tests
            op1 = 0;
            op2 = 0;
            #5;
            $display("op1 = %0d, op2 = %0d, result = %0d", op1, op2, result);

            op1 = 32'sh7FFF_FFFF;
            op2 = 0;
            #5;
            $display("op1 = %0d, op2 = %0d, result = %0d", op1, op2, result);

            op1 = 32'sh7FFF_FFFF;
            op2 = 32'sh7FFF_FFFF;
            #5;
            $display("op1 = %0d, op2 = %0d, result = %0d", op1, op2, result);

            op1 = 32'sh8000_0000;
            op2 = 32'sh8000_0000;
            #5;
            $display("op1 = %0d, op2 = %0d, result = %0d", op1, op2, result);

            op1 = 32'sh7FFF_FFFF;
            op2 = 32'sh8000_0000;
            #5;
            $display("op1 = %0d, op2 = %0d, result = %0d", op1, op2, result);

            op1 = 32'sh8000_0000;
            op2 = 32'sh7FFF_FFFF;
            #5;
            $display("op1 = %0d, op2 = %0d, result = %0d", op1, op2, result);

        end

        $finish;

    end

    

endmodule
