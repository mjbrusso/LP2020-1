#include <iostream>
#include <stdexcept>

class stack {
private:
  int *values;
  int top_index;
  int max_size;

public:
  // Operação construtora: cria uma pilha, inicialmente vazia, com espaço para
  // size valores inteiros
  stack(int size = 1000) {
    values = new int[size];
    max_size = size;
    top_index = -1;

    std::cout << "Criou pilha com max_size=" << max_size << std::endl;
  }

  // Operação destrutora
  ~stack() {
    delete[] values;
    std::cout << "Pilha destruída com max_size=" << max_size << std::endl;
  }

  // Operações consultoras
  bool empty() { return top_index == -1; }

  int top() {
    if (!empty())
      return values[top_index];

    throw std::out_of_range("Stack underflow");
  }

  int size() { return top_index + 1; }

  // Operações atualizadoras
  void push(int val) {
    if (top_index < max_size - 1)
      values[++top_index] = val;
    else
      throw std::out_of_range("Stack overflow");
  }

  void pop() {
    if (!empty())
      top_index--;
    else
      throw std::out_of_range("Stack underflow");
  }
};
