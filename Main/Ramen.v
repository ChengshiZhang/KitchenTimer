`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:22:29 04/20/2016 
// Design Name: 
// Module Name:    Ramen 
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


	//in[12:0]:
	//12 - start
	//11 - reset
	//10 - pause
	//9 - up/down
	//8 - fast/slow
	//7 - minutes
	//6 - seconds
	//[5:0] - set time
	

module Ramen(clk, in, cathode, AN, timeUp, R, G, B, HS, VS);
	input clk;
	input [12:0]in;
	output [6:0]cathode;
	output [3:0]AN;
	output timeUp;
	output [2:0] R, G;
	output [1:0] B;
	output HS, VS;
	wire down,up;
	wire [5:0]min;
	wire [5:0]sec;
	reg [2:0]state;
	wire [6:0] cathode1;
	wire [6:0] cathode2;
	wire [6:0] cathode3;
	wire [6:0] cathode4;
	wire[3:0] min1;
	wire[3:0] min2;
	wire[3:0] sec1;
	wire[3:0] sec2;
	
	
	//call the Finite State Machine, receives minutes and seconds
	FSM f1(.clk(clk), .in(in), .timeUp(timeUp), .min(min), .sec(sec));

	//split the double digit minutes and seconds to two single digits each
	assign min2 = min%10;
	assign min1 = (min - min2)/10;
	assign sec2 = sec%10;
	assign sec1 = (sec - sec2)/10;
	
	vga_display v1(reset, clk, min1, min2, sec1, sec2, R, G, B, HS, VS, {in[9:8], in[5]}, in[4:2], in[1:0]);
	
//	//receives the display cathodes for the corresponding four numbers
//	binary_to_segment b1(.bin(min1), .seven(cathode1));
//	binary_to_segment b2(.bin(min2), .seven(cathode2));
//	binary_to_segment b3(.bin(sec1), .seven(cathode3));
//	binary_to_segment b4(.bin(sec2), .seven(cathode4));
//	
//	//displays the four numbers onto the 7 segment display
//	Seven s1(.clk(clk), .c1(cathode4), .c2(cathode3), .c3(cathode2), .c4(cathode1), .AN(AN), .cathode(cathode), .reset(in[11]));
//	
	
	
	
	
endmodule
