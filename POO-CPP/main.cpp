#include <iostream>

#include "stack.cpp"

int main() {
  Stack p1;

  stack_init(p1, 20);

  stack_push(p1, 55);
  stack_push(p1, 100);
  stack_push(p1, -2020);

  while (!stack_empty(p1)) {
    std::cout << "Size: " << stack_size(p1) << " "
              << "Top: " << stack_top(p1) << std::endl;

    stack_pop(p1);
  }

  stack_destroy(p1);
}
