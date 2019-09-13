`timescale 1ns/1ns

module imem_tb () ;
	reg [31:0] iaddr;
	wire [31:0] idata;
	reg [31:0] expected;
	reg [31:0] imem_data[1023:0];
	reg clk;

	integer i;
	integer total, err;

	IMEM instr_mem0(
		.clk(clk),
		.iaddr(iaddr),
		.idata(idata)
	);

	
	always #5 clk = !clk;

	task apply_and_check;
		input integer i;
		begin
			iaddr = i;
			@(negedge clk)begin
			if (idata != expected) begin
				$display($time," Fail read=%08x exp=%08x,iaddr=%08x", idata, expected,iaddr);
			 	err = err+ 1;
			end else begin
				$display($time," Pass read=%08x exp=%08x,iaddr=%08x", idata, expected,iaddr);
			end
			end
			@(posedge clk) begin
			total = total + 1;
			expected = imem_data[iaddr];
			end
		end
	endtask 

	initial begin		
		clk = 0;
		total = 0;
		err = 0;
		$readmemh("yet_to_add.txt", imem_data);

		for (i=0; i<1024; i=i+1) begin
			apply_and_check(i);	
		end
		
		if (err > 0) begin
			$display("FAIL %d out of %d", err, total);
		end else begin
			$display("PASS %d tests", total);
		end
		$finish;
	end

endmodule
