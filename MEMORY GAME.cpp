#include <iostream>

#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    std::vector<int> cards = {1, 1, 2, 2, 3, 3, 4, 4};
    std::random_shuffle(cards.begin(), cards.end());
    std::vector<bool> revealed(8, false);
    int pairsFound = 0;

    while (pairsFound < 4) {
        for (int i = 0; i < 8; i++) {
            if (revealed[i]) {
                std::cout << "[" << cards[i] << "] ";
            } else {
                std::cout << "[?] ";
            }
        }
        std::cout << std::endl;


        int firstChoice, secondChoice;
        std::cout << "Choose first card (0-7): ";
        std::cin >> firstChoice;
        std::cout << "Choose second card (0-7): ";
        std::cin >> secondChoice;

        if (cards[firstChoice] == cards[secondChoice]) {
            revealed[firstChoice] = revealed[secondChoice] = true;
            pairsFound++;
            std::cout << "You found a pair!" << std::endl;
        } else {
            std::cout << "Not a match." << std::endl;
        }
    }

    std::cout << "Congratulations! You found all pairs!" << std::endl;
    return 0;
}
