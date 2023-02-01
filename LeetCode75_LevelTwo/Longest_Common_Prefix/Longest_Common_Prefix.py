# 14. Longest Common Prefix Python

class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if not strs: return ""
        for index in range(1, len(strs)):
            s = strs[index]
            if len(s) < len(prefix):
                prefix = prefix[:len(s)]
            for i in range(len(s)):
                if i == len(prefix): break
                if s[i] != prefix[i]:
                    prefix = prefix[:i]
                    break
        return prefix
