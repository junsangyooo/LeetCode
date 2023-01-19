// 167. Two Sum II - Input Array Is Sorted C++

#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        int max = numbers.size();
        int min = 1;
        std::vector<int> output;
        while (true) {
            if (numbers[max-1] + numbers[min-1] > target) max -= 1;
            else if (numbers[max-1] + numbers[min-1] < target) min += 1;
            else {
                output.emplace_back(min);
                output.emplace_back(max);
                break;
            }
        }
        return output;
    }
};
