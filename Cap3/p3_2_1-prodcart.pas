program prodcart;
type 
	Point2D = record
		x: integer;
		y: integer;
	end;
	
	var p : Point2D;
begin
	p.x := 10; 
	p.y := 20;
	with p do begin
		writeln(x, ':',  y);
	end;
end.

