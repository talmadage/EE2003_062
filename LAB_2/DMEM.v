module DMEM (clk, daddr, we, indata, outdata);	

	 input wire clk;
	 input wire[31:0] daddr;
	 input wire we;
	 input wire[31:0]indata;
	 output reg [31:0] outdata;
	 reg [7:0] data_memory [4095:0];
	 reg[11:0] i;
    initial begin
    	//$readmemh("to_be_written.txt", data_memory);
		

		for(i=0;i<4095;i=i+1)
			begin
				data_memory[i]=1;
			end
	end
    
    always @(posedge clk)
    	 begin
    	 	
			if (we==1) // pre writing
				begin
					data_memory[daddr[13:2]] <= indata;
					//j = 1;
				end

			outdata <= data_memory[daddr[13:2]];

				
	 	end

endmodule
