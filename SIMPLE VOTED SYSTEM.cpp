#include <iostream>
#include <map>
#include <string>


int main() {
    std::map<std::string, int> candidates;
    candidates["Alice"] = 0;
    candidates["Bob"] = 0;
    candidates["Charlie"] = 0;

    std::string vote;
    int totalVotes = 0;

    std::cout << "Vote for candidates: Alice, Bob, Charlie. Type 'exit' to end voting." << std::endl;
    while (true) {
        std::cin >> vote;
        if (vote == "exit") break;
        if (candidates.find(vote) != candidates.end()) {
            candidates[vote]++;
            totalVotes++;
        } else {

            std::cout << "Invalid candidate. Try again." << std::endl;
        }
    }

    std::cout << "Voting results:" << std::endl;
    for (const auto &candidate : candidates) {
        std::cout << candidate.first << ": " << candidate.second << " votes (" 
                  << (static_cast<double>(candidate.second) / totalVotes * 100) << "%)" << std::endl;
    }
    return 0;
}
