// 189. Rotate Array C++

#include <vector>

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        int length = nums.size();
        k = k % length;
        int start = 0;
        int count = 0;
        while (count < length) {
            int current = start;
            int prev = nums[start];

            while (true) {
                int next = (current + k) % length;
                int tmp = nums[next];
                nums[next] = prev;
                count++;
                prev = tmp;
                current = next;
                if (current == start) break;
            }
            start++;
        }
    }
};