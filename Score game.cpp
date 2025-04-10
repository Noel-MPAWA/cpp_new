#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> scores;
    std::string playerName;
    int score;

    char choice;

    do {
        std::cout << "Enter player name: ";
        std::cin >> playerName;
        std::cout << "Enter score: ";
        std::cin >> score;

        scores[playerName] += score; // Add score to existing player
        std::cout << "Do you want to add another score? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y');

    std::cout << "\nScores:\n";
    for (const auto& entry : scores) {
        std::cout << entry.first << ": " << entry.second << std::endl;
    }

    return 0;
}
