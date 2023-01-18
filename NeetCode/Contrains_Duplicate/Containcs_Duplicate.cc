// 217. Contains Duplicate C++
#include <vector>
#include <algorithm>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        // map<int,int> m;
        //   for(auto num : nums) m[num]++;
        //   for(auto i : m){
        //       if(i.second >= 2) return true;
        //   }
        //   return false;

        // int length = nums.size();
        // for(int i =0;i<length;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i] == nums[j]) return true;
        //     }
        // }
        // return false;

        // return nums.size() > set<int>(nums.begin(),nums.end()).size();

        std::sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]) return true;
        }
        return false;
    }
};