# 80. Remove Duplicates from Sorted Array II
class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        j = 0
        count = 1
        for i in range(1, len(nums)):
            if nums[j] == nums[i] and count == 1:
                j += 1
                nums[j] = nums[i]
                count += 1
            elif nums[j] != nums[i]:
                j += 1
                nums[j] = nums[i]
                count = 1
        for i in range(j + 1, len(nums)):
            nums[i] = None
        return j + 1
