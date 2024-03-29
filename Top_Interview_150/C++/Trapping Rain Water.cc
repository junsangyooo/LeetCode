// 42. Trapping Rain Water
#include <vector>

using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        // if(height.empty()) return 0;
        // int ans = 0;
        // int size = height.size();
        // vector<int> left_max(size);
        // vector<int> right_max(size);
        // left_max[0] = height[0];
        // for (int i = 1; i < size; i++) {
        //     left_max[i] = max(height[i], left_max[i - 1]);
        // }
        // right_max[size - 1] = height[size - 1];
        // for (int i = size - 2; i >= 0; i--) {
        //     right_max[i] = max(height[i], right_max[i + 1]);
        // }
        // for (auto x : right_max) cout << x;
        // for (int i = 1; i < size - 1; i++) {
        //     ans += min(left_max[i], right_max[i]) - height[i];
        // }
        // return ans;
        // int ans = 0, current = 0;
        // stack<int> st;
        // while (current < height.size()) {
        //     while (!st.empty() && height[current] > height[st.top()]) {
        //         int top = st.top();
        //         st.pop();
        //         if (st.empty())
        //             break;
        //         int distance = current - st.top() - 1;
        //         int bounded_height = min(height[current], height[st.top()]) - height[top];
        //         ans += distance * bounded_height;
        //     }
        //     st.push(current++);
        // }
        // return ans;
        int left = 0, right = height.size() - 1;
        int ans = 0;
        int left_max = 0, right_max = 0;
        while (left < right) {
            if (height[left] < height[right]) {
                height[left] >= left_max ? (left_max = height[left]) : ans += (left_max - height[left]);
                ++left;
            }
            else {
                height[right] >= right_max ? (right_max = height[right]) : ans += (right_max - height[right]);
                --right;
            }
        }
        return ans;
    }
};