

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;



entity usr44 is
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           mode : in  STD_LOGIC_VECTOR (1 downto 0);
           sin : in  STD_LOGIC;
           pin : in  STD_LOGIC_VECTOR (3 downto 0);
           sout : out  STD_LOGIC;
           pout : out  STD_LOGIC_VECTOR (3 downto 0));
end usr44;

architecture usr44_arch of usr44 is

signal temp : STD_LOGIC_VECTOR (3 downto 0) := "0000";
signal flag : STD_LOGIC := '0';

begin

process (rst,clk,mode,sin,pin)
begin
    if rst='1' then 
	    sout <= '0';
		 pout <= "0000";
	elsif rising_edge(clk) then 
		 case mode is 
			   when "00" => 
					temp(3 downto 1) <= temp(2 downto 0);
					temp(0)<=sin;
					sout<= temp(3);
					pout<="0000";
					flag <='0';
			   when "01" =>
					temp(3 downto 1) <= temp(2 downto 0);
					temp(0)<=sin;
					pout<=temp;
					sout<='0';
					flag<='0';
				when "10" =>
					if flag='0' then 
						temp<= pin ;
						pout<="0000";
					else 
						 sout<=temp(3);
						 pout<="0000";
				       temp(3 downto 1)<=temp(2 downto 0);
					end if ;
					flag<='1';
					
					when others =>
						temp<= pin;
						pout<=temp;
						sout<='0';
						flag<='0';
		end case;
		end if;
end process;

end usr44_arch;

