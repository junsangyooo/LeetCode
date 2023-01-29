// 120. Triangle C++
#include <vector>
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int rows = triangle.size();
        for (int row = 1; row < rows; row++) {
            for (int col  = 0; col < row + 1; col++) {
                int smallest_above = 2147483647;
                if (col > 0) {
                    smallest_above = triangle[row -1 ][col - 1];
                }
                if (col < row) {
                    smallest_above = min(smallest_above, triangle[row - 1][col]);
                }
                triangle[row][col] += smallest_above;
            }
        }
        int ans = triangle[rows - 1][0];
        for (int i = 1; i < triangle[rows - 1].size(); i++){
            ans = min(ans, triangle[rows - 1][i]);
        }
        return ans;
    }
};
