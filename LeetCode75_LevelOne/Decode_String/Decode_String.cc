// 394. Decode String C++
#include <string>

class Solution {
public:
    int index = 0;
    std::string decodeString(std::string s) {
        int len = s.size();
        std::string output = "";
        int num = 0;
        while (index < len) {
            char c = s[index];
            if (c >= '0' && c <= '9') {
                num = num*10 + int(c-'0');
            } else if (c == '[') {
                output += decode(s, num);
                num = 0;
                continue;
            } else if (c == ']') {
                index++;
                return output;
            } else {
                output += c;
            }
            index++;
        }
        return output;
    }
    std::string decode(std::string s, int num) {
        index++;
        std::string repeat = decodeString(s);
        std::string output = "";
        for (int i = 0; i < num; i++) {
            output += repeat;
        }
        return output;
    }
};
