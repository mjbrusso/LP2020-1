
class Cidade{
   public String nome;	// Atributos desencapsulados para simplificar o exemplo
   public String uf;
   
   public Cidade(String pnome, String puf){
       this.nome = pnome;
       this.uf = puf;
   }
   
   public void show()
   {
       System.out.println(this.nome + "-" + this.uf);
   }
}

class P6_2_1_4_direcao
{
	public static void main (String[] args) 
	{
		Cidade cid = new Cidade("Passo Fundo", "RS");
        cid.show();
        altera(cid);
        cid.show();
	}
	
	static void altera(Cidade c)
	{
		c = new Cidade("Sorriso", "SC");
		c.show();
	}
}
