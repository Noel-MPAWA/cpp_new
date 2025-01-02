#include <iostream>
class Shape {
public:
    virtual double area() const = 0;
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override { return 3.14 * radius * radius; }
};
int main() {
    Circle c(5);
    std::cout << "Area: " << c.area() << std::endl;
    return 0;
}
