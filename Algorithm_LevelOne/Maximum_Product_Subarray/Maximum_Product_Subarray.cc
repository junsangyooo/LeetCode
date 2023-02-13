// 152. Maximum Product Subarray C++
#include <vector>

class Solution {
public:
    int maxProduct(std::vector<int>& nums) {
        int max_product = nums[0];
        int min_product = nums[0];

        int result = max_product;

        for (int i = 1; i < nums.size(); i++) {
            int x = nums[i];
            int tmp_max = std::max(max_product*x, min_product*x);
            tmp_max = std::max(x, tmp_max);
            min_product = std::min(x, std::min(max_product*x, min_product*x));
            max_product = tmp_max;
            result = std::max(result, max_product);
        }
        return result;
    }
};
