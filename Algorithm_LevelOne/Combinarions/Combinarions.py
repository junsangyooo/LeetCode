# 77. Combinations Python


class Solution(object):
    def combine(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: List[List[int]]
        """
        output = []
        def backtrack(start_elem = 1, curr=[]):
            if len(curr) == k:
                output.append(curr[:])
            for i in range(start_elem, n + 1):
                curr.append(i)
                backtrack(i + 1, curr)
                curr.pop()
        backtrack()
        return output
