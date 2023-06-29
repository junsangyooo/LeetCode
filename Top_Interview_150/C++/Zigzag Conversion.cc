// 6. Zigzag Conversion
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.size() == 1) return s;
        
        vector<string> rowWord(numRows, "");
        string answer;
        int amount = (numRows - 1) * 2;
        int rowCount = 0;
        bool up = true;
        for (int i = 0; i < s.size(); i++) {
            if (i % amount == 0) {
                rowWord[rowCount] += s[i];
                up = true;
            } else if ((i * 2) % amount == 0) {
                up = false;
                rowWord[rowCount] += s[i];
            } else {
                rowWord[rowCount] += s[i];
            }

            up ? rowCount++ : rowCount--;
        }
        for (string st : rowWord) answer += st;
        return answer;
    }
};
