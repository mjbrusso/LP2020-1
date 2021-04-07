#include <iostream>
#include <cmath>
 
int caso (int x, int w, int y, int z) {
	if (x < 0) return w;
	if (x > 0) return y;
	return z;
}

int fatorial(int n){
	return (n==0) ? 1 : n*fatorial(n-1);
}

int main()
{
	
	int a;
	std::cin >> a;
	
	int b = caso(a, pow(a, 3), fatorial(abs(a)), a*a); // C/C++ só oferece "eager evaluation"	
	
	std::cout << b << std::endl;
	return 0;
}
