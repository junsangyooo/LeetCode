# 210. Course Schedule II Python

from collections import defaultdict
class Solution(object):
    WHITE = 1
    GRAY = 2
    BLACK = 3
    def findOrder(self, numCourses, prerequisites):
        """
        :type numCourses: int
        :type prerequisites: List[List[int]]
        :rtype: List[int]
        """
        adj_list = defaultdict(list)

        for dest, src in prerequisites:
            adj_list[src].append(dest)
        topological_sorted_order = []
        self.is_possible = True

        color = {k: Solution.WHITE for k in range(numCourses)}
        def dfs(node):
            if not self.is_possible:
                return
            color[node] = Solution.GRAY
            if node in adj_list:
                for neighbor in adj_list[node]:
                    if color[neighbor] == Solution.WHITE:
                        dfs(neighbor)
                    elif color[neighbor] == Solution.GRAY:
                        self.is_possible = False
            color[node] = Solution.BLACK
            topological_sorted_order.append(node)
        
        for vertex in range(numCourses):
            if color[vertex] == Solution.WHITE:
                dfs(vertex)

        return topological_sorted_order[::-1] if self.is_possible else []
