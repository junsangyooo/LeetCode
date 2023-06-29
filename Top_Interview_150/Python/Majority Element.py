class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        return nums[len(nums)/2]
        # count = 0
        # majorElement = None
        # for num in nums:
        #     if count == 0:
        #         majorElement = num
        #     count += 1 if majorElement == num else -1
        # return majorElement