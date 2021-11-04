// Problem :    https://leetcode.com/problems/valid-perfect-square/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-3


class Solution {
public:
    bool isPerfectSquare(int num) {
        double lastSqrt = num;
        while (true) {
            double currentSqrt = (lastSqrt + num / lastSqrt) / 2;
            if (lastSqrt - currentSqrt < 1e-2) {
                break;
            }
            lastSqrt = currentSqrt;
        }
        int sqrt = (int) lastSqrt;
        return num == sqrt * sqrt;
    }
};

// Newton's method