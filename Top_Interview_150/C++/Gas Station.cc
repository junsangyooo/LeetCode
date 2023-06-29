// 134. Gas Station
#include <vector>
#include <unordered_map>
#include <iostream>

class Solution {
public:
    int canCompleteCircuit(std::vector<int>& gas, std::vector<int>& cost) {
        // std::vector<int> margin;
        // std::unordered_map<int, int> startIndex;
        // int marginSum = 0;
        // int n = gas.size();
        // for (int i = 0; i < n; i++) {
        //     margin.push_back(gas[i] - cost[i]);
        //     marginSum += margin.back();
        //     if (margin.back() >= 0) {
        //         startIndex.insert(std::pair<int, int>(i, margin.back()));
        //     }
        // }
        // if (marginSum < 0) return -1;
        // for (int x: margin) std::cout << x << std::endl;
        // for (auto p : startIndex) {
        //     int index = p.first < n - 1 ? p.first + 1 : 0;
        //     int sum = p.second;
        //     while (index != p.first) {
        //         sum += margin[index];
        //         if (sum < 0) break;
        //         index = index < n - 1 ? index + 1 : 0;
        //     }
        //     if (index == p.first) return p.first;
        // }
        // return -1;
        int currGain = 0, totalGain = 0, answer = 0;
        
        for (int i = 0; i < gas.size(); ++i) {
            totalGain += gas[i] - cost[i];
            currGain += gas[i] - cost[i];
            
            if (currGain < 0) {
                answer = i + 1;
                currGain = 0;
            }
        }
        
        return totalGain >= 0 ? answer : -1;
    }
};
