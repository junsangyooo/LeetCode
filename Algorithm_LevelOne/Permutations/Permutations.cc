// 46. Permutations C++
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> output;
    std::vector<std::vector<int>> permute(std::vector<int>& nums) {
        backtrack(0, nums, nums.size());
        return output;
    }
    void backtrack(int first, std::vector<int>& nums, int length) {
        if (first == length) output.emplace_back(nums);
        for (int i = first; i < length; i++) {
            int tmp = nums[first];
            nums[first] = nums[i];
            nums[i] = tmp;
            backtrack(first + 1, nums, length);
            nums[i] = nums[first];
            nums[first] = tmp;
        }
    }
};
