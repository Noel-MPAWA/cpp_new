#include <iostream>
class Number {
private:
    int value;
public:
    Number(int v) : value(v) {}
    Number(const Number& n) : value(n.value) {}
    void display() { std::cout << "Value: " << value << std::endl; }
};
int main() {
    Number n1(10);
    Number n2 = n1;
    n2.display();
    return 0;
}
