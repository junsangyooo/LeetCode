# 189. Rotate Array

class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        length = len(nums)
        k = k % length
        count = 0
        start = 0

        while count < length:
            current = start
            prev = nums[start]

            while True:
                nxt = (current + k) % length
                tmp = nums[nxt]
                nums[nxt] = prev
                prev = tmp
                current = nxt
                count += 1
                if start == current: break
        
            start+=1

