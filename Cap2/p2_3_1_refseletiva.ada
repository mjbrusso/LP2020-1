with Ada.Text_IO;           use Ada.Text_IO;
with Ada.Integer_Text_IO;   use Ada.Integer_Text_IO;
procedure A is
   x : INTEGER := 5;
   procedure B is
      x : INTEGER := 10;
   begin
      	Put(x);
        Put(A.x);
   end B;
begin
  	 Put(x);
  	 B;
end A;
