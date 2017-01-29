`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:03:48 04/23/2016
// Design Name:   Ramen
// Module Name:   X:/EC311labs/KitchenTimer/RamenTry.v
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

module RamenTry;

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
	
	
	always #5 clk = ~clk;

	initial begin
		// Initialize Inputs
		clk = 0;
		in = 13'b0000000000000;

	end
      
endmodule

