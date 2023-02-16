// 57. Insert Interval C++
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> output;
        int start = newInterval[0];
        int end = newInterval[1];
        bool found = false;
        for (auto x: intervals) {
            if (found) {
                output.emplace_back(x);
                continue;
            }
            if (start > x[1]) {
                output.emplace_back(x);
            } else if (end < x[0]) {
                output.emplace_back( vector<int>{start, end});
                output.emplace_back(x);
                found = true;
            } else {
                start = min(start, x[0]);
                end = max(end, x[1]);
            }
        }
        if (!found) {
            output.emplace_back(vector<int>{start, end});
        }
        return output;
    }
};
