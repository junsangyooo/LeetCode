# 844. Backspace String Compare Python

class Solution(object):
    def backspaceCompare(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        newS = []
        newT = []
        for cs in s: newS = newS + [cs] if cs != '#' else newS[:-1]
        for ct in t: newT = newT + [ct] if ct != '#' else newT[:-1]
        return newS == newT
