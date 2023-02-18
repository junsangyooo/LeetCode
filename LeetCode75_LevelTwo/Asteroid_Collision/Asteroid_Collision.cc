// 735. Asteroid Collision C++
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        bool add = true;
        for (auto &x: asteroids) {
            while (!ans.empty() && x < 0 && ans.back() > 0) {
                if ((x * -1) > ans.back()) {
                    ans.pop_back();
                    continue;
                } else if ((x * -1) == ans.back()) {
                    ans.pop_back();
                    add = false;
                }
                add = false;
                break;
            }
            if (add) ans.emplace_back(x);
            add = true;
        }
        return ans;
    }
};
