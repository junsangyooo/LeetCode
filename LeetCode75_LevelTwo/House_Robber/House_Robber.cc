// 198. House Robber C++
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    unordered_map<int, int> mp;
    int rob(vector<int>& nums) {
        return robFrom(nums, 0);
    }
    int robFrom(vector<int>& nums, int i) {
        if (i >= nums.size()) return 0;
        if (mp.find(i) != mp.end()) return mp[i];
        int ans = max(robFrom(nums, i + 1), robFrom(nums, i + 2) + nums[i]);
        mp.insert({i, ans});
        return ans;
    }
};
