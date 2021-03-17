#include <iostream>

using namespace std;

int main() {
  cout << "Exemplo de propriedade de variáveis\n";

  int *p;
  int r = 50;
  int &s = r; // Referência em C++ é uma forma de sinonímia

  cout << "r: " << r << '\t' << &r
       << endl; // exibe o valor e o endereço da variável

  cout << "s: " << s << '\t' << &s << endl;
  
  s = 1000;
  cout << "r: " << r << endl;

  p = new int; // p aponta para uma variável anônima
  *p = 5;      // a variável anônima apontada por p recebe 5
  cout << p << '\t' << *p << endl; // o valor de p, o endereço de p e  valor da
                                   // variável (anônima) apontada por p

  if (s > 100) {
    const char r =
        'A'; // Esta definição oculta variavel r cujo escopo é a função
    cout << r << endl;
  }

  delete p;

  return 0;
}
