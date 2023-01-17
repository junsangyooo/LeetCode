// 724. Find Pivot Index C++
#include <vector>

class Solution {
public:
    int pivotIndex(std::vector<int>& nums) {
        int left = 0;
        int right = 0;
        for (auto num : nums) right+=num;
        int len = nums.size();
        for (int i = 0; i < len; i++) {
            int num = nums.at(i);
            right -= num;
            if (left == right) return i;
            left += num;
        }
        return -1;
    }
};