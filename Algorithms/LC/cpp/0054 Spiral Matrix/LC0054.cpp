// Problem :    https://leetcode.com/problems/spiral-matrix/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-28


#include <vector>
using namespace std;


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int totalCount = m * n, currentIndex = 0;
        std::vector<int> numbers(totalCount, 0);
        int topBound = 0, bottomBound = m - 1, leftBound = 0, rightBound = n - 1;
        while (totalCount) {
            for (int columnIndex = leftBound; columnIndex <= rightBound && totalCount; ++columnIndex) {
                numbers[currentIndex] = matrix[topBound][columnIndex];
                ++currentIndex;
                --totalCount;
            }
            ++topBound;
            for (int rowIndex = topBound; rowIndex <= bottomBound && totalCount; ++rowIndex) {
                numbers[currentIndex] = matrix[rowIndex][rightBound];
                ++currentIndex;
                --totalCount;
            }
            --rightBound;
            for (int columnIndex = rightBound; columnIndex >= leftBound && totalCount; --columnIndex) {
                numbers[currentIndex] = matrix[bottomBound][columnIndex];
                ++currentIndex;
                --totalCount;
            }
            --bottomBound;
            for (int rowIndex = bottomBound; rowIndex >= topBound && totalCount; --rowIndex) {
                numbers[currentIndex] = matrix[rowIndex][leftBound];
                ++currentIndex;
                --totalCount;
            }
            ++leftBound;
        }
        return numbers;
    }
};

// Traverse