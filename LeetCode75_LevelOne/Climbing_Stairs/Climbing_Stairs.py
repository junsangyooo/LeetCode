# 70. Climbing Stairs Python

class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        # count = 0
        # max_two = n // 2
        # for i in range(0, max_two + 1, 1):
        #     one = n - 2*i
        #     deno = 1
        #     nume = 1
        #     for j in range(1, i+one+1, 1):
        #         nume *= j
        #     for k in range(1, one + 1, 1):
        #         deno *= k
        #     for p in range(1, i+1, 1):
        #         deno *= p
        #     count += nume//deno
        # return count

        dict = {}
        dict[1] = 1
        dict[2] = 2

        def climb(n):
            if n in dict:
                return dict[n]
            else:
                dict[n] = climb(n-1) + climb(n-2)
                return dict[n]
        
        return climb(n)
        
        
