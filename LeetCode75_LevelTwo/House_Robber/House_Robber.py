# 198. House Robber Python

class Solution(object):
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        self.memo = {}
        return self.robFrom(0, nums)
    def robFrom(self, i, nums):
        if i >= len(nums):
            return 0

        if i in self.memo:
            return self.memo[i]

        output = max(self.robFrom(i + 1, nums), self.robFrom(i + 2, nums) + nums[i])

        self.memo[i] = output
        return output
        