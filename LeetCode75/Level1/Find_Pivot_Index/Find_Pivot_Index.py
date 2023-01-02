# 724. Find Pivot Index Python
class Solution(object):
    def pivotIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        left = 0
        right = 0
        for num in nums:
            # if index == 0:
            #     continue    
            right += num
            
        for index, num in enumerate(nums):
            right -= num
            if left == right:
                return index
            else:
                left += num

        return -1
        