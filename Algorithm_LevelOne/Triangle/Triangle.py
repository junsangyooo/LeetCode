# 120. Triangle Python

class Solution(object):
    def minimumTotal(self, triangle):
        """
        :type triangle: List[List[int]]
        :rtype: int
        """
        for row in range(1, len(triangle)):
            for col in range(row + 1):
                smallest_above = 9223372036854775807
                if col > 0:
                    smallest_above = triangle[row - 1][col - 1]
                if col < row:
                    smallest_above = min(smallest_above, triangle[row - 1][col])
                triangle[row][col] += smallest_above
        return min(triangle[-1])
