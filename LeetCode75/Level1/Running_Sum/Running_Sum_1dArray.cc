// 1480. Running Sum of 1d Array C++
#include <vector>

class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) {
        std::vector<int> list;
        int pre = 0;
        for (auto num: nums) {
            pre += num;
            list.push_back(pre);
        }
        return list;
    }
};