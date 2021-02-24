#include <iostream>

using namespace std;

int main()
{
    bool u = true;
    int v = 0;
    while (u && v < 9){
        v = u + 2;
        if (v == 6)
            u = false;            
    }

    return 0;
}
