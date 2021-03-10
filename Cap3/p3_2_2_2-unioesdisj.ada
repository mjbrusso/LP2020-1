with Ada.Text_IO;           use Ada.Text_IO;
with Ada.Integer_Text_IO;   use Ada.Integer_Text_IO;
with Ada.Float_Text_IO;   	use Ada.Float_Text_IO;

procedure Main is
	type UnidadeMedida is (centimetros, metros);
	type Medida (unidade : UnidadeMedida := centimetros) is
		 record
			case unidade is
				when centimetros => Ivalue : integer;
				when metros =>	Fvalue : float;
			end case;
      end record;    
      
      tamanho: Medida;   
begin
  	 tamanho := (centimetros, 150); 	 	
  	 
	 case tamanho.unidade is
		  when centimetros 	=> Put(tamanho.Ivalue);
		  when metros 		=> Put(tamanho.Fvalue);	
	 end case;
			
end Main;
