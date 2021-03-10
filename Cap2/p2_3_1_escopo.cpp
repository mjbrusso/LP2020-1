#include <iostream>

float a=0.5;

void f()
{
	int a=50;
	std::cout << a << std::endl; // Exibe int local 
}

int main()
{
    int a = 2;
	std::cout << a << std::endl; 
 
	if(a>0){
		char a='x';
		std::cout << a << std::endl; // Exibe char do bloco aninhado
	}

	std::cout << a << std::endl; // Exibe int local 
	
	f();
    
    return 0;
}
