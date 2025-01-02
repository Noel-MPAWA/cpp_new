#include <iostream>
class MyClass {
private:
    int* data;
public:
    MyClass(int val) : data(new int(val)) {}
    MyClass& operator=(const MyClass& other) {
        if (this == &other) return *this;
        delete data;
        data = new int(*other.data);
        return *this;
    }
    ~MyClass() { delete data; }
    void display() { std::cout << "Data: " << *data << std::endl; }
};
int main() {
    MyClass a(10), b(20);
    b = a;
    b.display();
    return 0;
}
