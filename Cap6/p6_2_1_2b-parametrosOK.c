#include "stdio.h"

int volume(int altura, int largura, int comprimento) // altura é "parâmetro formal"
{
    return altura * largura * comprimento;
}

int main()
{
    int a1 = 1, l1 = 2, c1 = 3, a2 = 4, l2 = 5, c2 = 6;
    int v1, v2;

    v1 = volume(a1, l1, c1); // a1 é "parâmetro real", o valor 1 é o "argumento"
    v2 = volume(a2, l2, c2);

    printf("v1: %d\nv2: %d\n", v1, v2);
}
