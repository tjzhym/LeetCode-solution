// Problem :    https://leetcode.com/problems/reverse-integer/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-5-28

#include <cmath>


class Solution {
public:
    int reverse(int x) {
        int rev = -0;
        int y = x;
        x = abs(x);
        while (x != 0)
        {
            int pop = x % 10;
            x = x / 10;

            if (rev > INT_MAX / 10)
            {
                return 0;
            }
            if (rev < INT_MIN / 10)
            {
                return 0;
            }

            rev = rev * 10 + pop;
        }
        if (y >= 0)
        {
            return rev;
        }
        else
        {
            return -rev;
        }
    }
};