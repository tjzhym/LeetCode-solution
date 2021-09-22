// Problem :    https://leetcode.com/problems/powx-n/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-8-22


class Solution {
public:
    double myPow(double x, int n) {
        double powResult = 1;

        if (x == 0.0) {
            return 0.0;
        }
        else if (x == 1.0 || n == 0) {
            return 1.0;
        }
        else if (n < 0) {
            x = 1 / x;
            powResult *= x;
            n += 1;
            n = -n;
        }

        while (n) {
            if (n & 1) {
                powResult *= x;
            }
            x *= x;
            n >>= 1;
        }
        return powResult;
    }
};

