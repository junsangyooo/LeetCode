// 136. Single Number C++
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto x: nums) mp[x]++;
        int ans = 0;
        for (auto x: mp) {
            if (x.second == 1) {
                ans = x.first;
                break;
            }
        }
        return ans;
    }
};
