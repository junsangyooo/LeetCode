# Reverse String Python

class Solution(object):
    def reverseString(self, s):
        """
        :type s: List[str]
        :rtype: None Do not return anything, modify s in-place instead.
        """
        high = len(s) - 1
        low = 0
        while low < high:
            s[low], s[high] = s[high], s[low]
            low += 1
            high -= 1