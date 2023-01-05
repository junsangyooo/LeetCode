// 977. Suqares of a Sorted Array C++
#include <vector>

class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums) {
        int i = 0, j = nums.size() - 1, k = j;
        std::vector <int> tmp(k + 1, 0);
        while (k >= 0) {
            if (abs(nums[i]) > abs(nums[j])) tmp[k--] = nums[i] * nums[i++];
            else tmp[k--] = nums[j] * nums[j--];
        }
        return tmp;
    }
};