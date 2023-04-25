//Question2

#include <iostream>
#include <string>

const int MAX_SIZE = 100;

bool is_palindrome(std::string str) {
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string inlist[MAX_SIZE] = {"kek", "pop", "eye", "ses"};
    std::string palindromes[MAX_SIZE];
    int count = 0;
    for (int i = 0; i < MAX_SIZE; i++) {
        if (inlist[i] == "") {
            break;
        }
        if (is_palindrome(inlist[i])) {
            palindromes[count] = inlist[i];
            count++;
        }
    }
    for (int i = 0; i < count; i++) {
        std::cout << palindromes[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
