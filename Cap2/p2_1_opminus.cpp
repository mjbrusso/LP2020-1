#include <iostream>
#include <cmath>

struct point {
    int x, y;
};

double operator- (const point& lhs, const point& rhs)
{
    double dif_y = lhs.y - rhs.y;
    double dif_x = lhs.x - rhs.x;
    return sqrt((dif_y * dif_y) + (dif_x * dif_x));
}

int main()
{
	int k = 10 * 5;
	
    point a{10, 10}, b{0, 25};   
    double d = a - b;

    std::cout << d << std::endl;
}
