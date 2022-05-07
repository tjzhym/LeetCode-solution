// Problem :    https://leetcode.com/problems/transpose-matrix/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-5-7


#include <vector>
using namespace std;


class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<vector<int>> transposedMatrix(n, vector<int>(m));
        for (int rowIndex = 0; rowIndex < m; ++rowIndex) {
            for (int columnIndex = 0; columnIndex < n; ++columnIndex) {
                transposedMatrix[columnIndex][rowIndex] = matrix[rowIndex][columnIndex];
            }
        }
        return transposedMatrix;
    }
};

// Traverse