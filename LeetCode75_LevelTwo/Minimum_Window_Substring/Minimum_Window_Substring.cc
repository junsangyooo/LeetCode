// 76. Minimum Window Substring C++
#include <string>
#include <unordered_map>
#include <vector>

class Solution {
public:
    std::string minWindow(std::string s, std::string t) {
        if (t == "" || s == "" || s.size() < t.size()) return "";
        if (s == t) return t;
        std::unordered_map<char, int> dict_t;
        for(int i = 0; i < t.size(); i++){
            dict_t[t[i]]++;
        }

        std::vector<std::pair<int, char>> filtered_s;
        for (int i = 0; i < s.size(); i++) {
            if (dict_t.find(s[i]) != dict_t.end()){
                filtered_s.emplace_back(std::make_pair(i, s[i]));
            }
        }

        int required = dict_t.size();
        int l = 0;
        int r = 0;
        int formed = 0;
        std::unordered_map<char, int> window_counts;
        std::vector<int> ans{100001, 0, 0};

        while (r < filtered_s.size()) {
            char c = filtered_s[r].second;
            window_counts[c]++;
            if (window_counts[c] == dict_t[c]) formed++;

            while (l <= r && formed == required) {
                c = filtered_s[l].second;
                int end = filtered_s[r].first;
                int start = filtered_s[l].first;
                if (end - start + 1 < ans[0]) {
                    ans[0] = end - start + 1;
                    ans[1] = start;
                    ans[2] = end;
                }
                window_counts[c]--;
                if (window_counts[c] < dict_t[c]) formed--;
                l++;
            }
            r++;
        }
        return ans[0] == 100001 ? "" : s.substr(ans[1], ans[0]);
    }
};
