// Problem :    https://leetcode.com/problems/set-matrix-zeroes/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-11


#include <vector>
using namespace std;


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool isFisrtColumnZero = false;
        for (int rowIndex = 0; rowIndex < matrix.size(); ++rowIndex) {
            if (matrix[rowIndex][0] == 0) {
                isFisrtColumnZero = true;
            }

            for (int columnIndex = 1; columnIndex < matrix[0].size(); ++columnIndex) {
                if (matrix[rowIndex][columnIndex] == 0) {
                    matrix[rowIndex][0] = 0;
                    matrix[0][columnIndex] = 0;
                }
            }
        }

        for (int rowIndex = matrix.size() - 1; rowIndex > -1; --rowIndex) {
            for (int columnIndex = 1; columnIndex < matrix[0].size(); ++columnIndex) {
                if (matrix[rowIndex][0] == 0 || matrix[0][columnIndex] == 0) {
                    matrix[rowIndex][columnIndex] = 0;
                }
            }
            if (isFisrtColumnZero) {
                matrix[rowIndex][0] = 0;
            }
        }


    }
};

// Traverse