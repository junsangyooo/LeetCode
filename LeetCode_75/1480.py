# 1480. Running Sum of 1d Array
class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        lst = []
        for index, num in enumerate(nums):
            if index == 0:
                lst.append(num)
            else:
                lst.append(num + lst[index - 1])
        return lst