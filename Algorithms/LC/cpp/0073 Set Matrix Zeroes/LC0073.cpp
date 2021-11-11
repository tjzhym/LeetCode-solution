// Problem :    https://leetcode.com/problems/set-matrix-zeroes/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-11


#include <vector>
using namespace std;


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> rowIndexVector(matrix.size(), 1);
        vector<int> columnIndexVector(matrix[0].size(), 1);

        for (int rowIndex = 0; rowIndex < matrix.size(); ++rowIndex) {
            for (int columnIndex = 0; columnIndex < matrix[0].size(); ++columnIndex) {
                if (matrix[rowIndex][columnIndex] == 0) {
                    rowIndexVector[rowIndex] = 0;
                    columnIndexVector[columnIndex] = 0;
                }
            }
        }
        for (int rowIndex = 0; rowIndex < rowIndexVector.size(); ++rowIndex) {
            for (int columnIndex = 0; columnIndex < columnIndexVector.size(); ++columnIndex) {
                if (rowIndexVector[rowIndex] == 0 || columnIndexVector[columnIndex] == 0) {
                    matrix[rowIndex][columnIndex] = 0;
                }
            }
        }
    }
};

// Traverse