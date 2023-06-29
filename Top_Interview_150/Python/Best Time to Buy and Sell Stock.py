# 121. Best Time to Buy and Sell Stock

class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        minPrice = prices[0]
        profit = 0
        for i in range(1, len(prices)):
            if prices[i] - minPrice > profit:
                profit = prices[i] - minPrice
            elif prices[i] < minPrice:
                minPrice = prices[i]
        return profit
    