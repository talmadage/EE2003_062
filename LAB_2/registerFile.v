module RF (rs1, rs2, rd, we, clk, indata, rv1, rv2);

	input[4:0] rs1,rs2,rd;
	input we;
	input clk;
	input[31:0] indata;
	output wire[31:0] rv1,rv2;
	reg[31:0] reg_mem [31:0];
   reg [4:0] i; 
	 
	initial begin
		
	 	for(i=0;i<32;i=i+1)
	 		begin
	 			reg_mem[i] = 0;
	 		end
	end
	 
	 
	assign rv1 = reg_mem[rs1];
    assign rv2 = reg_mem[rs2];
		  
	 
    always @(posedge clk) 
    	begin
        	if(we == 1 && rd != 0)
        	begin
          			reg_mem[rd] <= indata;	
    		end
    	end

endmodule
