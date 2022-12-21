class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        lst = set(s)
        for c in lst:
            if s.count(c) != t.count(c):
                return False
        
        return len(s) == len(t)