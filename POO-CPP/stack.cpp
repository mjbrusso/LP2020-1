#include <iostream>
#include <stdexcept>

namespace UPF {

template <typename T> class stack {
private:
  T *values;
  int top_index;
  int max_size;

public:
  // Operação construtora: cria uma pilha, inicialmente vazia, com espaço para
  // size valores inteiros
  stack(int size = 1000) {
    values = new T[size];
    max_size = size;
    top_index = -1;

    std::cout << "Criou pilha com max_size=" << max_size << std::endl;
  }

  stack(stack<T> &other) {
      values = new T[other.max_size];
      max_size = other.max_size;
      top_index = other.top_index;
      std::copy(other.values, other.values+other.size(), values);
      std::cout << "Criou cópia de pilha com max_size=" << max_size << std::endl;
  }

  // Operação destrutora
  ~stack() {
    delete[] values;
    std::cout << "Pilha destruída com max_size=" << max_size << std::endl;
  }

  // Operações consultoras
  bool empty() { return top_index == -1; }

  T top() {
    if (!empty())
      return values[top_index];

    throw std::out_of_range("Stack underflow");
  }

  int size() { return top_index + 1; }

  // Operações atualizadoras
  void push(T val) {
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

  stack<T> &operator=(stack<T> &rhs) {
    if (this != &rhs) {
      delete[] values;
      values = new T[rhs.max_size];
      for (int i = 0; i <= rhs.top_index; i++)
        values[i] = rhs.values[i];

      max_size = rhs.max_size;
      top_index = rhs.top_index;
    }
    return *this;
  }
};

} // namespace UPF