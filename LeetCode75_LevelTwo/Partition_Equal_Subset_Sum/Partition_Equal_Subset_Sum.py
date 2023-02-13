# 416. Partition Equal Subset Sum Python

class Solution(object):
    def canPartition(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        count = sum(nums)
        if count % 2 != 0: return False
        subset_sum = count // 2

        dp = [False] * (subset_sum + 1)
        dp[0] = True

        for curr in nums:
            for j in range(subset_sum, curr - 1, -1):
                dp[j] = dp[j] or dp[j-curr]

        return dp[subset_sum]
