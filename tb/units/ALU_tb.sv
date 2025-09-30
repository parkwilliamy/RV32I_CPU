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
    rand logic [3:0] f;

    constraint size {
        a inside {[32'sh8000_0000:32'sh7FFF_FFFF]};
        b inside {[32'sh8000_0000:32'sh7FFF_FFFF]};
        f inside {4'b0000, 4'b1000, 4'b0111, 4'b0110, 4'b0100, 4'b0001, 4'b0101, 4'b1101, 4'b0010, 4'b0011};
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
    int result;
    ALU DUT(.op1(op1), .op2(op2), .field(field), .result(result));
    ALUinputs ALUtest = new;

    initial begin

        $display("Testbench started!");

        repeat (15) begin
            ALUtest.randomize();
            op1 = ALUtest.a;
            op2 = ALUtest.b;
            field = ALUtest.f;
            #5;
            $display("op1 = %0d, op2 = %0d, field = %0b, result = %0d", op1, op2, field, result);
        end

        $finish;

    end

    

endmodule
