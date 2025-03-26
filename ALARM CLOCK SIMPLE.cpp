#include <iostream>
#include <chrono>
#include <thread>

int main() {
    int hours, minutes;
    std::cout << "Set alarm time (HH MM): ";
    std::cin >> hours >> minutes;

    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(1));

        auto now = std::chrono::system_clock::now();

        std::time_t now_time = std::chrono::system_clock::to_time_t(now);
        std::tm *current_time = std::localtime(&now_time);

        if (current_time->tm_hour == hours && current_time->tm_min == minutes) {
            std::cout << "Alarm ringing! Time to wake up!" << std::endl;
            break;
        }
    }
    return 0;
}
