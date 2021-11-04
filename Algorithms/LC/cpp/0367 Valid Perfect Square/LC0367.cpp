// Problem :    https://leetcode.com/problems/valid-perfect-square/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-3


class Solution {
public:
    bool isPerfectSquare(int num) {
        long long sqrt = 0, square = 0;
        while (square < num) {
            ++sqrt;
            square = sqrt * sqrt;
        }
        return square == num;
    }
};

// Traverse