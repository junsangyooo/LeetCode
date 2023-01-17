# 438. Fina All Anagrams in a String Python
from collections import Counter

class Solution(object):
    def findAnagrams(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: List[int]
        """
        dic = Counter(p)
        
        output = []
        i = 0
        j = len(p)
        dicTwo = Counter(s[:j])
        while j <= len(s):
            if dic == dicTwo:
                output.append(i)
            dicTwo[s[i]] -= 1
            if dicTwo[s[i]] <= 0:
                dicTwo.pop(s[i])
            if j < len(s):
                dicTwo[s[j]] += 1
            i += 1
            j += 1
        return output
