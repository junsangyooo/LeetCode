# 1. Two Sum Python
class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        dict={}
        for i, ele in enumerate(nums):
            if target - ele in dict:
                return dict[target-ele], i
            dict[ele]= i
