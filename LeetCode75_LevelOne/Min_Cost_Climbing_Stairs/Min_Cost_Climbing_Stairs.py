# 746. Min Cost Climbing Stairs Python

class Solution(object):
    def minCostClimbingStairs(self, cost):
        """
        :type cost: List[int]
        :rtype: int
        """
        
        prepre = cost[0]
        pre = cost[1]
        count = 0
        for i in range(2, len(cost)):
            cur = cost[i] + min(pre, prepre)
            prepre = pre
            pre = cur
        
        return min(pre, prepre)
        