LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_unsigned.ALL;

 
ENTITY alu48_tb IS
END alu48_tb;
 
ARCHITECTURE behavior OF alu48_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT alu48
    PORT(
         A : IN  std_logic_vector(3 downto 0);
         B : IN  std_logic_vector(3 downto 0);
         F : IN  std_logic_vector(2 downto 0);
         Y : OUT  std_logic_vector(3 downto 0);
         C_B : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(3 downto 0) := "1111";
   signal B : std_logic_vector(3 downto 0) := "1100";
   signal F : std_logic_vector(2 downto 0) := (others => '0');

 	--Outputs
   signal Y : std_logic_vector(3 downto 0);
   signal C_B : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: alu48 PORT MAP (
          A => A,
          B => B,
          F => F,
          Y => Y,
          C_B => C_B
        );
 

   -- Stimulus process
   stim_proc: process
   begin		
	
     F <= F + 1;
	  wait for 10 ns;

   end process;

END;
