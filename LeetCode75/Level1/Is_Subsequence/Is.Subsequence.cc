// 392. Group Anagrams C++
#include <string>

class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        int len_s = s.size();
        int len_t = t.size();
        int pre = -1;
        bool exist = false;
        for (int i = 0; i < len_s; i++) {
            for (int j = pre + 1; j < len_t; j++) {
                if (t[j] == s[i]) {
                    pre = j;
                    exist = true;
                    break;
                }
            }
            if (!exist) return false;
            exist = false;
        }
        return true;
    }
};
