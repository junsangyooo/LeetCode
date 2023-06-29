// 274. H-Index C++
#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <algorithm>


class Solution {
public:
    int hIndex(std::vector<int>& citations) {
        // std::map<int, int> hash;

        // for (int num: citations) {
        //     for (int i = 0; i <= num; i++) {
        //         if (hash.find(i) == hash.end()) {
        //             hash.insert(std::pair<int, int>(i, 1));
        //         } else {
        //             hash[i]++;
        //         }
        //     }
        // }
        // std::map<int, int>::reverse_iterator it;
 
        // // rbegin() returns to the last value of map
        // for (it = hash.rbegin(); it != hash.rend(); it++) {
        //     if (it->second >= it->first) return it->first;
        // }
        // return 0;

        std::sort(citations.begin(), citations.end());
        for (int i = 0; i < citations.size(); i++) {
            if (citations.at(i) >= citations.size() - i) return citations.size() - i;
        }
        return 0;
    }
};