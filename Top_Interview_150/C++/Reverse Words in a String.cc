// 151. Reverse Words in a String
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stack<char> st;
        string answer = "";
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                if (!st.empty()) {
                    answer == "" ? answer += getReverse(st) : answer += " " + getReverse(st);
                }
            } else {
                st.push(s[i]);
                if (i == 0) answer == "" ? answer += getReverse(st) : answer += " " + getReverse(st);
            }
        }
        return answer;
    }
    string getReverse(stack<char>& st) {
        string word = "";
        while (!st.empty()) {
            word += st.top();
            st.pop();
        }
        return word;
    }
};
