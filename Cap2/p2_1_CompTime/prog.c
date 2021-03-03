#include <stdio.h>

int fatorial(int number);

int main()
{
    int n = fatorial(5);

    printf("%d\n", n);
    return 0;
}

int fatorial(int number)
{
    if(number <= 1) return 1;

    return number * fatorial(number - 1);;
}
