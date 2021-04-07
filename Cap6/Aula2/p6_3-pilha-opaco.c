// Implementação TAD Pilha com tipos opaco
#include "p6_3-pilha-opaco.h"
#include <stdlib.h>

#define max 100

struct tPilha {
  int elem[max];
  int topo;
};

Pilha cria() {
  Pilha p = malloc(sizeof(struct tPilha));
  p->topo = -1;
  return p;
}

int vazia(const Pilha p) { return p->topo == -1; }

void empilha(Pilha p, int el) {
  if (p->topo < max - 1 && el >= 0)
    p->elem[++p->topo] = el;
}

void desempilha(Pilha p) {
  if (!vazia(p))
    p->topo--;
}

int obtemTopo(const Pilha p) {
  if (!vazia(p))
    return p->elem[p->topo];
  return -1;
}

void destroi(Pilha p) { free(p); }
