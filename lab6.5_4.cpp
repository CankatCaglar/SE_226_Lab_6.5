#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string toLowercase(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

string removeSpaces(string s) {
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    return s;
}

string sortString(string s) {
    sort(s.begin(), s.end());
    return s;
}

bool areAnagrams(string s1, string s2) {
    s1 = sortString(removeSpaces(toLowercase(s1)));
    s2 = sortString(removeSpaces(toLowercase(s2)));

    return s1 == s2;
}

int main() {
    string word = "listen";
    string wordList[] = {"enlists", "google", "inlets", "banana"};
    int n = sizeof(wordList) / sizeof(wordList[0]);

    for (int i = 0; i < n; i++) {
        if (areAnagrams(word, wordList[i])) {
            cout << wordList[i] << " ";
        }
    }

    return 0;
}


