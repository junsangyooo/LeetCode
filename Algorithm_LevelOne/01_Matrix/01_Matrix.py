# 542. 01 Matrix Python

class Solution(object):
    def updateMatrix(self, mat):
        """
        :type mat: List[List[int]]
        :rtype: List[List[int]]
        """
        if not mat:
            return mat
        row = len(mat)
        col = len(mat[0])
        MAX_DISTANCE = pow(10, 4) + pow(10, 4)
        dist = [[MAX_DISTANCE for i in range(col)] for j in range(row)]
        for i in range(row):
            for j in range(col):
                if mat[i][j] == 0:
                    dist[i][j] = 0
                else:
                    if i > 0:
                        dist[i][j] = min(dist[i][j], dist[i-1][j] + 1)
                    if j > 0:
                        dist[i][j] = min(dist[i][j], dist[i][j-1] + 1)
        for i in range(row-1, -1, -1):
            for j in range(col-1, -1, -1):
                if i < row - 1:
                    dist[i][j] = min(dist[i][j], dist[i+1][j] + 1)
                if j < col - 1:
                    dist[i][j] = min(dist[i][j], dist[i][j+1]+1)
        return dist
                    