#include <iostream>


void foo()	
{
	const float PI=3.14;		// Constante C++
	
	#define C_PI 3.14			// Constante C (macro)
	
	std::cout << PI << std::endl;
	std::cout << C_PI << std::endl;	
}

int main()
{
	//std::cout << PI << std::endl;
	std::cout << C_PI << std::endl;

	foo();
    return 0;
}
