// 205. Isomorphic Strings C++
#include <string>

class Solution {
public:
    bool isIsomorphic(std::string s, std::string t) {
        // std::unordered_map<char, char> mp1;
        // std::unordered_map<char, char> mp2;
        // int len = s.length();
        // for (int i = 0; i < len; i++) {
        //     if (mp1.find(s[i]) != mp1.end() && mp1.at(s[i]) != t[i]) {
        //         return false;
        //     } else if (mp2.find(t[i]) != mp2.end() && mp2.at(t[i]) != s[i]) {
        //         return false;
        //     } else {
        //         mp1.emplace(s[i], t[i]);
        //         mp2.emplace(t[i], s[i]);
        //     }
        // }
        // int len2 = t.length();
        // return len == len2;
        
        char mp1[128] = { 0 };
        char mp2[128] = { 0 };
        int len = s.size();
        for (int i = 0; i < len; ++i)
        {
            if (mp1[s[i]]!=mp2[t[i]]) return false;
            mp1[s[i]] = i+1;
            mp2[t[i]] = i+1;
        }
        return true;
    }
};