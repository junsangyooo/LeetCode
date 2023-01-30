# 136. Single Number Python

class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        dic = {}
        for i in nums:
            if i in dic:
                dic[i] += 1
            else: dic[i] = 1
        
        for i in dic:
            if dic[i] == 1:
                return i
        