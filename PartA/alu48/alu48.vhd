library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity alu48 is
    Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
           B : in  STD_LOGIC_VECTOR (3 downto 0);
           F : in  STD_LOGIC_VECTOR (2 downto 0);
           Y : out  STD_LOGIC_VECTOR (3 downto 0);
           C_B : out  STD_LOGIC);
end alu48;

architecture alu48_arch of alu48 is

signal result : STD_LOGIC_VECTOR (4 downto 0):="00000";

begin

PROCESS( A, B, F)
	begin
	  if F="000" then
		  result<= '0' & (A XNOR B);
	  elsif F="001" then
		  result<= '0' & NOT(B);
	  elsif F="010" then
		  result<= '0' & (A NAND B);
	  elsif F="011" then
		  result<= '0' & (A AND B);
	  elsif F="100" then
		  result<= '0' & (A NOR B);
	  elsif F="101" then
		  result<= '0' & (A OR B);
	  elsif F="110" then
		 result<= ('0' & A) + ('0' & B);
	  else
		 if(A<B) then 
			result<= ('0' & NOT(B)); 
			result<=result + 1;
			result<=result + ('0' & A);
			result<= NOT(result) + 1;
			result<= (NOT(('0' & A) + ('0' & (NOT B)) + 1)) +1 ;
		 else
			result<= ('0' & A) - ('0' & B);	 
		 end if;
	  end if;
	end process;
C_B<= result(4);
Y<= result(3 downto 0);

end alu48_arch;

