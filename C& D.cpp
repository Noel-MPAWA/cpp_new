#include <iostream>
class Car {
public:
    Car() { std::cout << "Car created.\n"; }
    ~Car() { std::cout << "Car destroyed.\n"; }
};
int main() {
    Car car;
    return 0;
}
