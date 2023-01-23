// 695. Max Area of Island C++
#include <vector>

class Solution {
public:
    int row;
    int col;
    int maxAreaOfIsland(std::vector<std::vector<int>>& grid) {
        if (grid.empty()) return 0;
        row = grid.size();
        col = grid[0].size();
        int largest = 0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == 1) {
                    largest = std::max(largest, areaOfIsland(grid, i, j));
                }
            }
        }
        return largest;
    }
    int areaOfIsland(std::vector<std::vector<int>>& grid, int i, int j) {
        if (i < 0 || i >= row || j < 0 || j >= col || grid[i][j] != 1) return 0;
        grid[i][j] = 0;
        int size = 1;
        size += areaOfIsland(grid, i-1, j);
        size += areaOfIsland(grid, i+1, j);
        size += areaOfIsland(grid, i, j-1);
        size += areaOfIsland(grid, i, j+1);
        return size;
    }
};
