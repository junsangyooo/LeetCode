# 121. Bset Time to Buy and Sell Stock Python

class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        left = 0
        right = 1
        profit = 0
        while right < len(prices):
            currentProfit = prices[right] - prices[left] #our current Profit
            if prices[left] < prices[right]:
                profit =max(currentProfit,profit)
            else:
                left = right
            right += 1
        return profit
