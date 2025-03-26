#include <iostream>
#include <string>


std::string encrypt(const std::string &text) {
    std::string encrypted;
    for (char c : text) {
        encrypted += c + 1; // Simple Caesar cipher
    }
    return encrypted;
}

std::string decrypt(const std::string &text) {
    std::string decrypted;
    for (char c : text) {
        decrypted += c - 1; // Reverse Caesar cipher
    }
    return decrypted;
}

int main() {
    std::string text;

    std::cout << "Enter text to encrypt: ";
    std::getline(std::cin, text);

    std::string encrypted = encrypt(text);
    std::cout << "Encrypted text: " << encrypted << std::endl;

    std::string decrypted = decrypt(encrypted);
    std::cout << "Decrypted text: " << decrypted << std::endl;

    return 0;
}
