#include <iostream>

int a = 13;

int main()
{
    int b = a;
    int a = 2;
    b = b + a;

    std::cout << b << std::endl;
    
    return 0;
}
