#include <iostream>

struct foo{
	bool bar;	//	2
	char biz;   //  256
};

foo massa;



struct funcionario{
	int matricula;
	char nome[50];
	float salario;
};

int main()
{
	funcionario f {12345, "Fulano de Tal", 1575.0};
	
	std::cout << "Sizeof f: " << sizeof(f) << std:: endl	
			  << "    Sizeof f.matricula: " << sizeof(f.matricula) << std:: endl
			  << "    Sizeof f.nome: " << sizeof(f.nome) << std:: endl
			  << "    Sizeof f.salario: " << sizeof(f.salario) << std:: endl;
			
    return 0;
}
