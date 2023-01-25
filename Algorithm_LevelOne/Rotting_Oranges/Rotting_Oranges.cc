// 994. Rotting Oranges C++
#include <vector>
#include <queue>

class Solution {
public:
    int orangesRotting(std::vector<std::vector<int>>& grid) {
        if (grid.empty()) return 0;

        std::queue<std::pair<int, int>> q;
        int fresh_count = 0;
        int rows = grid.size();
        int cols = grid[0].size();

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 2) q.push({i, j});
                else if (grid[i][j] == 1) fresh_count++;
            }
        }

        int minute = 0;
        std::vector<std::pair<int, int>> dirs = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
        while (fresh_count != 0 && !q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                int row = q.front().first;
                int col = q.front().second;
                q.pop();
                for (auto x: dirs) {
                    int neighbor_row = row + x.first;
                    int neighbor_col = col + x.second;
                    if (neighbor_row >= 0 && neighbor_row < rows && neighbor_col >= 0 && neighbor_col < cols && grid[neighbor_row][neighbor_col] == 1) {
                        grid[neighbor_row][neighbor_col] = 2;
                        fresh_count--;
                        q.push({neighbor_row, neighbor_col});
                    }
                }
            }
            minute++;
        }
        return fresh_count == 0 ? minute : -1;
    }
};
