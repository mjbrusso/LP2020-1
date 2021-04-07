#include <iostream>

const int max = 100;

struct tPilha {
  int elem[max];
  int topo;
};

void preenche(tPilha &p, int n) {
  for (p.topo = 0; p.topo < n && p.topo < max; p.topo++)
    p.elem[p.topo] = 0;

  p.topo--;
}

int main() {
  tPilha a, b;
  preenche(a, 12);

  for (int i = 0; i <= a.topo; i++)
    std::cout << a.elem[i] << std::endl;

  preenche(b, 29);
}
