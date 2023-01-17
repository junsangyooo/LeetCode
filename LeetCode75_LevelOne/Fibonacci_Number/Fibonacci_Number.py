# 509 Fibonacci Number Python

class Solution(object):
    def fib(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n==0:
            return 0
        elif n==1:
            return 1
        pre = 1
        prepre = 0
        for i in range(n-1):
            tmp = pre
            pre = pre+prepre
            prepre = tmp
        return pre
