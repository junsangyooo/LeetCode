// 13. Roman to Integer
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string c) {
        int num = 0;
        
        for (int i = 0; i < c.size();i++) {
            if (c[i] == 'I') num += 1;
            else if (c[i] == 'V' && i != 0 && c[i - 1] == 'I') num += 3;
            else if (c[i] == 'V') num += 5;
            else if (c[i] == 'X' && i != 0 && c[i - 1] == 'I') num += 8;
            else if (c[i] == 'X') num += 10;
            else if (c[i] == 'L' && i != 0 && c[i - 1] == 'X') num += 30;
            else if (c[i] == 'L') num += 50;
            else if (c[i] == 'C' && i != 0 && c[i - 1] == 'X') num += 80;
            else if (c[i] == 'C') num += 100;
            else if (c[i] == 'D' && i != 0 && c[i - 1] == 'C') num += 300;
            else if (c[i] == 'D') num += 500;
            else if (c[i] == 'M' && i != 0 && c[i - 1] == 'C') num += 800;
            else if (c[i] == 'M') num += 1000;
        }
        return num;
    }
};
