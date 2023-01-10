# 200. Number of Islands Python

class Solution(object):
    def numIslands(self, grid):
        """
        :type grid: List[List[str]]
        :rtype: int
        """
        count = 0
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == '1':
                    self.island(grid, i, j)
                    count += 1
        return count
    def island(self, grid, i, j):
        if i < 0 or j < 0 or i > len(grid) - 1 or j > len(grid[0]) - 1 or grid[i][j] != '1':
            return
        grid[i][j] = '&'
        self.island(grid, i-1, j)
        self.island(grid, i+1, j)
        self.island(grid, i, j-1)
        self.island(grid, i, j+1)
        