# 1706. Where Will the Ball Fall Python

class Solution(object):
    def findBall(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: List[int]
        """
        rows = len(grid)
        cols = len(grid[0])
        output = []
        for i in range(0, cols):
            row = 0
            col = i
            while True:
                if row == rows:
                    output.append(col)
                    break
                if grid[row][col] is 1 and col is cols - 1:
                    output.append(-1)
                    break
                elif grid[row][col] is 1 and grid[row][col + 1] is -1:
                    output.append(-1)
                    break
                elif grid[row][col] is 1:
                    row += 1
                    col += 1
                    continue
                elif grid[row][col] is -1 and col is 0:
                    output.append(-1)
                    break
                elif grid[row][col] is -1 and grid[row][col - 1] is 1:
                    output.append(-1)
                    break
                elif grid[row][col] is -1:
                    row += 1
                    col -= 1
                    continue
        return output
