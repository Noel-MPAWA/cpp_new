#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    srand(static_cast<unsigned int>(time(0)));
    int number = rand() % 100 + 1; // Random number between 1 and 100
    int guess;

    std::cout << "Guess the number (1-100): ";
    do {
        std::cin >> guess;
        if (guess > number) {
            std::cout << "Too high! Try again: ";
        } else if (guess < number) {
            std::cout << "Too low! Try again: ";
        }
    } while (guess != number);

    std::cout << "Congratulations! You guessed the number." << std::endl;
    return 0;
}

