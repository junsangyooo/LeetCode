// 733. Flood Fill C++
#include <vector>
class Solution {
public:
    int rows, cols, to_change;
    std::vector<std::vector<int>> floodFill(std::vector<std::vector<int>>& image, int sr, int sc, int color) {
        rows = image.size();
        cols = image[0].size();
        to_change = image[sr][sc];
        fillNeigh(image, sr, sc, color);
        return image;
    }
    void fillNeigh(std::vector<std::vector<int>>& image, int sr, int sc, int color) {
        if (sr < 0 || sc < 0 || sr > rows - 1 || sc > cols - 1 || image[sr][sc] == color || image[sr][sc] != to_change) return;
        image[sr][sc] = color;
        fillNeigh(image, sr-1, sc, color);
        fillNeigh(image, sr+1, sc, color);
        fillNeigh(image, sr, sc-1, color);
        fillNeigh(image, sr, sc+1, color);
    }
};
