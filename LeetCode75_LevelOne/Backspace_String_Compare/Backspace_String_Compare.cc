// 844. Backspace String Compare C++
#include <string>
#include <vector>

class Solution {
public:
    bool backspaceCompare(std::string s, std::string t) {
        std::vector<char> newS;
        std::vector<char> newT;
        int lenS = s.size();
        int lenT = t.size();
        for (int i = 0; i < lenS; i++) {
            if (s[i] == '#') {
                if (!newS.empty()) newS.pop_back();
            } else newS.emplace_back(s[i]);
        }
        for (int i = 0; i < lenT; i++) {
            if (t[i] == '#') {
                if (!newT.empty()) newT.pop_back();
            } else newT.emplace_back(t[i]);
        }
        return newS == newT;
    }
};
