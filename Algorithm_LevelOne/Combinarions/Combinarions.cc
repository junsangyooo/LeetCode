// 77. Combinations C++
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> output;
    
    void backtrack(int start, std::vector<int> curr, int n, int k) { 
        if (curr.size() == k) {
            output.emplace_back(curr);
            return;
        }
        for (int i = start; i < n + 1; i++) {
            curr.emplace_back(i);
            backtrack(i + 1, curr, n, k);
            curr.pop_back();
        }
    }
    std::vector<std::vector<int>> combine(int n, int k) {
        std::vector<int> curr;
        backtrack(1, curr, n, k);
        return output;
    }
};
