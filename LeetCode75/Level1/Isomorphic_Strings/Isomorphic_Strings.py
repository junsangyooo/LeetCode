# 205. Isomorphic Strings Python

class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        # if len(s) != len(t): return False
        # map1 = []
        # map2 = []
        # for ch in s:
        #     map1.append(s.index(ch))
        # for ch in t:
        #     map2.append(t.index(ch))
        # return map1 == map2

        hashmap = {}
        for i in range(len(s)):
            if s[i] in hashmap and hashmap[s[i]]!=t[i]:
                return False
            hashmap[s[i]]=t[i]
        if len(set(hashmap.values())) != len(hashmap.values()):
            return False
        return True
        