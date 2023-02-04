// 2131. Longest Palindrome by Concatenating Two Letter Words C++
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        std::unordered_map<string, int> mp;
        int ans = 0, middle = 0;
        for (auto x: words) mp[x]++;
        for (auto [s, f]: mp) {
            string re(s.rbegin(), s.rend());
            if (s == re) {
                ans += f;
                if (f % 2 == 1) {
                    middle = 1;
                    ans -= 1;
                }
            } else if (mp.find(re) != mp.end()) {
                ans += min(mp[s], mp[re]);
            }
        }
        ans += middle;
        return ans * 2;
    }
};
