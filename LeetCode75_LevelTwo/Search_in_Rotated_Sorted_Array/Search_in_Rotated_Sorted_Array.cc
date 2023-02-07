// 33. Search in Rotated Sorted Array C++
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int length = nums.size();
        if (length == 1){
            if (nums[0] == target) return 0;
            return -1;
        } else if (length == 0) return -1;

        int pivot = find_pivot(nums, 0, length - 1);
        if (nums[pivot] == target) return pivot;
        if (pivot == 0) return search(nums, 0, length - 1, target);
        if (target < nums[0]) return search(nums, pivot, length - 1, target);
        return search(nums, 0, pivot, target);
    }
    int find_pivot(vector<int>& nums, int left, int right) {
        if (nums[left] < nums[right]) return 0;
        while (left <= right) {
            int pivot = (left + right) / 2;
            if (nums[pivot] > nums[pivot + 1]) return pivot + 1;
            else if (nums[pivot] < nums[left]) right = pivot - 1;
            else left = pivot + 1;
        }
        return 0;
    }
    int search(vector<int>& nums, int left, int right, int target) {
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] > target) right = mid - 1;
            else left = mid + 1;
        }
        return -1;
    }
};
