#include <iostream>

using namespace std;

int main ()
{
    int i = 0;
    
inicio:
    if(i==20) goto fim;
    cout << i << endl;
    i++;
    goto inicio;
fim:
    return 0;
}
