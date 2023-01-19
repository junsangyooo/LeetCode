# 283. Move Zeroes Python

class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        count = 0
        length = len(nums)
        for i in range(length):
            if nums[i] != 0:
                nums[i-count] = nums[i]
            else:
                count+=1
        for i in range(length - count, length):
            nums[i] = 0
