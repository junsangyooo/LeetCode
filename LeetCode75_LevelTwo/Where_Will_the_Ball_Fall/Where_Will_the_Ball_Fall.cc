// 1706. Where Will the Ball Fall C++

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<int> output;
        for (int i = 0; i < cols; i++) {
            int row = 0;
            int col = i;
            while (true) {
                if (row == rows) {
                    output.emplace_back(col);
                    break;
                } else if (grid[row][col] == 1 && col == cols-1) {
                    output.emplace_back(-1);
                    break;
                } else if (grid[row][col] == 1 && grid[row][col + 1] == -1) {
                    output.emplace_back(-1);
                    break;
                } else if (grid[row][col] == 1) {
                    row++;
                    col++;
                } else if (grid[row][col] == -1 && col == 0) {
                    output.emplace_back(-1);
                    break;
                } else if (grid[row][col] == -1 && grid[row][col - 1] == 1) {
                    output.emplace_back(-1);
                    break;
                } else if (grid[row][col] == -1){
                    row++;
                    col--;
                }
            }
        }
        return output;
    }
};
