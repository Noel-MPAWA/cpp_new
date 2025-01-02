#include <iostream>
class Animal {
public:
    virtual void sound() { std::cout << "Animal sound\n"; }
};
class Cat : public Animal {
public:
    void sound() override { std::cout << "Meow\n"; }
};
int main() {
    Animal* a = new Cat();
    a->sound();
    delete a;
    return 0;
}
