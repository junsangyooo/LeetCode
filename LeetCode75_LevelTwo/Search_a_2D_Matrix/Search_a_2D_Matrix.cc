// 74. Search a 2D Matrix C++
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty()) return false;
        int rows = matrix.size();
        int cols = matrix[0].size();
        int bottom_row = 0;
        int top_row = rows - 1;
        // int bottom_col = 0;
        // int top_col = cols - 1;
        while (bottom_row <= top_row) {
            int mid_row = (bottom_row + top_row) / 2;
            //int mid_col = (bottom_col + top_col) / 2;
            if (target >= matrix[mid_row][0] && target <= matrix[mid_row][cols - 1]) {
                int top_col = cols - 1;
                int bottom_col = 0;
                while (bottom_col <= top_col) {
                    int mid_col = (top_col + bottom_col) / 2;
                    if (matrix[mid_row][mid_col] == target) return true;
                    else if (target < matrix[mid_row][mid_col]) top_col = mid_col - 1;
                    else bottom_col = mid_col + 1;
                }
                return false;
            } else if (target < matrix[mid_row][0]) top_row = mid_row - 1;
            else bottom_row = mid_row + 1;
        }
        return false;
    }
};
