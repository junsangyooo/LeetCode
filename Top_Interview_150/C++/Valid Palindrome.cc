// 125. Valid Palindrome
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string word;
        for (char letter: s) {
            if (letter >= 'A' && letter <= 'Z') {
                word += letter + 32;
            } else if ((letter >= 'a' && letter <= 'z') || (letter >= '0' && letter <= '9')) {
                word += letter;
            } else continue;
        }
        for (int i = 0; i < word.size()/2; i++) {
            if (word[i] != word[word.size() - 1 - i]) return false;
        }
        return true;
    }
};
