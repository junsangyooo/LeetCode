# 392. Group Anagrams Python
class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        pre = -1
        for c in s:
            if c not in t: return False
            index = t.find(c, pre+1)
            if index == -1: return False
            pre = index
        
        return True
