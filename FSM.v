`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:15:46 04/12/2016 
// Design Name: 
// Module Name:    FSM 
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


	//debounced[4:0]
	//	4 start
	//	3 reset
	//	2 pause
	//	1 minute
	//	0 second
	
	
module FSM(clk, in, timeUp, min, sec);
	input clk;
	input [12:0]in; 
	output reg [5:0]min;
	output reg [5:0]sec;
	output reg timeUp;
	wire clk_out;
	wire [4:0] debounced;
	reg[1:0]state;
	reg[2:0]five;
	reg internal_pause;
	
	parameter set = 0;
	parameter count = 1;
	parameter pause = 2;

	//Call the clock divider, pass in 0 to get the actual time clock
	clock_divider clk1(.in_clk(clk),.out_clk(clk_out), .seg(1'b0) );
	
		//start
	Debouncer PB_debouncer(
			.clk(clk),
			.PB(in[12]),
			.PB_state(debounced[4])
	);
	//reset
	Debouncer PB_debouncer2(
			.clk(clk),
			.PB(in[11]),
			.PB_state(debounced[3])
	);
	//pause
	Debouncer PB_debouncer3(
			.clk(clk),
			.PB(in[10]),
			.PB_state(debounced[2])
	);
	//minute
	Debouncer PB_debouncer4(
			.clk(clk),
			.PB(in[7]),
			.PB_state(debounced[1])
	);
	//second
	Debouncer PB_debouncer5(
			.clk(clk),
			.PB(in[6]),
			.PB_state(debounced[0])
	);

	
	always @(posedge clk_out) 
	begin
	//master reset button
	if (debounced[3])
	begin
		//initialize the state to set, and set everything to 0
		state <= set;
		five <= 0;
		min <= 6'b000000;
		sec <= 6'b000000;
		timeUp <= 0;
	
	end
	
	else begin
		case(state)
		
		//set state only sets up the minutes and seconds
		set:
			begin
			if(debounced[1])
					min <= in[5:0];
			if(debounced[0])
					sec <= in[5:0];
			if(debounced[4])
					state <= count;
			end 
			
		//count state has four different situations: up&slow, up&fast, down&slow, down&fast
		count:
			begin
			if(debounced[2])begin
					state <= pause;
					internal_pause <= 0;
			end
			//UP
			if(in[9])begin
			 
			timeUp <= 0;
					//up&slow
					if(~in[8])begin
						five <= five + 1'b1;
						if(five == 5)begin
							if(sec == 59)begin
								if(min == 59)begin
									min <= 0;
								end
								else begin
									min <= min + 1'b1;
								end
									sec <= 0;
								
							end
							else begin
								sec <= sec + 1'b1;
							end
							five <= 0;
						end
					end
					
					//up&fast
					if(in[8])begin
						if(sec == 59)begin
							if(min == 59)begin
									min <= 0;
								end
								else begin
									min <= min + 1'b1;
								end
							sec <= 0;
						end
						else
							sec <= sec + 1'b1;
					end
			end
			
			//DOWN
			if(~in[9])begin
				
				//down&slow
				if(~in[8])begin
						five <= five + 1'b1;
						if(five == 5)begin
							if(sec == 0)begin
								if(min == 0)
									timeUp <= 1;
								else begin
									min <= min - 1'b1;
									sec <= 59;
								end
							end
							else begin
								sec <= sec - 1'b1;
							end
							five <= 0;
						end
				end
				
				//down&fast
				if(in[8])begin
						if(sec == 0)begin
							if(min == 0)
								timeUp <= 1;
							else begin 
								min <= min - 1'b1;
								sec <= 59;
							end
						end
						else
							sec <= sec - 1'b1;
				end
				
			end
			end
			
		//the internal pause variable prevents accidental toggle
		pause:
			begin
			if(debounced[2] && internal_pause)begin
				state  <= count;
				internal_pause <= 0;
			end
			else
				internal_pause <= 1;
			end
			
		default: $display("Error in case statement.");
		
		endcase
		end
	end
				

endmodule
