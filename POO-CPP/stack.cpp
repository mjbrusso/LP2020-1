// TAD brega ("sem classe") em C++
#include <stdexcept>

struct Stack {
  int *values;
  int top_index;
  int max_size;
};

// Operação construtora: cria uma pilha, inicialmente vazia, com espaço para
// size valores inteiros
void stack_init(Stack &p, int size = 1000) {
  p.values = new int[size];
  p.max_size = size;
  p.top_index = -1;
}

// Operação destrutora
void stack_destroy(Stack &p) { delete[] p.values; }

// Operações consultoras
bool stack_empty(const Stack &p) { return p.top_index == -1; }

int stack_top(const Stack &p) {
  if (!stack_empty(p))
    return p.values[p.top_index];

  throw std::out_of_range("Stack underflow");
}

int stack_size(const Stack &p) { return p.top_index + 1; }

// Operações atualizadoras
void stack_push(Stack &p, int val) {
  if (p.top_index < p.max_size - 1)
    p.values[++p.top_index] = val;
  else
    throw std::out_of_range("Stack overflow");
}

void stack_pop(Stack &p) {
  if (!stack_empty(p))
    p.top_index--;
  else
    throw std::out_of_range("Stack underflow");
}
