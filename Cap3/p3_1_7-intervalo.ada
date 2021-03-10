with Ada.Integer_Text_IO;

procedure Teste is
	subtype Rating is Integer range 1..5;
	r: Rating;
begin
	r := 4;
	Ada.Integer_Text_IO.Put(r);
end;
