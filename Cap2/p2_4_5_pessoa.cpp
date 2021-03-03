#include <string>
#include <iostream>

struct data{
    int d, m, a;
};

struct pessoa{
	std::string nome;
	data nascimento;		// Definição sequencial (aninhamento de tipo)
	pessoa *pai;			// Definição recursiva (via ponteiro)
};

void exibe_pessoa(pessoa& p, int identacao)
{
	std::cout << p.nome 
			  << ", " 
			  << p.nascimento.d 
			  << "/" << p.nascimento.m
			  << "/" << p.nascimento.a 
			  << std::endl;
			  
	if(p.pai!=nullptr){
		identacao += 2;
		std::cout << std::string(identacao, ' ') << "Filho de " ;
		exibe_pessoa(*p.pai, identacao); 		// Definição recursiva
	}
}

int main()
{
	pessoa p1{"Fulano", {15, 12, 1950}, nullptr};
	pessoa p2{"Cicrano", {8, 10, 2075}, &p1};
	pessoa p3{"Beltrano", {1, 8, 2013}, &p2};
	
	exibe_pessoa(p3, 0);
}
