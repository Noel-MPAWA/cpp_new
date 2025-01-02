#include <iostream>
class Counter {
private:
    static int count;
public:
    Counter() { count++; }
    static int getCount() { return count; }
};
int Counter::count = 0;
int main() {
    Counter c1, c2, c3;
    std::cout << "Count: " << Counter::getCount() << std::endl;
    return 0;
}
