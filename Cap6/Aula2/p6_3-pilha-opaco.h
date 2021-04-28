// Declaração TAD Pilha com tipos opaco

struct tPilha;
typedef struct tPilha * Pilha;

Pilha cria();
int vazia(const Pilha p);
void empilha(Pilha p, int el);
void desempilha(Pilha p);
int obtemTopo(const Pilha p);
void destroi(Pilha p);
