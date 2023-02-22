# 74. Search a 2D Matrix Python
class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        if not matrix: return False
        rows = len(matrix)
        cols = len(matrix[0])
        t_row = rows - 1
        b_row = 0
        t_col = cols - 1
        b_col = 0
        while b_row <= t_row:
            m_row = (t_row + b_row) // 2
            if target >= matrix[m_row][0] and target <= matrix[m_row][cols - 1]:
                while b_col <= t_col:
                    m_col = (t_col + b_col) // 2
                    if target == matrix[m_row][m_col]: return True
                    elif target < matrix[m_row][m_col]: t_col = m_col - 1
                    else: b_col = m_col + 1
                return False
            elif target < matrix[m_row][0]: t_row = m_row - 1
            else: b_row = m_row + 1
        return False
