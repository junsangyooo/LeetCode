// 14. Longest Common Prefix
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int length = strs.size();
        if (length == 0) return "";

        string prefix = "";
        sort(strs.begin(), strs.end());
        string a = strs[0];
        string b = strs[length-1];
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == b[i]){
                prefix += a[i];
            } else break;
        }
        return prefix;
    }
};
