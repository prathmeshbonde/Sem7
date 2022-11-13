
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 

 
ENTITY fifo_tb IS
END fifo_tb;
 
ARCHITECTURE behavior OF fifo_tb IS 
 
 
    COMPONENT fifo
    PORT(
         rst : IN  std_logic;
         clk : IN  std_logic;
         datain : IN  std_logic_vector(7 downto 0);
         wrd : IN  std_logic;
         dataout : OUT  std_logic_vector(7 downto 0);
         empty : INOUT  std_logic;
         full : INOUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal datain : std_logic_vector(7 downto 0) := (others => '0');
   signal wrd : std_logic := '0';

	--BiDirs
   signal empty : std_logic;
   signal full : std_logic;

 	--Outputs
   signal dataout : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: fifo PORT MAP (
          rst => rst,
          clk => clk,
          datain => datain,
          wrd => wrd,
          dataout => dataout,
          empty => empty,
          full => full
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '1';
		wait for clk_period/2;
		clk <= '0';
		wait for clk_period/2;
   end process;
 
  wrd_proc: process
  begin
    wrd <='1';
	   wait for 40 ns;
	  wrd <='0';
		wait for 40 ns;
	end process;
   -- Stimulus process
   rst_proc: process
   begin	
     wait for 92.5 ns;
	  rst <='1';
	  wait for 112.5 ns;
	  rst <='0';
	  wait;
	 end process;
	 
  datain_proc : process
  begin 
   datain <=X"17";
	wait for 10 ns;
	datain <=X"27";
	wait for 10 ns;
	datain <=X"37";
	wait for 10 ns;
	datain <=X"47";
	wait for 10 ns;
  end process;

END;
