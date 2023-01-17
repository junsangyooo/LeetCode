# 733. Flood Fill Python

class Solution(object):
    def floodFill(self, image, sr, sc, color):
        """
        :type image: List[List[int]]
        :type sr: int
        :type sc: int
        :type color: int
        :rtype: List[List[int]]
        """
        self.fillNeigh(image, sr,sc,color, image[sr][sc], len(image), len(image[0]))
        return image
    def fillNeigh(self, image, r, c, color, to_change, rows, cols):
        if r < 0 or c < 0 or r > rows -1 or c > cols -1 or image[r][c] == color or image[r][c] != to_change:
            return
        image[r][c] = color
        self.fillNeigh(image, r-1, c, color, to_change, rows, cols)
        self.fillNeigh(image, r+1, c, color, to_change, rows, cols)
        self.fillNeigh(image, r, c-1, color, to_change, rows, cols)
        self.fillNeigh(image, r, c+1, color, to_change, rows, cols)
