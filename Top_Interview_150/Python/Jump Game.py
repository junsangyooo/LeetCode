# 55. Jump Game
class Solution(object):
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        # lst = [0] * len(nums)
        # lst[0] = 1
        # for i in range(0, len(nums)):
        #     if lst[i] == 1 and nums[i] > 0:
        #         if i + nums[i] >= len(nums) -1
        #         for j in range(1, nums[i] + 1):
        #             if i + j == len(nums) - 1:
        #                 return True
        #             elif i + j < len(nums):
        #                 lst[i + j] = 1
        # return lst[-1] == 1
        lastPos = len(nums) - 1
        for i in range(len(nums) - 1, -1, -1):
            if i + nums[i] >= lastPos:
                lastPos = i
        return lastPos == 0
