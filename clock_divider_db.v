`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:43:10 04/27/2016 
// Design Name: 
// Module Name:    clock_divider_db 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module clock_divider_db(in_clk,out_clk);
	input in_clk;
	output reg out_clk;
	
	reg [1:0]count;
	
	//clock devider for 50MHz debouncer
	always@(posedge in_clk)
	begin
			count = count + 1'b1;
			//divide the system clock by 2
			if(count>=2)begin
				out_clk =1;
				count = 0;
			end
			else
				out_clk = 0;
	
	
	end

endmodule
