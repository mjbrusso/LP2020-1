#include <iostream>

using namespace std;

int main ()
{
    int vet[3]={10, 20, 30};
    int i = 0;
    vet[i] = i++;

    for(int v: vet)
        cout << v << endl;

    return 0;
}
