// 68. Text Justification
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> answer;
        vector<string> oneLine;
        int count = 0;
        int wordCount = 0;
        for (int i = 0; i < words.size(); i++) {
            if (count + words[i].size() + wordCount <= maxWidth) {
                oneLine.push_back(words[i]);
                count += words[i].size();
                wordCount++;
            } else {
                answer.push_back(getJustified(oneLine, maxWidth, count, false));
                count = words[i].size();
                wordCount = 1;
                oneLine.clear();
                oneLine.push_back(words[i]);
            }
        }
        answer.push_back(getJustified(oneLine, maxWidth, count, true));
        return answer;
    }
    string getJustified(vector<string> words, int maxWidth, int count, bool lastLine) {
        string sentence = "";
        if (words.size() == 1) {
            sentence += words[0];
            for (int i = maxWidth; i > count; i--) sentence += " ";
            return sentence;
        } else if (lastLine) {
            for (int i = 0; i < words.size(); i++) {
                if (i != 0) sentence += " ";
                sentence += words[i];
            }
            for (int i = maxWidth; i > count + words.size() - 1; i--) sentence += " ";
            return sentence;
        }
        int spareSpace = 0;
        int spaces = 0;
        spareSpace = (maxWidth - count) % (words.size() - 1);
        spaces = (maxWidth - spareSpace - count) / (words.size() - 1);
        for (int i = 0; i < words.size(); i++) {
            sentence += words[i];
            if (i == words.size() - 1) return sentence;
            for (int i = 0; i < spaces; i++) sentence += " ";
            if (spareSpace > 0) {
                sentence += " ";
                spareSpace -= 1;
            }
        }
        return sentence;
    }
};
