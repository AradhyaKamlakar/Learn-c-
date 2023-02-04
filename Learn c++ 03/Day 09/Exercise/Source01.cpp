#include<iostream>
#include<assert.h>
struct Circle {
    int radius;
};

double CalculateArea(Circle c) {
    double area = c.radius * c.radius * 3.14;
    return area;
}

int main() {
    Circle c{ 10 };
    double area = CalculateArea(c);
    assert(area == 314);
    std::cout << "Area of circle of radius " << c.radius
        << " is " << area << std::endl;
}
