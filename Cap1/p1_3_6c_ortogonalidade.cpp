#include <iostream>

using namespace std;

struct gambiarra{
    int vet[10];
};

gambiarra fn()
{
    gambiarra xuxo;
    xuxo.vet[0] = 55;
    xuxo.vet[1] = 333;
    return xuxo;
}

int main()
{
    auto r = fn();
    cout << r.vet[0] << endl;
    return 0;
}
