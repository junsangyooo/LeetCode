# 3. Longest Substring Without Repeating Characters Python

class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        lst = []
        longest = 0
        count = 0
        for i in range(len(s)):
            if s[i] in lst:
                if longest < count:
                    longest = count
                index = lst.index(s[i])
                count -= index
                lst = lst[index + 1:]
                lst.append(s[i])
            else:
                lst.append(s[i])
                count += 1
        return count if longest < count else longest
                