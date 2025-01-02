#include <iostream>
class A {
public:
    void displayA() { std::cout << "Class A\n"; }
};
class B {
public:
    void displayB() { std::cout << "Class B\n"; }
};
class C : public A, public B {};
int main() {
    C c;
    c.displayA();
    c.displayB();
    return 0;
}
