// 43. Multiply Strings C++

#include <string>
using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        int length1 = num1.size();
        int length2 = num2.size();
        if (length1 == 0 || length2 == 0) return "0";
        string ans(length1 + length2, '0');
        for (int i = length1 - 1; i >= 0; i--) {
            for (int j = length2 - 1; j >= 0; j--) {
                int sum = (num1[i] - '0') * (num2[j] - '0') + (ans[i + j + 1] - '0');
                ans[i + j + 1] = sum % 10 + '0';
                ans[i + j] += sum / 10;
            }
        }
        for (int i = 0; i < length1 + length2; i++){
            if (ans[i] != '0') {
                return ans.substr(i);
            }
        }
        return "0";
    }
};
