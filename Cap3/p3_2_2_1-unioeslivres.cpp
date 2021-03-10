#include <iostream>

union medida{
	int centimetros;
	double metros;	
};

int main()
{
	medida tam;

	std::cout << "Sizeof medida: " << sizeof(tam) << std:: endl
			  << "    Sizeof centimetro: " << sizeof(tam.centimetros) << std:: endl
			  << "    Sizeof metros: " << sizeof(tam.metros) << std:: endl  << std:: endl;
		
	tam.centimetros = 125;
	std::cout << "Centimetros: " << tam.centimetros << std:: endl
			  << "Metros (inválido): " << tam.metros << std:: endl  << std:: endl;	

	tam.metros = 1.25;
	std::cout << "Centimetros (inválido): " << tam.centimetros << std:: endl
			  << "Metros: " << tam.metros << std:: endl  << std:: endl;	
	
    return 0;
}
