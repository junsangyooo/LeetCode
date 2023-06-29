// 135. Candy
#include <vector>

class Solution {
public:
    int candy(std::vector<int>& ratings) {
        std::vector<int> leftright(ratings.size(), 1);
        std::vector<int> rightleft(ratings.size(), 1);
        int sum = 0;
        for (int i = 1; i < ratings.size(); i++) {
            if (ratings[i] > ratings[i - 1]) {
                leftright[i] = leftright[i - 1] + 1;
            }
        }
        for (int i = ratings.size() - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                rightleft[i] = rightleft[i + 1] + 1;
            }
        }
        for (int i = 0; i < ratings.size(); i++) {
            sum += std::max(leftright[i], rightleft[i]);
        }
        return sum;
    }
};
