`timescale 1ns/1ps

module top_tb (input reg rst_n, clk);

    //reg rst_n, clk; 
    top DUT (.rst_n(rst_n), .clk(clk));

    reg [1000*8:1] program_file;  
    reg [31:0] RVMODEL_DATA_BEGIN, RVMODEL_DATA_END, tohost;
    // signature region start, end, and memory addr to check for program completion
    
    // Clock generation
    initial begin
        //clk = 0;
        //forever #5 clk = ~clk;  // 100 MHz
    end

    integer i;
    integer fd;

    initial begin

        //$dumpfile("sim.vcd");        // Specify the output file name
        //$dumpvars(0, top_tb);        // Dump all variables in top_tb module

        // Argument loading

        if (!$value$plusargs("PROGRAM=%s", program_file)) begin
            $display("ERROR: No PROGRAM file specified! Use +PROGRAM=<path>");
            $finish;
        end

        $display("Loading program from %s", program_file);
        
        $readmemh(program_file, DUT.BRAM.mem, 0);

        if (!$value$plusargs("begin_signature=%h", RVMODEL_DATA_BEGIN)) begin
            $display("No RVMODEL_DATA_BEGIN address specified! Using default address 0x00005000");
            RVMODEL_DATA_BEGIN = 32'h00005000;
        end
        
        $display("RVMODEL_DATA_BEGIN: %h", RVMODEL_DATA_BEGIN);

        if (!$value$plusargs("end_signature=%h", RVMODEL_DATA_END)) begin
            $display("No RVMODEL_DATA_END address specified! Using default address 0x00008000");
            RVMODEL_DATA_END = 32'h00008000;
        end
        
        $display("RVMODEL_DATA_END: %h", RVMODEL_DATA_END);

        if (!$value$plusargs("tohost=%h", tohost)) begin
            $display("No tohost address specified! Using default address 0x00005000");
            tohost = 32'h00005000;
        end
        
        $display("tohost: %h", tohost);

        //rst_n = 0;
        //#20;
        //rst_n = 1;

        

    end

    always @ (posedge clk) begin
        if (DUT.BRAM.mem[tohost/4] == 8'h00000001) begin

            dump_sigfile();
            $finish; // termination condition

        end
    end

    task dump_sigfile();
        begin
            fd = $fopen("DUT-RV32I_test.signature", "w");

            for (i=RVMODEL_DATA_BEGIN; i < RVMODEL_DATA_END; i=i+4) begin
                $fdisplay(fd, "%08h", (DUT.BRAM.mem[i/4]));
            end

            $fclose(fd);

        end
    endtask
   

endmodule