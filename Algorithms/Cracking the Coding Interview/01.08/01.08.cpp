// Problem :    https://leetcode.cn/problems/zero-matrix-lcci/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-9-30


#include <vector>


class Solution {
public:
    void setZeroes(std::vector<std::vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool first_col_zero = false;
        for (int row = 0; row < m; ++row) {
            if (matrix[row][0] == 0) {
                first_col_zero = true;
            }

            for (int col = 1; col < n; ++col) {
                if (matrix[row][col] == 0) {
                    matrix[row][0] = 0;
                    matrix[0][col] = 0;
                }
            }
        }

        for (int row = m - 1; row >= 0; --row) {
            for (int col = n - 1; col >= 1; --col) {
                if (matrix[row][0] == 0 || matrix[0][col] == 0) {
                    matrix[row][col] = 0;
                }
            }
            if (first_col_zero) {
                matrix[row][0] = 0;
            }
        }
    }
};