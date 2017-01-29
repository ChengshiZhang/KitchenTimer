
-- VHDL Instantiation Created from source file Debouncer.vhd -- 21:13:24 04/19/2016
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Debouncer
	PORT(
		clk : IN std_logic;
		PB : IN std_logic;          
		PB_state : OUT std_logic;
		PB_down : OUT std_logic;
		PB_up : OUT std_logic
		);
	END COMPONENT;

	Inst_Debouncer: Debouncer PORT MAP(
		clk => ,
		PB => ,
		PB_state => ,
		PB_down => ,
		PB_up => 
	);


