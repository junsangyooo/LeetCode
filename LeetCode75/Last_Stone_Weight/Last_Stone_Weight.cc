// 1046. Last Stone Weight C++
#include <vector>
#include <queue>

class Solution {
public:
    int lastStoneWeight(std::vector<int>& stones) {
        std::priority_queue<int, std::vector<int>> q;
        int x, y;
        
        for(auto x:stones) q.push(x);
        
        while(q.size() != 1){
            y = q.top();
            q.pop();
            x = q.top();
            q.pop();

            q.push(y-x);
        }
        
        return q.top();
    }
};
