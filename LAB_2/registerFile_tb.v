`timescale 1ns/1ns

module regmem_tb () ;
	reg clk,we;
	reg[4:0] rs1,rs2,rd;
	reg [31:0] indata;
	wire [31:0] rv1,rv2;

	integer i;
	integer total, err;

	RF reg_mem0(
		.rs1(rs1),
		.rs2(rs2),
		.rd(rd),
		.we(we),
		.clk(clk),
		.indata(indata),
		.rv1(rv1),
		.rv2(rv2)
	);

	always #5 clk = !clk;

	initial begin
		
		clk = 0;
		total = 0;
		err = 0;
		
		for (i=0; i<32; i=i+1) 
		begin
			rs1<=i;
			rs2<=i;

			we<=1;
			indata<=i+100;
			rd<=i;
			@(posedge clk)
			total = total + 1;
			@(negedge clk);
		end

		for (i=0; i<32; i=i+2) 
		begin
			rs1<=i;
			rs2<=i+1;

			we<=0;
			indata<=10000;
			rd<=i;
			@(posedge clk)
			total = total + 1;
			@(negedge clk)
				if(rd!=0&&rv1==indata)
				err = err+1;
			
		end


		$finish;
	end

endmodule
