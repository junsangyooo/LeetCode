// 567. Permutation in String C++
#include <string>
#include <unordered_map>

class Solution {
public:
    bool checkInclusion(std::string s1, std::string s2) {
        std::unordered_map<char, int> mp1, mp2;
        int size = s1.size();
        for (auto x: s1) mp1[x]++;
        int start = 0;
        int max = s2.size();
        for (int i = 0; i < max; i++) {
            mp2[s2[i]]++;
            if (i - start + 1 == size) {
                if (mp1 == mp2) return true;
                if (mp2[s2[start]] == 1) {
                    mp2.erase(s2[start]);
                } else {
                    mp2[s2[start]] -= 1;
                }
                start++;
            }
        }
        return false;
    }
};
