#include <iostream>
#include <string>
#include <unordered_set>
#include <cctype>

int main() {
    int n;
    std::cin >> n;  // Number of strings

    int pangramCount = 0;
    std::cin.ignore();  // Ignore the newline character after the integer input
    
    while (n--) {
        std::string str;
        std::getline(std::cin, str);  // Input string
        
        std::unordered_set<char> uniqueChars;
        
        for (char c : str) {
            if (std::isalpha(c)) {
                uniqueChars.insert(std::tolower(c));
            }
        }
        
        if (uniqueChars.size() == 26) {
            pangramCount++;
        }
    }

    std::cout << pangramCount << std::endl;

    return 0;
}
