// Problem :    https://leetcode.com/problems/rotated-digits/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-9-25


#include <vector>


static const std::vector<int> ROTATE{ 0, 0, 1, -1, -1, 1, 1, -1, 0, 1 };

class Solution {
public:
    int rotatedDigits(int n) {
        int count = 0;
        int digit;
        int digits;
        bool valid;
        bool diff;
        for (int num = 1; num <= n; ++num) {
            valid = true;
            diff = false;
            digits = num;
            while (digits) {
                digit = digits % 10;
                if (ROTATE[digit] == -1) {
                    valid = false;
                }
                else if (ROTATE[digit] == 1) {
                    diff = true;
                }
                digits /= 10;
            }
            if (valid && diff) {
                ++count;
            }
        }
        return count;
    }
};