#include "p6_3-pilha-opaco.h"
#include <stdio.h>

int main() {
  Pilha p1 = cria();
  empilha(p1, 55);
  empilha(p1, 100);

  printf("%d\n", obtemTopo(p1));
  desempilha(p1);
  printf("%d\n", obtemTopo(p1));
  destroi(p1);
}
