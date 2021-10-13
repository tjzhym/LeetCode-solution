// Problem :    https://leetcode.com/problems/search-a-2d-matrix/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-13


#include <vector>
using namespace std;


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int lowerBound = 0, upperBound = m * n - 1;
        while (lowerBound <= upperBound) {
            int midIndex = lowerBound + (upperBound - lowerBound) / 2;
            int value = matrix[midIndex / n][midIndex % n];
            if (target < value) {
                upperBound = midIndex - 1;
            }
            else if (target > value) {
                lowerBound = midIndex + 1;
            }
            else {
                return true;
            }
        }
        return false;
    }
};

// Binary Search