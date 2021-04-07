#include <iostream>
 
void fn( int a,			// Unidirecional de Entrada Variável
		 const int b,	// Unidirecional de Entrada Constante
		 int	&c		// Bidirecional de Entrada e Saída, através de passagem por referência
	   )				// C++ não tem parâmetro unidirecional de saída
{
	a *= 2;
    //b *= 2; // Não compila pois b é entrada constante
	c *= 2;
	std::cout << "Na função: " << a << ' ' << b << ' ' << c << std::endl;
}

int main()
{
	int n1=5, n2=50, n3=500;

	std::cout << "Antes: " <<n1 << ' ' << n2 << ' ' << n3 << std::endl;	
	fn(n1, n2, n3);
	std::cout << "Depois: " << n1 << ' ' << n2 << ' ' << n3 << std::endl;
	
	return 0;
}
