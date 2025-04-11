#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> urlMap;
    std::string originalUrl, shortUrl;
    char choice;

    do {
        std::cout << "Enter original URL: ";
        std::cin >> originalUrl;
        shortUrl = "short.ly/" + std::to_string(urlMap.size() + 1); // Simple short URL generator
        urlMap[shortUrl] = originalUrl;
        std::cout << "Shortened URL: " << 

shortUrl << std::endl;

        std::cout << "Do you want to shorten another URL? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y');

    std::cout << "\nAll Shortened URLs:\n";
    for (const auto& entry : urlMap) {
        std::cout << entry.first << " -> " << entry.second << std::endl;
    }

    return 0;
}
