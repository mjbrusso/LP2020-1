#include <stdio.h>

int fatorial(int number) 	// Definição do subprograma
{
    if(number <= 1) return 1;

    return number * fatorial(number - 1);;
}

int main()
{
    int n = fatorial(5);

    printf("%d\n", n);
    return 0;
}


