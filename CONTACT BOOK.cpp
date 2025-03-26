#include <iostream>
#include <vector>
#include <string>


struct Contact {
    std::string name;
    std::string phoneNumber;
};

int main() {
    std::vector<Contact> addressBook;
    int choice;

    do {
        std::cout << "1. Add Contact\n2. View Contacts\n3. Exit\nChoose an option: ";
        std::cin >> choice;

        if (choice == 1) {
            Contact newContact;
            std::cout << "Enter name: ";
            std::cin >> newContact.name;
            std::cout << "Enter phone number: ";
            std::cin >> 

newContact.phoneNumber;
            addressBook.push_back(newContact);
        } else if (choice == 2) {
            for (const auto& contact : addressBook) {
                std::cout << "Name: " << contact.name << ", Phone: " << contact.phoneNumber << std::endl;
            }
        }
    } while (choice != 3);

    return 0;
}
