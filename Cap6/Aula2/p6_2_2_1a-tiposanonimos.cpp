#include <iostream>

struct { // Tipo Anônimo
  int elem[100];
  int topo;
} pilhaNumeros;

int main() {
  pilhaNumeros.topo = -1; // Inicializando pilha vazia

  pilhaNumeros.elem[++pilhaNumeros.topo] = 10; // Inserindo
  pilhaNumeros.elem[++pilhaNumeros.topo] = 20;
  pilhaNumeros.elem[++pilhaNumeros.topo] = 30;

  for (int i = 0; i <= pilhaNumeros.topo; i++)
    std::cout << pilhaNumeros.elem[i] << std::endl;

  return 0;
}
