// Problem :    https://leetcode.com/problems/reshape-the-matrix/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-13


#include <vector>
using namespace std;


class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size();
        if (m * n != r * c) {
            return mat;
        }
        vector<vector<int>> reshapedMatrix(r, vector<int>(c));
        int rowIndex = 0, columnIndex = 0;
        for (int newRowIndex = 0; newRowIndex < r; ++newRowIndex) {
            for (int newColumnIndex = 0; newColumnIndex < c; ++newColumnIndex) {
                reshapedMatrix[newRowIndex][newColumnIndex] = mat[rowIndex][columnIndex];
                if (columnIndex < n - 1) {
                    ++columnIndex;
                }
                else {
                    columnIndex = 0;
                    ++rowIndex;
                }
            }
        }
        return reshapedMatrix;
    }
};

// Traverse

