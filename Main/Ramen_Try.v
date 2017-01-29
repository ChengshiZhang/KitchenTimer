`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:02:56 04/26/2016
// Design Name:   Ramen
// Module Name:   X:/EC311labs/KitchenTimer/Ramen_Try.v
// Project Name:  KitchenTimer
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Ramen
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Ramen_Try;

	// Inputs
	reg clk;
	reg [12:0] in;

	// Outputs
	wire [6:0] cathode;
	wire [3:0] AN;
	wire timeUp;

	// Instantiate the Unit Under Test (UUT)
	Ramen uut (
		.clk(clk), 
		.in(in), 
		.cathode(cathode), 
		.AN(AN), 
		.timeUp(timeUp)
	);

	always begin
		#5 clk = ~clk;
	end
	
	initial begin
		// Initialize Inputs
		clk = 0;
		in = 13'b0000000000000;

		// Wait 100 ns for global reset to finish
		
		//in[12:0]:
		//12 - start
		//11 - reset
		//10 - pause
		//9 - up/down
		//8 - fast/slow
		//7 - minutes
		//6 - seconds
		//[5:0] - set time
	
	
		#100;
		#10 in[11] = 1;
		#10 in[11] = 0;
		#10 in[5:0] = 6'b000101;
		#10 in[7] = 1; 
		#10 in[7] = 0; in[5:0] = 6'b101000; 
		#10 in[6] = 1; 
		#10 in[5:0] = 6'b000000; in[6] = 0; in[8] = 1;
		#10 in[12] = 1; 
		#10 in[12] = 0;
		#50 in[8] = 0;
		#200 in[9] = 1;
		#100 in[8] = 1;
        
		// Add stimulus here

	end
      
endmodule

