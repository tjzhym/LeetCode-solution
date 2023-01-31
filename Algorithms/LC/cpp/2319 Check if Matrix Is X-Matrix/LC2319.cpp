// Problem :    https://leetcode.com/problems/check-if-matrix-is-x-matrix/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2023-1-31


#include <vector>
using namespace std;


class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        for (size_t row = 0; row < grid.size(); ++row) {
            for (size_t col = 0; col < grid[0].size(); ++col) {
                if (row == col || row + col == grid.size() - 1) {
                    if (grid[row][col] == 0) {
                        return false;
                    }
                }
                else if (grid[row][col]) {
                    return false;
                }
            }
        }
        return true;
    }
};