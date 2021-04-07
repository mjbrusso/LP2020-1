// TAD brega ("sem classe") em C++

#include <iostream>

#include "p6_2_2_3_1-class-Stack.cpp"

int main() {
    UPF::Stack p1; // Construtor chamado automaticamente

    p1.push(55);
    p1.push(100);
    p1.push(-2020);
    while (!p1.empty()) {
        std::cout << "Size: " << p1.size() << " "
                  << "Top: " << p1.top() << std::endl;

        p1.pop();
    }
    // Destrutor chamado quando variável sai de escopo
}
