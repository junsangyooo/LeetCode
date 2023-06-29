# 27. Remove Element
class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        index1 = 0
        index2 = len(nums) - 1
        count = 0
        while index1 <= index2:
            if index1 == index2 and nums[index1] == val:
                nums[index1] = None
                break
            if nums[index1] == val and nums[index2] == val:
                nums[index2] = None
                index2 -=1
            elif nums[index1] == val:
                nums[index1] = nums[index2]
                nums[index2] = None
                index1 += 1
                index2 -= 1
                count += 1
            else:
                count += 1
                index1 += 1
        return count
    