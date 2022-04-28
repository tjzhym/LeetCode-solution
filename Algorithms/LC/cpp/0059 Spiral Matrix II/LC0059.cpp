// Problem :    https://leetcode.com/problems/spiral-matrix-ii/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-28


#include <vector>
using namespace std;


class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int number = 1, totalCount = n * n;
        vector<vector<int>> matrix(n, std::vector(n, 0));
        int topBound = 0, bottomBound = n - 1, leftBound = 0, rightBound = n - 1;
        while (totalCount > 0) {
            for (int columnIndex = leftBound; columnIndex <= rightBound && totalCount > 0; ++columnIndex) {
                matrix[topBound][columnIndex] = number;
                ++number;
                --totalCount;
            }
            ++topBound;
            for (int rowIndex = topBound; rowIndex <= bottomBound && totalCount > 0; ++rowIndex) {
                matrix[rowIndex][rightBound] = number;
                ++number;
                --totalCount;
            }
            --rightBound;
            for (int columnIndex = rightBound; columnIndex >= leftBound && totalCount > 0; --columnIndex) {
                matrix[bottomBound][columnIndex] = number;
                ++number;
                --totalCount;
            }
            --bottomBound;
            for (int rowIndex = bottomBound; rowIndex >= topBound && totalCount > 0; --rowIndex) {
                matrix[rowIndex][leftBound] = number;
                ++number;
                --totalCount;
            }
            ++leftBound;
        }
        return matrix;
    }
};

// Traverse