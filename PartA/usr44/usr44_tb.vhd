
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
 
ENTITY usr44_tb IS
END usr44_tb;
 
ARCHITECTURE behavior OF usr44_tb IS 
 
 
    COMPONENT usr44
    PORT(
         rst : IN  std_logic;
         clk : IN  std_logic;
         mode : IN  std_logic_vector(1 downto 0);
         sin : IN  std_logic;
         pin : IN  std_logic_vector(3 downto 0);
         sout : OUT  std_logic;
         pout : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal mode : std_logic_vector(1 downto 0) := (others => '0');
   signal sin : std_logic := '0';
   signal pin : std_logic_vector(3 downto 0) := "1010";

 
   signal sout : std_logic;
   signal pout : std_logic_vector(3 downto 0);

   constant clk_period : time := 10 ns;
 
BEGIN
 
	
   uut: usr44 PORT MAP (
          rst => rst,
          clk => clk,
          mode => mode,
          sin => sin,
          pin => pin,
          sout => sout,
          pout => pout
        );

   clk_process :process
   begin
		clk <= '1';
		wait for clk_period/2;
		clk <= '0';
		wait for clk_period/2;
   end process;
 

   stim_proc_mode: process
   begin		
      mode <= "00" ;
		wait for 80 ns;
		mode <= "01" ;
		wait for 50 ns;
		mode <= "10" ;
		wait for 50 ns;
		mode <= "11" ;
		wait for 20 ns;
   end process;
	
	sin_proc: process
	begin
		sin<='1';
		wait for 10 ns;
		sin<='0';
		wait for 10 ns;
		sin<='1';
		wait for 10 ns;
		sin<='0';
		wait for 50 ns;
		sin<='1';
		wait for 10 ns;
		sin<='0';
		wait for 10 ns;
		sin<='1';
		wait for 10 ns;
		sin<='0';
		wait;
	
	end process;

END;
