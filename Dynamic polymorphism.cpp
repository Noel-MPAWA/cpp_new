#include <iostream>
class Base {
public:
    virtual void show() { std::cout << "Base class\n"; }
};
class Derived : public Base {
public:
    void show() override { std::cout << "Derived class\n"; }
};
int main() {
    Base* b = new Derived();
    b->show();
    delete b;
    return 0;
}
