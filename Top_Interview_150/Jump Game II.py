# 45. Jump Game II
class Solution(object):
    def jump(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) == 1:
            return 0
        
        jumps = 0
        current_end = 0
        furthest_reachable = 0

        for i in range(len(nums) - 1):
            furthest_reachable = max(furthest_reachable, i + nums[i])
            if i == current_end:
                jumps += 1
                current_end = furthest_reachable
        return jumps
    