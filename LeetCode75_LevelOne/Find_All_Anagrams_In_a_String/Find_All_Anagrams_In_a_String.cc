// 438. Fina All Anagrams in a String C++
#include <vector>
#include <string>
#include <unordered_map>

class Solution {
public:
    std::vector<int> findAnagrams(std::string s, std::string p) {
        std::unordered_map<char, int> mpP;
        std::unordered_map<char, int> mpS;
        std::vector<int> output;
        for (auto c: p) mpP[c]++;
        int j = p.size();
        for (int i = 0; i < s.size(); i++) {
            mpS[s[i]]++;
            if (i >= j) {
                mpS[s[i-j]] == 1 ? mpS.erase(s[i-j]) : mpS[s[i-j]]--;
            }
            if (mpP == mpS) {
                output.emplace_back(i-j+1);
            }
        }
        return output;
    }
};
