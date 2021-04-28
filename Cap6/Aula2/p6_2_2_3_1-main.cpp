// TAD brega ("sem classe") em C++

#include "p6_2_2_3_1-pilha.cpp"
#include <iostream>

tPilha global;

void preenche(tPilha &p, int n) {
  int i;
  for (i = 0; i < n; i++)
    empilha(p, 0);
}

int main() {
  tPilha a, b;
  global = cria();
  a = cria();
  b = cria();

  empilha(b, 99);
  empilha(b, 10);
  std::cout << obtemTopo(b) << std::endl;

  empilha(a, 55);
  preenche(a, 17);
  desempilha(a);
  preenche(b, 29);
  preenche(global, 23);

  // Estas linhas comentadas seriam válidas, pois a implementação não impede
  // acesso indiscriminado aos membros a.elem[++a.topo] = 11; a.topo= 321;
  // global = a;
}
