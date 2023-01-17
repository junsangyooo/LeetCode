# 409. Longest Palindrome Python
class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: int
        """
        lst = set(s)
        single = False
        longest = 0
        for c in lst:
            count = s.count(c)
            if count % 2 == 0 and count != 0:
                longest += count
            elif count % 2 == 1:
                longest += count - 1
                single = True
            else: continue
        if single: return longest + 1
        return longest
        