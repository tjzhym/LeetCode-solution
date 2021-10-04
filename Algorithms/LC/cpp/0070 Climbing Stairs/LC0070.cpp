// Problem :    https://leetcode.com/problems/sqrtx/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-8-12


class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) {
            return 1;
        }
        else if (n == 2) {
            return 2;
        }
        vector<int> fibonacciArray(n, 0);
        fibonacciArray[0] = 1;
        fibonacciArray[1] = 2;
        for (int arrayIndex = 2; arrayIndex < n; ++arrayIndex) {
            fibonacciArray[arrayIndex] = fibonacciArray[arrayIndex - 1] + fibonacciArray[arrayIndex - 2];
        }

        return fibonacciArray[n - 1];
    }
};

// Fibonacci Array