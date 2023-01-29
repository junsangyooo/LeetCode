// 70. Climbing Stairs C++
#include <unordered_map>

class Solution {
public:
    std::unordered_map<int, int> mp;
    int climbStairs(int n) {
        mp.insert({1, 1});
        mp.insert({2,2});
        return climb(n);
    }
    int climb(int n) {
        if (mp.find(n) != mp.end()) return mp[n];
        else {
            mp[n] = climb(n-1) + climb(n-2);
            return mp[n];
        }
    }

};