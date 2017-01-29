`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Boston University
// Engineer: Zafar M. Takhirov
// 
// Create Date:    12:59:40 04/12/2011 
// Design Name: EC311 Support Files
// Module Name:    vga_display 
// Project Name: Lab5 / Lab6 / Project
// Target Devices: xc6slx16-3csg324
// Tool versions: XILINX ISE 13.3
// Description: 
//
// Dependencies: vga_controller_640_60
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module vga_display(rst, clk, num1, num2, num3, num4, R, Green, Blue, HS, VS, R_control, G_control, B_control);
	input rst;	// global reset
	input clk;	// 100MHz clk
	input [3:0] num1, num2, num3, num4;
	
	// color inputs for a given pixel
	input [2:0] R_control, G_control;
	input [1:0] B_control; 
//	
	// color outputs to show on display (current pixel)
	output reg [2:0] R, Green;
	output reg [1:0] Blue;
	
	
	
//	assign R = 3'b111;
//	assign G = 3'b011;
//	assign B = 2'b00;

	// Synchronization signals
	output HS;
	output VS;
	
	// controls:
	wire [10:0] hcount, vcount;	// coordinates for the current pixel
	wire blank;	// signal to indicate the current coordinate is blank
	wire figure0,figure1,figure2,figure3,figure4,figure5,figure6,figure7,figure8,figure9, figure02,figure12,figure22,figure32,figure42,figure52,figure62,figure72,figure82,figure92, figure03,figure13,figure23,figure33,figure43,figure53,figure63,figure73,figure83,figure93, figure04,figure14,figure24,figure34,figure44,figure54,figure64,figure74,figure84,figure94, A, B, C, D, E, F, G, A2, B2, C2, D2, E2, F2, G2, A3, B3, C3, D3, E3, F3, G3, A4, B4, C4, D4, E4, F4, G4;	// the figure you want to display
	reg en0,en1,en2,en3,en4,en5,en6,en7,en8,en9, en02,en12,en22,en32,en42,en52,en62,en72,en82,en92, en03,en13,en23,en33,en43,en53,en63,en73,en83,en93,en04,en14,en24,en34,en44,en54,en64,en74,en84,en94;
	/////////////////////////////////////////////////////
	// Begin clock division
	parameter N = 2;	// parameter for clock division
	reg clk_25Mhz;
	reg [N-1:0] count;
	always @ (posedge clk) begin
		count <= count + 1'b1;
		clk_25Mhz <= count[N-1];
	end
	// End clock division
	/////////////////////////////////////////////////////
	
	// Call driver
	vga_controller_640_60 vc(
		.rst(rst), 
		.pixel_clk(clk_25Mhz), 
		.HS(HS), 
		.VS(VS), 
		.hcounter(hcount), 
		.vcounter(vcount), 
		.blank(blank)
		);
	
	// create a box:
	assign A = ~blank & (hcount >= 100 & hcount <= 215 & vcount >= 167 & vcount <= 192);
	assign B = ~blank & (hcount >= 190 & hcount <= 215 & vcount >= 167 & vcount <= 260);
	assign C = ~blank & (hcount >= 190 & hcount <= 215 & vcount >= 260 & vcount <= 367);
	assign D = ~blank & (hcount >= 100 & hcount <= 215 & vcount >= 342 & vcount <= 367);
	assign E = ~blank & (hcount >= 100 & hcount <= 125 & vcount >= 260 & vcount <= 367);
	assign F = ~blank & (hcount >= 100 & hcount <= 125 & vcount >= 167 & vcount <= 260);
	assign G = ~blank & (hcount >= 100 & hcount <= 215 & vcount >= 255 & vcount <= 280);
	
	assign A2 = ~blank & (hcount >= 230 & hcount <= 345 & vcount >= 167 & vcount <= 192);
	assign B2 = ~blank & (hcount >= 320 & hcount <= 345 & vcount >= 167 & vcount <= 260);
	assign C2 = ~blank & (hcount >= 320 & hcount <= 345 & vcount >= 260 & vcount <= 367);
	assign D2 = ~blank & (hcount >= 230 & hcount <= 345 & vcount >= 342 & vcount <= 367);
	assign E2 = ~blank & (hcount >= 230 & hcount <= 255 & vcount >= 260 & vcount <= 367);
	assign F2 = ~blank & (hcount >= 230 & hcount <= 255 & vcount >= 167 & vcount <= 260);
	assign G2 = ~blank & (hcount >= 230 & hcount <= 345 & vcount >= 255 & vcount <= 280);
	
	assign A3 = ~blank & (hcount >= 380 & hcount <= 495 & vcount >= 167 & vcount <= 192);
	assign B3 = ~blank & (hcount >= 470 & hcount <= 495 & vcount >= 167 & vcount <= 260);
	assign C3 = ~blank & (hcount >= 470 & hcount <= 495 & vcount >= 260 & vcount <= 367);
	assign D3 = ~blank & (hcount >= 380 & hcount <= 495 & vcount >= 342 & vcount <= 367);
	assign E3 = ~blank & (hcount >= 380 & hcount <= 405 & vcount >= 260 & vcount <= 367);
	assign F3 = ~blank & (hcount >= 380 & hcount <= 405 & vcount >= 167 & vcount <= 260);
	assign G3 = ~blank & (hcount >= 380 & hcount <= 495 & vcount >= 255 & vcount <= 280);
	
	assign A4 = ~blank & (hcount >= 510 & hcount <= 625 & vcount >= 167 & vcount <= 192);
	assign B4 = ~blank & (hcount >= 600 & hcount <= 625 & vcount >= 167 & vcount <= 260);
	assign C4 = ~blank & (hcount >= 600 & hcount <= 625 & vcount >= 260 & vcount <= 367);
	assign D4 = ~blank & (hcount >= 510 & hcount <= 625 & vcount >= 342 & vcount <= 367);
	assign E4 = ~blank & (hcount >= 510 & hcount <= 535 & vcount >= 260 & vcount <= 367);
	assign F4 = ~blank & (hcount >= 510 & hcount <= 535 & vcount >= 167 & vcount <= 260);
	assign G4 = ~blank & (hcount >= 510 & hcount <= 625 & vcount >= 255 & vcount <= 280);
	
	assign figure0 = (A||B||C||D||E||F)&&en0;
	assign figure1 = (B||C)&&en1;
	assign figure2 = (A||B||D||E||G)&&en2;
	assign figure3 = (A||B||C||D||G)&&en3;
	assign figure4 = (B||C||F||G)&&en4;
	assign figure5 = (A||C||D||F||G)&&en5;
	assign figure6 = (A||C||D||E||F||G)&&en6;
	assign figure7 = (A||B||C)&&en7;
	assign figure8 = (A||B||C||D||E||F||G)&&en8;
	assign figure9 = (A||B||C||D||F||G)&&en9;
	
	assign figure02 = (A2||B2||C2||D2||E2||F2)&&en02;
	assign figure12 = (B2||C2)&&en12;
	assign figure22 = (A2||B2||D2||E2||G2)&&en22;
	assign figure32 = (A2||B2||C2||D2||G2)&&en32;
	assign figure42 = (B2||C2||F2||G2)&&en42;
	assign figure52 = (A2||C2||D2||F2||G2)&&en52;
	assign figure62 = (A2||C2||D2||E2||F2||G2)&&en62;
	assign figure72 = (A2||B2||C2)&&en72;
	assign figure82 = (A2||B2||C2||D2||E2||F2||G2)&&en82;
	assign figure92 = (A2||B2||C2||D2||F2||G2)&&en92;
	
	assign figure03 = (A3||B3||C3||D3||E3||F3)&&en03;
	assign figure13 = (B3||C3)&&en13;
	assign figure23 = (A3||B3||D3||E3||G3)&&en23;
	assign figure33 = (A3||B3||C3||D3||G3)&&en33;
	assign figure43 = (B3||C3||F3||G3)&&en43;
	assign figure53 = (A3||C3||D3||F3||G3)&&en53;
	assign figure63 = (A3||C3||D3||E3||F3||G3)&&en63;
	assign figure73 = (A3||B3||C3)&&en73;
	assign figure83 = (A3||B3||C3||D3||E3||F3||G3)&&en83;
	assign figure93 = (A3||B3||C3||D3||F3||G3)&&en93;
	
	assign figure04 = (A4||B4||C4||D4||E4||F4)&&en04;
	assign figure14 = (B4||C4)&&en14;
	assign figure24 = (A4||B4||D4||E4||G4)&&en24;
	assign figure34 = (A4||B4||C4||D4||G4)&&en34;
	assign figure44 = (B4||C4||F4||G4)&&en44;
	assign figure54 = (A4||C4||D4||F4||G4)&&en54;
	assign figure64 = (A4||C4||D4||E4||F4||G4)&&en64;
	assign figure74 = (A4||B4||C4)&&en74;
	assign figure84 = (A4||B4||C4||D4||E4||F4||G4)&&en84;
	assign figure94 = (A4||B4||C4||D4||F4||G4)&&en94;
	
	always @ (posedge clk) begin
		case(num1)
			4'b0000:begin
				en0=1;
				en1=0;
				en2=0;
				en3=0;
				en4=0;
				en5=0;
				en6=0;
				en7=0;
				en8=0;
				en9=0;
			end
			4'b0001:begin
				en0=0;
				en1=1;
				en2=0;
				en3=0;
				en4=0;
				en5=0;
				en6=0;
				en7=0;
				en8=0;
				en9=0;
			end
			4'b0010:begin
				en0=0;
				en1=0;
				en2=1;
				en3=0;
				en4=0;
				en5=0;
				en6=0;
				en7=0;
				en8=0;
				en9=0;
			end
			4'b0011:begin
				en0=0;
				en1=0;
				en2=0;
				en3=1;
				en4=0;
				en5=0;
				en6=0;
				en7=0;
				en8=0;
				en9=0;
			end
			4'b0100:begin
				en0=0;
				en1=0;
				en2=0;
				en3=0;
				en4=1;
				en5=0;
				en6=0;
				en7=0;
				en8=0;
				en9=0;
			end
			4'b0101:begin
				en0=0;
				en1=0;
				en2=0;
				en3=0;
				en4=0;
				en5=1;
				en6=0;
				en7=0;
				en8=0;
				en9=0;
			end
			4'b0110:begin
				en0=0;
				en1=0;
				en2=0;
				en3=0;
				en4=0;
				en5=0;
				en6=1;
				en7=0;
				en8=0;
				en9=0;
			end
			4'b0111:begin
				en0=0;
				en1=0;
				en2=0;
				en3=0;
				en4=0;
				en5=0;
				en6=0;
				en7=1;
				en8=0;
				en9=0;
			end
			4'b1000:begin
				en0=0;
				en1=0;
				en2=0;
				en3=0;
				en4=0;
				en5=0;
				en6=0;
				en7=0;
				en8=1;
				en9=0;
			end
			4'b1001:begin
				en0=0;
				en1=0;
				en2=0;
				en3=0;
				en4=0;
				en5=0;
				en6=0;
				en7=0;
				en8=0;
				en9=1;
			end
			default: begin
				en0=0;
				en1=0;
				en2=0;
				en3=0;
				en4=0;
				en5=0;
				en6=0;
				en7=0;
				en8=0;
				en9=1;
				end
		endcase
		
		//num2
		case(num2)
			4'b0000:begin
				en02=1;
				en12=0;
				en22=0;
				en32=0;
				en42=0;
				en52=0;
				en62=0;
				en72=0;
				en82=0;
				en92=0;
			end
			4'b0001:begin
				en02=0;
				en12=1;
				en22=0;
				en32=0;
				en42=0;
				en52=0;
				en62=0;
				en72=0;
				en82=0;
				en92=0;
			end
			4'b0010:begin
				en02=0;
				en12=0;
				en22=1;
				en32=0;
				en42=0;
				en52=0;
				en62=0;
				en72=0;
				en82=0;
				en92=0;
			end
			4'b0011:begin
				en02=0;
				en12=0;
				en22=0;
				en32=1;
				en42=0;
				en52=0;
				en62=0;
				en72=0;
				en82=0;
				en92=0;
			end
			4'b0100:begin
				en02=0;
				en12=0;
				en22=0;
				en32=0;
				en42=1;
				en52=0;
				en62=0;
				en72=0;
				en82=0;
				en92=0;
			end
			4'b0101:begin
				en02=0;
				en12=0;
				en22=0;
				en32=0;
				en42=0;
				en52=1;
				en62=0;
				en72=0;
				en82=0;
				en92=0;
			end
			4'b0110:begin
				en02=0;
				en12=0;
				en22=0;
				en32=0;
				en42=0;
				en52=0;
				en62=1;
				en72=0;
				en82=0;
				en92=0;
			end
			4'b0111:begin
				en02=0;
				en12=0;
				en22=0;
				en32=0;
				en42=0;
				en52=0;
				en62=0;
				en72=1;
				en82=0;
				en92=0;
			end
			4'b1000:begin
				en02=0;
				en12=0;
				en22=0;
				en32=0;
				en42=0;
				en52=0;
				en62=0;
				en72=0;
				en82=1;
				en92=0;
			end
			4'b1001:begin
				en02=0;
				en12=0;
				en22=0;
				en32=0;
				en42=0;
				en52=0;
				en62=0;
				en72=0;
				en82=0;
				en92=1;
			end
			default: begin
				en02=0;
				en12=0;
				en22=0;
				en32=0;
				en42=0;
				en52=0;
				en62=0;
				en72=0;
				en82=0;
				en92=1;
				end
		endcase
		
		//num3
		case(num3)
			4'b0000:begin
				en03=1;
				en13=0;
				en23=0;
				en33=0;
				en43=0;
				en53=0;
				en63=0;
				en73=0;
				en83=0;
				en93=0;
			end
			4'b0001:begin
				en03=0;
				en13=1;
				en23=0;
				en33=0;
				en43=0;
				en53=0;
				en63=0;
				en73=0;
				en83=0;
				en93=0;
			end
			4'b0010:begin
				en03=0;
				en13=0;
				en23=1;
				en33=0;
				en43=0;
				en53=0;
				en63=0;
				en73=0;
				en83=0;
				en93=0;
			end
			4'b0011:begin
				en03=0;
				en13=0;
				en23=0;
				en33=1;
				en43=0;
				en53=0;
				en63=0;
				en73=0;
				en83=0;
				en93=0;
			end
			4'b0100:begin
				en03=0;
				en13=0;
				en23=0;
				en33=0;
				en43=1;
				en53=0;
				en63=0;
				en73=0;
				en83=0;
				en93=0;
			end
			4'b0101:begin
				en03=0;
				en13=0;
				en23=0;
				en33=0;
				en43=0;
				en53=1;
				en63=0;
				en73=0;
				en83=0;
				en93=0;
			end
			4'b0110:begin
				en03=0;
				en13=0;
				en23=0;
				en33=0;
				en43=0;
				en53=0;
				en63=1;
				en73=0;
				en83=0;
				en93=0;
			end
			4'b0111:begin
				en03=0;
				en13=0;
				en23=0;
				en33=0;
				en43=0;
				en53=0;
				en63=0;
				en73=1;
				en83=0;
				en93=0;
			end
			4'b1000:begin
				en03=0;
				en13=0;
				en23=0;
				en33=0;
				en43=0;
				en53=0;
				en63=0;
				en73=0;
				en83=1;
				en93=0;
			end
			4'b1001:begin
				en03=0;
				en13=0;
				en23=0;
				en33=0;
				en43=0;
				en53=0;
				en63=0;
				en73=0;
				en83=0;
				en93=1;
			end
			default: begin
				en03=0;
				en13=0;
				en23=0;
				en33=0;
				en43=0;
				en53=0;
				en63=0;
				en73=0;
				en83=0;
				en93=1;
				end
		endcase
		
		//num4
		case(num4)
			4'b0000:begin
				en04=1;
				en14=0;
				en24=0;
				en34=0;
				en44=0;
				en54=0;
				en64=0;
				en74=0;
				en84=0;
				en94=0;
			end
			4'b0001:begin
				en04=0;
				en14=1;
				en24=0;
				en34=0;
				en44=0;
				en54=0;
				en64=0;
				en74=0;
				en84=0;
				en94=0;
			end
			4'b0010:begin
				en04=0;
				en14=0;
				en24=1;
				en34=0;
				en44=0;
				en54=0;
				en64=0;
				en74=0;
				en84=0;
				en94=0;
			end
			4'b0011:begin
				en04=0;
				en14=0;
				en24=0;
				en34=1;
				en44=0;
				en54=0;
				en64=0;
				en74=0;
				en84=0;
				en94=0;
			end
			4'b0100:begin
				en04=0;
				en14=0;
				en24=0;
				en34=0;
				en44=1;
				en54=0;
				en64=0;
				en74=0;
				en84=0;
				en94=0;
			end
			4'b0101:begin
				en04=0;
				en14=0;
				en24=0;
				en34=0;
				en44=0;
				en54=1;
				en64=0;
				en74=0;
				en84=0;
				en94=0;
			end
			4'b0110:begin
				en04=0;
				en14=0;
				en24=0;
				en34=0;
				en44=0;
				en54=0;
				en64=1;
				en74=0;
				en84=0;
				en94=0;
			end
			4'b0111:begin
				en04=0;
				en14=0;
				en24=0;
				en34=0;
				en44=0;
				en54=0;
				en64=0;
				en74=1;
				en84=0;
				en94=0;
			end
			4'b1000:begin
				en04=0;
				en14=0;
				en24=0;
				en34=0;
				en44=0;
				en54=0;
				en64=0;
				en74=0;
				en84=1;
				en94=0;
			end
			4'b1001:begin
				en04=0;
				en14=0;
				en24=0;
				en34=0;
				en44=0;
				en54=0;
				en64=0;
				en74=0;
				en84=0;
				en94=1;
			end
			default: begin
				en04=0;
				en14=0;
				en24=0;
				en34=0;
				en44=0;
				en54=0;
				en64=0;
				en74=0;
				en84=0;
				en94=1;
				end
		endcase
	end
	
	
	// send colors:
	always @ (posedge clk) begin
		if (figure0||figure1||figure2||figure3||figure4||figure5||figure6||figure7||figure8||figure9||figure02||figure12||figure22||figure32||figure42||figure52||figure62||figure72||figure82||figure92|| figure03||figure13||figure23||figure33||figure43||figure53||figure63||figure73||figure83||figure93|| figure04||figure14||figure24||figure34||figure44||figure54||figure64||figure74||figure84||figure94) begin	// if you are within the valid region
			R = R_control;
			Green = G_control;
			Blue = B_control; 
		end
		else begin	// if you are outside the valid region
			R = 0;
			Green = 0;
			Blue = 0;
		end
	end

endmodule
