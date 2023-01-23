# 695. Max Area of Island Python

class Solution(object):
    def maxAreaOfIsland(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        if not grid:
            return 0
        
        largest = 0
        row = len(grid)
        col = len(grid[0])
        
        for r in range(row):
            for c in range(col):
                if grid[r][c] == 1:
                    largest = max(largest, self.areaOfIsland(grid, r, c))
        return largest
    def areaOfIsland(self, grid, i, j):
        if i < 0 or i >= len(grid) or j < 0 or j >= len(grid[0]) or grid[i][j] != 1:
            return 0
        grid[i][j] = 0
        size = 1
        size += self.areaOfIsland(grid, i-1, j)
        size += self.areaOfIsland(grid, i+1, j)
        size += self.areaOfIsland(grid, i, j-1)
        size += self.areaOfIsland(grid, i, j+1)
        return size
