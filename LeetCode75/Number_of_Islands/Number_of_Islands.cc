// 200. Number of Islands C++

#include <vector>

class Solution {
public:
    int rows, cols;
    int numIslands(std::vector<std::vector<char>>& grid) {
        int count = 0;
        if (grid.empty()) return count;
        rows = grid.size();
        cols = grid[0].size();
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == '1') {
                    island(grid, i, j);
                    count++;
                }
            }
        }
        return count;
    }
    void island(std::vector<std::vector<char>>& grid, int i, int j) {
        if (i < 0 || j < 0 || i >= rows || j >= cols || grid[i][j] != '1') return;
        grid[i][j] = '&';
        island(grid, i-1, j);
        island(grid, i+1, j);
        island(grid, i, j-1);
        island(grid, i, j+1);
    }
};
