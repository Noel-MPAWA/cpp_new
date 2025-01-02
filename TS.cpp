#include <iostream>
template <typename T>
class Box {
private:
    T data;
public:
    Box(T d) : data(d) {}
    T getData() { return data; }
};
int main() {
    Box<int> b1(10);
    Box<double> b2(20.5);
    std::cout << "Box1: " << b1.getData() << ", Box2: " << b2.getData() << std::endl;
    return 0;
}
