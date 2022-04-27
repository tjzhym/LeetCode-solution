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
        for (int rowIndex = 0; rowIndex < n / 2; ++rowIndex) {
            for (int columnIndex = 0; columnIndex < (n + 1) / 2; ++columnIndex) {
                int temp = matrix[rowIndex][columnIndex];
                matrix[rowIndex][columnIndex] = matrix[n - 1 - columnIndex][rowIndex];
                matrix[n - 1 - columnIndex][rowIndex] = matrix[n - 1 - rowIndex][n - 1 - columnIndex];
                matrix[n - 1 - rowIndex][n - 1 - columnIndex] = matrix[columnIndex][n - 1 - rowIndex];
                matrix[columnIndex][n - 1 - rowIndex] = temp;
            }
        }
    }
};

// Traverse