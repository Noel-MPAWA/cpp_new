#include <iostream>
#include <fstream>

#include <string>

int main() {
    std::string filename, line;
    std::cout << "Enter filename to edit: ";
    std::cin >> filename;

    std::ofstream outFile(filename);
    std::cout << "Enter text (type 'exit' to save and quit):" << std::endl;

    while (true) {
        std::getline(std::cin, line);
        if (line == "exit") break;
        outFile << line << std::endl;
    }

    outFile.close();
    std::cout << "File saved." << std::endl;

    return 0;

}
