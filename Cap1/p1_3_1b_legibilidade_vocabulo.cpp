#include <iostream>

using namespace std;

int main ()
{
    int a=5, b=10, c, *p = &a;
    
    c = b**p;
    
    cout << c << endl;
    return 0;
}
