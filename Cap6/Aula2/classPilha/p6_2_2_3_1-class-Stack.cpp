// Classe Stack em C++
#include <stdexcept>

namespace UPF {
class Stack {
   private:
    int *values;
    int current_top;
    int max_size;

   public:
    // Operação construtora: cria uma pilha, inicialmente vazia, com espaço para size valores inteiros
    Stack(int size = 1000) {
        values = new int[size];
        max_size = size;
        current_top = -1;
    }

    // Operação destrutora
    ~Stack() {
        delete[] values;
    }

    // Operações consultoras
    bool empty() {
        return current_top == -1;
    }

    int top() {
        if (!empty())
            return values[current_top];

        throw std::out_of_range("Stack underflow");
    }

    int size() {
        return current_top + 1;
    }

    // Operações atualizadoras
    void push(int val) {
        if (current_top < max_size - 1)
            values[++current_top] = val;
        else
            throw std::out_of_range("Stack overflow");
    }

    void pop() {
        if (!empty())
            current_top--;
        else
            throw std::out_of_range("Stack underflow");
    }
};
};  // namespace UPF