# 202. Happy Number Python

class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        hash_set = set()
        while n != 1 and n not in hash_set:
            hash_set.add(n)
            new_num = 0
            while n > 0:
                new_num += pow(n % 10, 2)
                n = n // 10
            n = new_num
        return n == 1
