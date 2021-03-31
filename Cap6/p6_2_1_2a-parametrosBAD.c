#include "stdio.h"

int altura, largura, comprimento, resultado;

void volume()
{
    resultado = altura * largura * comprimento;
}

int main()
{
    int a1 = 1, l1 = 2, c1 = 3, a2 = 4, l2 = 5, c2 = 6;
    int v1, v2;

    altura = a1;
    largura = l1;
    comprimento = c1;
    volume();
    v1 = resultado;

    altura = a2;
    largura = l2;
    comprimento = c2;
    volume();
    v2 = resultado;

    printf("v1: %d\nv2: %d\n", v1, v2);
}
