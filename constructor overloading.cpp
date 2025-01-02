#include <iostream>
class Rectangle {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    Rectangle(double s) : length(s), width(s) {}
    double area() { return length * width; }
};
int main() {
    Rectangle r1(5, 10), r2(7);
    std::cout << "Area1: " << r1.area() << ", Area2: " << r2.area() << std::endl;
    return 0;
}
