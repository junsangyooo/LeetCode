// 58. Length of Last Word
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int answer=0;
        bool wordStarted = false;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ' && !wordStarted) {
                wordStarted = true;
                answer+= 1;
            } else if (s[i] != ' ') answer += 1;
            else if (!wordStarted) continue;
            else break;
        }
        return answer;
    }
};
