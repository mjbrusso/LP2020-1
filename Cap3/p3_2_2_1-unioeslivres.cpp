#include <iostream>

union foo{		// 258
	bool bar;	// 2
	char biz;	// 256
}

foo massa;

union medida{
	int centimetros; 
	double metros;	
};

int main()
{
	medida tam;

	tam.centimetros = 125;
	std::cout << "Centimetros: " << tam.centimetros << std:: endl
			  << "Metros (inválido): " << tam.metros << std:: endl  << std:: endl;	

	tam.metros = 1.25;
	std::cout << "Centimetros (inválido): " << tam.centimetros << std:: endl
			  << "Metros: " << tam.metros << std:: endl  << std:: endl;	
	
    return 0;
}
