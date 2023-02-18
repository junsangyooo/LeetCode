// 547. Number of Provinces C++
#include <vector>
using namespace std;

class Solution {
    int len;
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        len = isConnected.size();
        int count = 0;
        vector<int> visited(len, 0);
        for (int i = 0; i < len; i++) {
            if (visited[i] ==0){
                dfs(isConnected, visited, i);
                count++;
            }
        }
        return count;
    }
    void dfs(vector<vector<int>>& isConnected, vector<int>& visited, int i) {
        for (int j = 0; j < len; j++) {
            if (isConnected[i][j] == 1 && visited[j] == 0) {
                visited[j] = 1;
                dfs(isConnected, visited, j);
            }
        }
    }
};
