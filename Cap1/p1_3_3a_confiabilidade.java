class Confiabilidade{
	public static void main (String[] args) {
		boolean u = true;
		int v = 0;
		while (u && v < 9){
			v = u + 2;	
			if (v == 6)
				u = false;            
		}
	}
}
