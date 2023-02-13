// 416. Partition Equal Subset Sum C++
#include <vector>
using namespace std;

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (auto &x: nums) sum += x;
        if (sum % 2 != 0) return false;
        int subset_sum = sum / 2;
        
        vector<bool> v(subset_sum + 1, false);
        v[0] = true;
        for (auto &x: nums) {
            for (int i = subset_sum; i >= x; i--){
                if (v[i] || v[i-x]) v[i] = true;
                else v[i] = false;
            }
        }
        return v[subset_sum];
    }
};
