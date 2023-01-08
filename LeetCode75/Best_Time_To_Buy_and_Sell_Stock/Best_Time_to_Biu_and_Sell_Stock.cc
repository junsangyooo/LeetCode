// 121. Best Time to Buy and Sell Stock C++
#include <algorithm>
#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int left = 0;
        int right = 1;
        int profit = 0;
        int length = prices.size();
        while (right < length) {
            int curr = prices.at(right) - prices.at(left);
            if (curr > 0) {
                profit = std::max(curr, profit);
            } else {
                left = right;
            }
            right++;
        }
        return profit;
    }
};
