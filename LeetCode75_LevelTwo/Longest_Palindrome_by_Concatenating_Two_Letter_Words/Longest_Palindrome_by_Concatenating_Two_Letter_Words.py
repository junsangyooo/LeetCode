# 2131. Longest Palindrome by Concatenating Two Letter Words Python

class Solution(object):
    def longestPalindrome(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        wc = collections.Counter(words)
        iden = 0
        center = 0
        abba = 0
        for w, c in wc.items():
            if w[0] == w[1]:
                iden += c // 2 * 2
                if c % 2 == 1: center = 2
            else:
                abba += min(wc[w], wc[w[::-1]]) * 0.5
        return iden * 2 + int(abba) * 4 + center
