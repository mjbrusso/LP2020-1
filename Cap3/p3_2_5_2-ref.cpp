#include <iostream>

using namespace std;


int main()
{
	int a = 5;
	int &b = a;
	
	b = 10;
	cout << b << ' ' << a << endl
		 << &a << endl
		 << &b << endl;
	
    return 0;
}
