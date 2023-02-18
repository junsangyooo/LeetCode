# 547. Number of Provinces Python

class Solution(object):
    def findCircleNum(self, isConnected):
        """
        :type isConnected: List[List[int]]
        :rtype: int
        """
        length = len(isConnected)
        visited = [0] * length
        count = 0
        for i in range(length):
            if visited[i] == 0 :
                self.dfs(isConnected, visited, i)
                count+=1
        return count
    def dfs(self, isConnected, visited, i):
        for j in range(len(isConnected)):
            if isConnected[i][j] == 1 and visited[j] == 0:
                visited[j] = 1
                self.dfs(isConnected, visited, j)
