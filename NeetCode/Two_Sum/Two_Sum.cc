// 1. Two Sum C++
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // int index = 0;
        // int len = nums.size();
        // std::vector<int> ans;
        // for (auto num: nums) {
        //     int need = target - num;
        //     bool found = false;
        //     for (int i = index + 1; i < len; i++) {
        //         if (nums.at(i) == need) {
        //             ans.push_back(index);
        //             ans.push_back(i);
        //             found = true;
        //             break;
        //         }
        //     }
        //     if (found) break;
        //     index++;
        // }
        // return ans;

        std::unordered_map<int,int> mp;
        std::vector<int> vec;
        for(int i=0; i<nums.size(); i++){
            int need = target-nums[i];
            if(mp.find(need) != mp.end()){
                vec.push_back(mp[need]);
                vec.push_back(i);
                return vec;
            }
            else mp[nums[i]] = i;
        }
        return vec;
    }
};