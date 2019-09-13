module IMEM (clk, iaddr, instruction);	

	input clk;
	input wire[31:0] iaddr;
	output reg [31:0] instruction;
	reg [31:0] instruction_memory [1023:0];
	
    initial begin
    	$readmemh("to_be_written.txt", instruction_memory);
    end
    
    always @(posedge clk) 
    	begin
        	instruction <= instruction_memory[iaddr[9:0]];
    	end

endmodule
