#include <cmath>
#include <cstdlib>
#include <iostream>

class point {
private:
  int x;
  int y;

public:
  point(int px, int py) {
    x = px;
    y = py;
  }

  point() {
    x = 0;
    y = 0;
  }

  int get_x() { return x; }
  int get_y() { return y; }

  double operator-(point &other) {
    int dx = std::abs(x - other.get_x());
    int dy = std::abs(y - other.get_y());

    return std::sqrt((dx * dx) + (dy * dy));
  }
};

std::ostream &operator<<(std::ostream &os, point &p) {
  os << '(' << p.get_x() << ", " << p.get_y() << ')';
  return os;
}

int main() {
  point p1(50, 19), p2(75, 33);

  double dist = p2 - p1;
  std::cout << "Distância entre " << p1 << " e " << p2 << " é " << dist
            << std::endl;
}
