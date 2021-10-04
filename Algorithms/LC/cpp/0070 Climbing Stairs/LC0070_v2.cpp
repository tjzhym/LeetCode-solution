// Problem :    https://leetcode.com/problems/sqrtx/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-8-12


class Solution {
public:
    int climbStairs(int n) {
        int fibonacciNumber = 1, firstNumber = 0, secondNumber = 0;
        for (int fibonacciIndex = 0; fibonacciIndex < n; ++fibonacciIndex) {
            firstNumber = secondNumber;
            secondNumber = fibonacciNumber;
            fibonacciNumber = firstNumber + secondNumber;

        }
        return fibonacciNumber;
    }
};

// Dynamic Programming