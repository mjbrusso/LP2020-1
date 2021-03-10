#include <iostream>

using namespace std;

enum estacao{
	verao, outono, inverno, primavera
};

int main()
{
	estacao e = estacao::inverno;
	cout <<  (int) e << endl;
	
    return 0;
}
