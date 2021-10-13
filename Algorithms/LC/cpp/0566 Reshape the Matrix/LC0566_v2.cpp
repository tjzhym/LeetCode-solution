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
        for (int index = 0; index < r * c; ++index) {
            reshapedMatrix[index / c][index % c] = mat[index / n][index % n];
        }
        return reshapedMatrix;
    }
};

// Total Number Division

