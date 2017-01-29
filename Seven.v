
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:48:59 04/19/2016 
// Design Name: 
// Module Name:    Seven 
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
module Seven(clk, c1, c2, c3, c4, AN, cathode, reset);
	input clk, reset;
	input [6:0]c1;
	input [6:0]c2;
	input [6:0]c3;
	input [6:0]c4;
	output reg[3:0] AN;
	output reg[6:0] cathode;
	reg[1:0] count;
	wire clk_out, reset_debounced;//, up, down;

	//call the clock divider and pass 1 to get the display clock
	clock_divider clk1(.in_clk(clk),.out_clk(clk_out), .seg(1'b1));
	  
	  
	//debounces the reset button
  Debouncer PB_debouncer2(
		.clk(clk),
		.PB(reset),
		.PB_state(reset_debounced)
	);
	
	//switches between four different displays for every clock cycle
	always@(posedge clk_out)
	begin
			count <= count + 1'b1;
			case(count)
				2'b00:begin
					AN <= 4'b1110;
					cathode <= c1;
				end
				2'b01:begin
					AN <= 4'b1101;
					cathode <= c2;
				end
				2'b10:begin
					AN <= 4'b1011;
					cathode <= c3;
				end
				2'b11:begin
					AN <= 4'b0111;
					cathode <= c4;
				end
				default: begin
					AN <= 4'b1110;
					cathode <= 7'b1111110;
				end
			endcase
	end

endmodule
