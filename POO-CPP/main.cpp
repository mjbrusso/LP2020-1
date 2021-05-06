#include "stack.cpp"
#include <iostream>

int main() {
  UPF::stack<int> p1;

  p1.push(55);
  p1.push(100);
  p1.push(2020);

  if (true) {
    UPF::stack<int> p2(p1);
  }

  while (!p1.empty()) {
    std::cout << "Size: " << p1.size() << " "
              << "Top: " << p1.top() << std::endl;

    p1.pop();
  }
}
