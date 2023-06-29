// 238. Product of Array Except Self
#include <vector>


class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int product  = 1;
        bool zero = false;
        int zeroCount = 0;
        bool onlyZero = true;
        for (int x : nums) {
            if (x == 0) {
                zero = true;
                zeroCount++;
            }
            else {
                product *= x;
                onlyZero = false;
            }
        }
        if (onlyZero || zeroCount > 1) {
            std::vector<int> answer(nums.size(), 0);
            return answer;
        } else if (zero) {
            std::vector<int> answer(nums.size(), 0);
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == 0) {
                    answer[i] = product;
                }
            }
            return answer;
        } else {
            std::vector<int> answer(nums.size(), product);
            for (int i = 0; i < nums.size(); i++) {
                int tmp = answer[i] / nums[i];
                answer[i] = tmp;
            }
            return answer;
        }
    }
};
