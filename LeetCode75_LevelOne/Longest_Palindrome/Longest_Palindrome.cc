// 409. Longest Palindrome C++
#include <unordered_map>
#include <string>

class Solution {
public:
    int longestPalindrome(std::string s) {
        std::unordered_map<char, int> mp;
        int length = s.length();
        for (int i = 0; i < length; i++) {
            char c  =s[i];
            if (mp.find(c) == mp.end()) {
                mp.insert({c, 1});
            } else {
                mp[c]++;
            }
        }
        bool single = false;
        int longest = 0;
        for (auto x: mp) {
            if (x.second % 2 == 0) longest += x.second;
            else if (x.second % 2 == 1) {
                longest += x.second - 1;
                single = true;
            }
        }
        if (single) return longest + 1;
        return longest;
    }
};
