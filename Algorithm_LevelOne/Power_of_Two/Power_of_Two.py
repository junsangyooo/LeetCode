# 231. Power of Two Python

class Solution(object):
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n == 0:
            return False
        return n & (n - 1) == 0
