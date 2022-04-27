// Problem :    https://leetcode.com/problems/rotate-image/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-27


#include <vector>
using namespace std;


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // Vertical Flip
        for (int rowIndex = 0; rowIndex < n / 2; ++rowIndex) {
            for (int columnIndex = 0; columnIndex < n; ++columnIndex) {
                swap(matrix[rowIndex][columnIndex], matrix[n - 1 - rowIndex][columnIndex]);
            }
        }
        // Diagonal Flip
        for (int rowIndex = 0; rowIndex < n; ++rowIndex) {
            for (int columnIndex = 0; columnIndex < rowIndex; ++columnIndex) {
                swap(matrix[rowIndex][columnIndex], matrix[columnIndex][rowIndex]);
            }
        }
    }
};

// Flip Twice