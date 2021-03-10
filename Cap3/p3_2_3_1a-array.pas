program enumexe;
	type intervalo = 1..50;
		 estacoes = (verao, outono, primavera, inverno);
	var a: array[intervalo] of char;
	    b: array[char] of real;
	    c: array[boolean] of string;
	    temperaturamedia: array[estacoes] of real;
		s: string;	
		podenevar: array[estacoes] of boolean;
begin
	a[1] := 'A';
	writeln(a[1]);
	
	b['X'] := 1.75;
	writeln(b['X']);
	
	c[true]:= 'Sim';
	c[false] := 'Não';
	
	for s in c do
		writeln(s);
				
	temperaturamedia[verao] := 32.2;
	temperaturamedia[outono] := 12.5;
	
	podenevar[verao] := false;	
	podenevar[outono] := false;	
	podenevar[inverno] := true;
	podenevar[primavera] := false;	
end.
