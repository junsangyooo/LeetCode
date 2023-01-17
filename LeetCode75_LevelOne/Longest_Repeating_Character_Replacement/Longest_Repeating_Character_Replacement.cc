// 424. Longest Repeating Character Replacement C++
#include <vector>
#include <string>
class Solution {
public:
    int characterReplacement(std::string s, int k) {
        if (s.size() == 0) return 0;
        std::vector<int> arr(128);
        int beg = 0, largestCount = 0;
        for (int end = 0; end < s.size(); end++) {
            largestCount = std::max(largestCount, ++arr[s[end]]);
            if (end - beg - largestCount >= k){
                arr[s[beg++]]--;
            }
        }
        return s.length() - beg;
    }
};
