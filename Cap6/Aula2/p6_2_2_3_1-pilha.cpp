// TAD brega ("sem classe") em C++

#define max 100

struct tPilha {
  int elem[max];
  int topo;
};

tPilha cria() {
  tPilha p;
  p.topo = -1;
  return p;
}

bool vazia(const tPilha &p) { return p.topo == -1; }

void empilha(tPilha &p, int el) {
  if (p.topo < max - 1 && el >= 0)
    p.elem[++p.topo] = el;
}

void desempilha(tPilha &p) {
  if (!vazia(p))
    p.topo--;
}

int obtemTopo(const tPilha &p) {
  if (!vazia(p))
    return p.elem[p.topo];

  return -1;
}
