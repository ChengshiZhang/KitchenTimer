`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:37:53 04/13/2016
// Design Name:   FSM
// Module Name:   X:/EC311labs/KitchenTimer/fsm_test.v
// Project Name:  KitchenTimer
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FSM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fsm_test;

	// Inputs
	reg clk;
	reg [12:0] in;

	// Outputs
	wire timeUp;
	wire [5:0] min;
	wire [5:0] sec;

	// Instantiate the Unit Under Test (UUT)
	FSM uut (
		.clk(clk), 
		.in(in), 
		.timeUp(timeUp), 
		.min(min), 
		.sec(sec)
	);


	always #5 clk = ~clk;
	
	initial begin
		// Initialize Inputs
		clk = 0;
		in = 13'b0000000000000;

		#10 in[11] = 1;
		#10 in[11] = 0;
		#10 in[5:0] = 6'b000101;
		#10 in[7] = 1; 
		#10 in[7] = 0; in[5:0] = 6'b 101000; 
		#10 in[6] = 1; 
		#10 in[5:0] = 6'b000000; in[6] = 0; in[8] = 1;
		#10 in[12] = 1; 
		#10 in[12] = 0;
		#50 in[8] = 0;
		#200 in[9] = 1;
		#100 in[8] = 1;
		#50 in[10] = 1;
		#10 in[10] = 0;
		#30 in[10] = 1;
		#10 in[10] = 0;
		#300 in[11] = 1; in[9] = 0;
		#10 in[11] = 0;
		#10 in[5:0] = 6'b000101; in[7] = 1;
		#10 in[7] = 0;
		#10 in[5:0] = 6'b000000; in[7] = 1;
		#10 in[7] = 0;
		#10 in[5:0] = 6'b000101; in[6] = 1;
		#10 in[6] = 0;
		#10 in[12] = 1; 
		#10 in[12] = 0;
		
		

	end
      
endmodule

