`timescale 1ns/1ps

module top_tb;

    reg rst_n, clk; 
    top DUT (.rst_n(rst_n), .clk(clk));

    reg [1000*8:1] program_file;  
    reg [31:0] RVMODEL_DATA_BEGIN, RVMODEL_DATA_END;
    // signature region start, end, and memory addr to check for program completion
    
    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;  // 100 MHz
    end

    integer i;
    integer fd;

    initial begin

        $dumpfile("sim.vcd");        // Specify the output file name
        $dumpvars(0, top_tb);        // Dump all variables in top_tb module
        
        // Initialize all memory to zero first
        for (i = 0; i < 32'h00008000; i = i + 1) begin
            DUT.mem[i] = 8'h00;
        end

        // Argument loading

        if (!$value$plusargs("PROGRAM=%s", program_file)) begin
            $display("ERROR: No PROGRAM file specified! Use +PROGRAM=<path>");
            $finish;
        end

        $display("Loading program from %s", program_file);
        
        $readmemh(program_file, DUT.mem, 0);

        if (!$value$plusargs("RVMODEL_DATA_BEGIN=%h", RVMODEL_DATA_BEGIN)) begin
            $display("No RVMODEL_DATA_BEGIN address specified! Using default address 0x00005000");
            RVMODEL_DATA_BEGIN = 32'h00005000;
        end
        
        $display("RVMODEL_DATA_BEGIN: %h", RVMODEL_DATA_BEGIN);

        if (!$value$plusargs("RVMODEL_DATA_END=%h", RVMODEL_DATA_END)) begin
            $display("No RVMODEL_DATA_END address specified! Using default address 0x00008000");
            RVMODEL_DATA_END = 32'h00008000;
        end
        
        $display("RVMODEL_DATA_END: %h", RVMODEL_DATA_END);

        rst_n = 0;
        #20;
        rst_n = 1;

    end

    always @ (posedge clk) begin
        if (DUT.mem[32'h00005000] == 32'h00000001) begin

            dump_sigfile();
            $finish; // termination condition

        end
    end

    task dump_sigfile();
        begin
            fd = $fopen("DUT-RV32I_test.signature", "w");

            for (i=RVMODEL_DATA_BEGIN; i < RVMODEL_DATA_END-4; i=i+4) begin
                $fdisplay(fd, "%0h", {DUT.mem[i+3], DUT.mem[i+2], DUT.mem[i+1], DUT.mem[i]});
            end

            $fclose(fd);

        end
    endtask
   

endmodule