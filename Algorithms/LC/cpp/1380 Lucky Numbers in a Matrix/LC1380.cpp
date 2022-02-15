// Problem :    https://leetcode.com/problems/lucky-numbers-in-a-matrix/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-2-15


#include <vector>
using namespace std;


class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> minRow(m, INT_MAX), maxColumm(n, INT_MIN);
        for (int rowIndex = 0; rowIndex < m; rowIndex++) {
            for (int columnIndex = 0; columnIndex < n; columnIndex++) {
                minRow[rowIndex] = min(minRow[rowIndex], matrix[rowIndex][columnIndex]);
                maxColumm[columnIndex] = max(maxColumm[columnIndex], matrix[rowIndex][columnIndex]);
            }
        }
        vector<int> numbers;
        for (int rowIndex = 0; rowIndex < m; rowIndex++) {
            for (int columnIndex = 0; columnIndex < n; columnIndex++) {
                if (matrix[rowIndex][columnIndex] == minRow[rowIndex] && matrix[rowIndex][columnIndex] == maxColumm[columnIndex]) {
                    numbers.push_back(matrix[rowIndex][columnIndex]);
                }
            }
        }
        return numbers;
    }
};

// Traverse