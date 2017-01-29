`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:45:21 04/19/2016 
// Design Name: 
// Module Name:    clock_divider 
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
module clock_divider(in_clk,out_clk, seg);
	input in_clk, seg;
	output reg out_clk;
	
	reg[15:0] count1;
	reg[24:0] count2;
	
	
	always@(posedge in_clk)
	begin
	
		//clock for the 7 segment display
		if(seg)begin
			count1 = count1 + 1'b1;
			//divide the system clock by 1000
			if(count1>=1000)begin
				out_clk =1;
				count1 = 0;
			end
			else
				out_clk = 0;
		end
		//clock for the actual second
		else begin
			count2 = count2 + 1'b1;
			//divide the system clock by 20000000
			if(count2>=20000000)begin
				out_clk =1;
				count2 = 0;
			end
			else
				out_clk = 0;
		end
	
	end

endmodule
