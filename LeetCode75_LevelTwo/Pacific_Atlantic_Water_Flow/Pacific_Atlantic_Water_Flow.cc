// 417. Pacific Atlantic Water Flow C++
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        queue<pair<int, int>> pacific;
        queue<pair<int, int>> atlantic;
        int rows = heights.size();
        int cols = heights[0].size();
        for (int i = rows-1; i >= 0; i--) {
            pacific.push({i, 0});
            atlantic.push({i, cols - 1});
        }
        for (int i = cols-1; i >= 0; i--) {
            pacific.push({0, i});
            atlantic.push({rows - 1, i});
        }
        vector<vector<int>> visp(rows, vector<int>(cols,0));
        vector<vector<int>> visq(rows, vector<int>(cols,0));
        bfs(pacific, visp, heights);
        bfs(atlantic, visq, heights);

        vector<vector<int>> ans;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (visp[i][j] == 1 && visq[i][j] == 1) ans.push_back({i, j});
            }
        }
        return ans;
    }
    void bfs(queue<pair<int, int>>& q, vector<vector<int>> &vis, vector<vector<int>>& heights) {
        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            vis[row][col] = 1;
            vector<int>dir={0,1,0,-1,0};
            for (int i = 0; i < 4; i++) {
                int new_row = row + dir[i];
                int new_col = col + dir[i + 1];
                if (new_row < 0 || new_row >= heights.size() || new_col < 0 || new_col >= heights[0].size()) continue;
                if (heights[row][col] > heights[new_row][new_col]) continue;
                if (vis[new_row][new_col] == 1) continue;
                q.push({new_row, new_col});
            }
        }
    }
};
