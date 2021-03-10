program enumexe;
	type 
		Estacao = (Verao, Outono, Inverno, Primavera);
	var 
		s : Estacao;
begin
	s := Primavera;
	writeln(Integer(s));
end.
