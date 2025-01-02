#include <iostream>
class Box {
private:
    double width;
public:
    Box(double w) : width(w) {}
    friend void displayWidth(Box b);
};
void displayWidth(Box b) { std::cout << "Width: " << b.width << std::endl; }
int main() {
    Box b(10);
    displayWidth(b);
    return 0;
}
