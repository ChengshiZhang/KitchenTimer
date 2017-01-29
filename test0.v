`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:19:09 04/26/2016
// Design Name:   Ramen
// Module Name:   X:/EC311labs/KitchenTimer/test0.v
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

module test0;

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
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

