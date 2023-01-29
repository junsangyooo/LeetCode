// 784. Letter Case Permutation C++

#include <string>
#include <vector>
class Solution {
public:
    std::vector<std::string> letterCasePermutation(std::string s) {
        std::vector<std::string> ans;
        backtrack(s, ans, 0);
        return ans;
    }
    void backtrack(std::string s, std::vector<std::string>& ans, int i) {
        if (i == s.size()) {
            ans.emplace_back(s);
            return;
        }

        if (isalpha(s[i])) {
            s[i] = toupper(s[i]);
            backtrack(s,ans,i+1);
            s[i] = tolower(s[i]);
            backtrack(s,ans,i+1);
        } else {
            backtrack(s, ans, i+1);
        }
    }
};
