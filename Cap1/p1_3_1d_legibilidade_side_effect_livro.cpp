#include <iostream>

using namespace std;

int x = 1;
int retornaCinco()
{
    x = x + 3;
    return 5;
}

int main()
{
    int y;
    y = retornaCinco();
    y = y + x;
    cout << y << endl;

    return 0;
}
