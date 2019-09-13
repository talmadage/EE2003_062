`timescale 1ns/1ns

module dmem_tb () ;
	reg [31:0] daddr;
	reg [31:0] indata;
	reg we;
	reg [31:0] expected;
	reg [31:0] datamem[1023:0];
	reg clk;
	
	wire [31:0] outdata;

	integer i;
	integer total, error;

	DMEM data_mem0( 
		.clk(clk),
		.daddr(daddr),
		.we(we),
		.indata(indata),
		.outdata(outdata)
	);

	always #5 clk = !clk;

	task check_write;
		input integer i;
		begin
			daddr <= 4*i;
			indata <= datamem[i];
			we<=1;
			expected <= datamem[i];
			@(posedge clk);   
			

			@(negedge clk)    
			we<=0;
			
			@(posedge clk)     
			
			@(negedge clk);   
			
			if(outdata==expected) 
			begin
			$display($time," Pass outdata=%08x expected data=%08x iter=%d",outdata,expected,i);
			end 
			else 
			begin
			$display($time," Fail outdata=%08x expected data=%08x iter=%d",outdata,expected,i);
			error = error+1;
			end
			total = total + 1;
			end
	endtask

	initial begin
		
		clk = 0;
		total = 0;
		error = 0;
		we <= 0;
		daddr <=0;
		$readmemh("yet_to_add.txt", datamem);
		
		
		for(i=0;i<1024;i=i+1) begin
			check_write(i);
		end
		
		if (error>0) begin
		$display("Failed %d out of %d test cases",error,total);
		end else begin
		$display("Passed all %d test cases",total);
		end
	end

endmodule
