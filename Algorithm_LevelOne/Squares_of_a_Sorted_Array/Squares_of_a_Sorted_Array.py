# 977. Suqares of a Sorted Array Python

class Solution(object):
    def sortedSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        lst = []
        for num in nums:
            lst.append(num**2)
        
        lst.sort()
        return lst
