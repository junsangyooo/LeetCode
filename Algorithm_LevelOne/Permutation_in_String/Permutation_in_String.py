# 567. Permutation in String Python

class Solution(object):
    def checkInclusion(self, s1, s2):
        """
        :type s1: str
        :type s2: str
        :rtype: bool
        """
        if len(s2) < len(s1):
            return False
        s1Counter = {}
        for c in s1:
            if c not in s1Counter:
                s1Counter[c] = 0
            s1Counter[c] += 1
        
        start = 0
        s2Counter = {}
        for end, char in enumerate(s2):
            if char not in s2Counter:
                s2Counter[char] = 0
            s2Counter[char] += 1
            size = end - start + 1
            if size == len(s1):
                if s1Counter == s2Counter:
                    return True
                if s2Counter[s2[start]] == 1:
                    del s2Counter[s2[start]]
                else:
                    s2Counter[s2[start]] -= 1
                start += 1
        return False
