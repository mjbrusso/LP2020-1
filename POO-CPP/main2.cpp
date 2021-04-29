#include "stack.cpp"
#include <iostream>

int main() {
  UPF::stack<std::string> p1;

  p1.push("oi");
  p1.push("olá");
  p1.push("e aí?");

  while (!p1.empty()) {
    std::cout << "Size: " << p1.size() << " "
              << "Top: " << p1.top() << std::endl;

    p1.pop();
  }
}
