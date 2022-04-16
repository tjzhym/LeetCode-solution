// Problem :    https://leetcode.com/problems/special-positions-in-a-binary-matrix/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-16


#include <vector>
using namespace std;


class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int count = 0;
        vector<int> rowSum(mat.size(), 0);
        vector<int> columnSum(mat[0].size(), 0);
        for (int rowIndex = 0; rowIndex < mat.size(); ++rowIndex) {
            for (int columnIndex = 0; columnIndex < mat[0].size(); ++columnIndex) {
                if (mat[rowIndex][columnIndex]) {
                    ++rowSum[rowIndex];
                    ++columnSum[columnIndex];
                }
            }
        }
        for (int rowIndex = 0; rowIndex < mat.size(); ++rowIndex) {
            for (int columnIndex = 0; columnIndex < mat[0].size(); ++columnIndex) {
                if (mat[rowIndex][columnIndex] && rowSum[rowIndex] == 1 && columnSum[columnIndex] == 1) {
                    ++count;
                }
            }
        }
        return count;
    }
};

// Traverse