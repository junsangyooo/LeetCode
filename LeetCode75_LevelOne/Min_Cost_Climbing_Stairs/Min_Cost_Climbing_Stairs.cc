// 746. Min Cost Climbing Stairs C++
#include <vector>

class Solution {
public:
    int minCostClimbingStairs(std::vector<int>& cost) {
        // int prepre = cost.at(0);
        // int pre = cost.at(1);

        // for (int i = 2; i < cost.size(); i++) {
        //     int cur = cost.at(i) + std::min(prepre, pre);
        //     prepre = pre;
        //     pre = cur;
        // }
        // return std::min(prepre, pre);
        for(int i=2;i<cost.size();i++)
        {
            cost[i]+=std::min(cost[i-1],cost[i-2]);
        }
        return std::min(cost[cost.size()-1],cost[cost.size()-2]);
    }
};
