#include <iostream>
#include <string>

int main() {
    std::string question = "What is the capital of France?";
    std::string answer = "Paris";
    std::string userAnswer;

    std::cout << question << std::endl;
    std::getline(std::cin, userAnswer);

    if (userAnswer == answer) {
        std::cout << "Correct!" << std::endl;
    } else {
        std::cout << "Incorrect! The correct answer is " << answer << "." << std::endl;
    }

    return 0;
}
