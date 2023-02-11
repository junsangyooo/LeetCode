// 322. Coin Change C++
#include <vector>

class Solution {
public:
    int coinChange(std::vector<int>& coins, int amount) {
        std::vector<int> v(amount+1, 10001);
        v[0] = 0;
        for (auto &coin: coins) {
            for (int i = coin; i <= amount; i++) {
                v[i] = std::min(v[i], v[i-coin] + 1);
            }
        }
        return v[amount] == 10001 ? -1: v[amount];
    }
};
