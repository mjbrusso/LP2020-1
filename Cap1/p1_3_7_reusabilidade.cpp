#include <iostream>

using namespace std;

template<typename T>
void troca(T &n1, T &n2)
{
    T aux = n1;
    n1 = n2;
    n2 = aux;
}

int main()
{
    int a=200, b=17, c=555, d=0;
    float f1=1.5, f2=7.98;

    troca(a, b);
    cout << a << endl;
    cout << b << endl;
    troca(c, d);
    cout << c << endl;
    cout << d << endl;
    troca(f1, f2);
    cout << f1 << endl;
    cout << f2 << endl;

    return 0;
}
