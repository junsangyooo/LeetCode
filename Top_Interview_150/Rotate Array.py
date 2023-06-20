# 189. Rotate Array

class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        l = len(nums)
        count = 0
        start = 0
        while count < l:
            current = start
            prev = nums[start]

            while True:
                nxt = (current + k) % l
                nums[nxt], prev = prev, nums[nxt]
                current = nxt
                count += 1
                if start == current: break
            
            start += 1
            