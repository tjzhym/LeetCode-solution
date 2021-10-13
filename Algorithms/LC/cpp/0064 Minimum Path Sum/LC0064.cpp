// Problem :    https://leetcode.com/problems/minimum-path-sum/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-13


#include <vector>
using namespace std;


class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int numberRow = grid.size(), numberColumn = grid[0].size();
        if (numberRow == 0 || numberColumn == 0) {
            return 0;
        }
        for (int columnIndex = 1; columnIndex < numberColumn; ++columnIndex) {
            grid[0][columnIndex] += grid[0][columnIndex - 1];
        }
        for (int rowIndex = 1; rowIndex < numberRow; ++rowIndex) {
            grid[rowIndex][0] += grid[rowIndex - 1][0];
        }

        for (int rowIndex = 1; rowIndex < numberRow; ++rowIndex) {
            for (int columnIndex = 1; columnIndex < numberColumn; ++columnIndex) {
                grid[rowIndex][columnIndex] += min(grid[rowIndex - 1][columnIndex], grid[rowIndex][columnIndex - 1]);
            }
        }
        return grid[numberRow - 1][numberColumn - 1];
    }
};

// Dynamic Programming
