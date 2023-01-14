// 299 Bulls and Cows C++
#include <string>
#include <unordered_map>
class Solution {
public:
    std::string getHint(std::string secret, std::string guess) {
        std::unordered_map<char, int> s_map;
        std::unordered_map<char, int> g_map;
        int n = secret.size();
        int A = 0, B = 0;
        for (int i = 0; i < n; i++)
        {
            char s = secret[i], g = guess[i];
            if (s == g)
                A++;
            else
            {
                (s_map[g] > 0) ? s_map[g]--, B++ : g_map[g]++;
                (g_map[s] > 0) ? g_map[s]--, B++ : s_map[s]++; 
            }
        }
        return std::to_string(A) + "A" + std::to_string(B) + "B";
    }
};
