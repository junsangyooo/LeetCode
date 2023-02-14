// 16. 3Sum Closest C++
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int diff = 5000000;
        int length = nums.size();
        for (int i = 0; i < length; i++) {
            int low = i + 1;
            int high = length - 1;
            while (low < high) {
                int s = nums[i] + nums[low] + nums[high];
                if (abs(target - s) < abs(diff)) diff = target - s;
                if (s < target) low++;
                else high--;
            }
            if (diff==0) break;
        }
        return target - diff;
    }
};
