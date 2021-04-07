// IEEE-754 Single Precison Floating Point Converter
// Validar em https://www.h-schmidt.net/FloatConverter/IEEE754.html

#include <iomanip>
#include <iostream>

int main() {
  union {
    int ival;
    float fval;
  } var;

  std::cout << "Input a number: ";
  std::cin >> var.fval;
  std::cout << "Hexadecimal Representation: " << std::uppercase << std::hex
            << var.ival << std::endl;

  return 0;
}
