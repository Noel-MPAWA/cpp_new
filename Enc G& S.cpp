#include <iostream>
class Student {
private:
    int age;
public:
    void setAge(int a) { age = a; }
    int getAge() { return age; }
};
int main() {
    Student s;
    s.setAge(20);
    std::cout << "Age: " << s.getAge() << std::endl;
    return 0;
}
