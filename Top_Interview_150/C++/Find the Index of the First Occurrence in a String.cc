// 28. Find the Index of the First Occurrence in a String
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.size() < needle.size()) return -1;
        if (haystack == needle) return 0;
        int count = 0;
        int tmpIndex = 0;
        for (int i = 0; i < haystack.size();) {
            if (haystack[i] == needle[count]) {
                if (count == needle.size() - 1) return i - count;
                count++;
                i++;
            } else if (count > 0){
                i -= count - 1;
                count = 0;
            } else i++;
        }
        return -1;
    }
};
