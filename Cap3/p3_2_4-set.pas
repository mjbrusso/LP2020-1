program enumexe;
	TYPE
		Carros = (corsa, palio, gol, jetta);
	VAR
		carro: Carros;
		carrosPequenos, carrosVW, carrosPeqVW: SET OF Carros;
BEGIN
	carrosPequenos:= [palio, gol];				(* atribuição *)
	carrosPequenos := carrosPequenos + [corsa, gol]; (* união *)
	
	writeln('Carros pequenos:');		
	FOR carro IN carrosPequenos DO
		writeln(carro);
	
	writeln;
	carro:= corsa;
	IF carro IN carrosPequenos THEN 			(* pertinência *)
		writeln(carro , ' é pequeno');		
	
	writeln;
	carrosVW := [gol, jetta];					(* atribuição *)		
	carrosPeqVW:= carrosPequenos * carrosVW;	(* intersecção *)
	writeln('Carros pequenos VW:');		
	FOR carro IN carrosPeqVW DO
		writeln(carro);
	
	writeln;
	IF carrosPequenos >= [gol, corsa] THEN		(* contêm *)
		writeln('Contêm')
	ELSE
		writeln('Não contêm');
		
END.
