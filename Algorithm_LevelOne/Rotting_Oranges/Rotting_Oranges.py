# 994. Rotting Oranges Python
from collections import deque

class Solution(object):
    def orangesRotting(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        queue = deque()

        fresh_count = 0
        rows, cols = len(grid), len(grid[0])
        for r in range(rows):
            for c in range(cols):
                if grid[r][c] == 2:
                    queue.append((r, c))
                elif grid[r][c] == 1:
                    fresh_count += 1
        queue.append((-1, -1))

        minute = -1
        directions = [(-1, 0), (0, 1), (1, 0), (0, -1)]
        while queue:
            row, col = queue.popleft()
            if row == -1:
                minute += 1
                if queue:
                    queue.append((-1, -1))
            else:
                for d in directions:
                    neighbor_row, neighbor_col = row + d[0], col + d[1]
                    if rows > neighbor_row >= 0 and cols > neighbor_col >= 0:
                        if grid[neighbor_row][neighbor_col] == 1:
                            grid[neighbor_row][neighbor_col] = 2
                            fresh_count -= 1
                            queue.append((neighbor_row, neighbor_col))
        return minute if fresh_count == 0 else -1
