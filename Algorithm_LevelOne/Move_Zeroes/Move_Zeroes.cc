// 283. Move Zeroes C++
#include <vector>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int count = 0;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if (nums[i] == 0) {
                count++;
            } else if (count > 0){
                nums[i-count] = nums[i];
                nums[i] = 0;
            }
        }
    }
};
