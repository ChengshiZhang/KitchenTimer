`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:32:50 04/26/2016
// Design Name:   Seven
// Module Name:   X:/EC311labs/KitchenTimer/Seven_Try.v
// Project Name:  KitchenTimer
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Seven
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Seven_Try;

	// Inputs
	reg clk;
	reg reset;
	reg [6:0] c1;
	reg [6:0] c2;
	reg [6:0] c3;
	reg [6:0] c4;

	// Outputs
	wire [3:0] AN;
	wire [6:0] cathode;

	// Instantiate the Unit Under Test (UUT)
	Seven uut (
		.clk(clk), 
		.c1(c1), 
		.c2(c2), 
		.c3(c3), 
		.c4(c4), 
		.AN(AN), 
		.cathode(cathode),
		.reset(reset)
	);

	always begin
		#5 clk = ~clk;
	end
	
	initial begin
		// Initialize Inputs
		clk = 0;
		c1 = 0;
		c2 = 0;
		c3 = 0;
		c4 = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		
		#10 reset = 1;
		#10 reset = 0;
		
		#20 c1 = 7'b1111001; c2 = 7'b0100100; c3 = 7'b0110000; c4 = 7'b0011001;
        
		// Add stimulus here

	end
      
endmodule

