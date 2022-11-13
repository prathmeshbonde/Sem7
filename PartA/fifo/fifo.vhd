library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity fifo is
    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           datain : in  STD_LOGIC_VECTOR (7 downto 0);
           wrd : in  STD_LOGIC;
           dataout : out  STD_LOGIC_VECTOR (7 downto 0);
           empty : inout  STD_LOGIC;
           full : inout  STD_LOGIC);
end fifo;

architecture fifo_arch of fifo is
TYPE MEMORY IS ARRAY(0 TO 3) OF STD_LOGIC_VECTOR(7 DOWNTO 0);
SIGNAL mem : MEMORY := (X"00", X"00", X"00", X"00");
SIGNAL front : integer :=0;
SIGNAL rear : integer :=0;

begin
PROCESS(rst,clk,wrd,datain,empty,full)
begin
	if rst='1' then
			mem <= (X"00", X"00", X"00", X"00");
			dataout <=X"00";
			empty <='1';
			full <='0';
			front <=0;
			rear <=0;
	elsif rising_edge(clk) then
			if wrd='1' then 
				if (rear>3 or full='1') then 
					full <='1';
				else 
					mem(rear) <= datain;
					rear <= rear+1;
					empty <='0';
					if(rear >=3 ) then
						full <='1';
					end if;
				end if;
			else 
					if empty='1' then
						empty <='1';
					elsif front=3 then
						dataout <= mem(front);
					else
						dataout <= mem(front);
						front <= front + 1;
					end if;
		 end if;
	end if;
end process;

end fifo_arch;

