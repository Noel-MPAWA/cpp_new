#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getGuess() {
    int guess;
    cout << "Enter your guess: ";
    cin >> guess;
    return guess;
}

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Guess the number between 1 and 100!\n";

    do {
        guess = getGuess();
        attempts++;
        if (guess < number)
            cout << "Too low!\n";
        else if (guess > number)
            cout << "Too high!\n";
        else
            cout << "Correct! Attempts: " << attempts << endl;
    } while (guess != number);

    return 0;
}
