#include <iostream>
#include <vector>
#include <string>

struct Expense {
    std::string description;
    double amount;
};

int main() {
    std::vector<Expense> expenses;
    std::string desc;

    double amt;
    char choice;

    do {
        std::cout << "Enter expense description: ";
        std::cin >> desc;
        std::cout << "Enter amount: ";
        std::cin >> amt;

        expenses.push_back({ desc, amt });
        std::cout << "Do you want to add another expense? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y');

    double total = 0;
    std::cout << "\nExpenses:\n";
    for (const auto& expense : expenses) {
        std::cout << expense.description << ": $" << expense.amount << std::endl;

        total += expense.amount;
    }
    std::cout << "Total expenses: $" << total << std::endl;

    return 0;
}
