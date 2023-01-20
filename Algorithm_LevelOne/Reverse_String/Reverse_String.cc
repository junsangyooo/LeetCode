// Reverse String C++

#include <vector>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        int high = s.size() - 1;
        int low = 0;
        while (low < high) {
            char tmp = s[low];
            s[low++] = s[high];
            s[high--] = tmp;
        }
    }
};
