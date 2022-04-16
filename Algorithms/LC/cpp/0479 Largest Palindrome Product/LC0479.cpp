// Problem :    https://leetcode.com/problems/largest-palindrome-product/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-16


#include <cmath>
using namespace std;


class Solution {
public:
    int largestPalindrome(int n) {
        if (n == 1) {
            return 9;
        }
        int upper = pow(10, n) - 1;
        int maxNumber = upper;
        for (int maxNumber = upper;; --maxNumber) {
            long number = maxNumber;
            for (int x = number; x > 0; x /= 10) {
                number = number * 10 + x % 10;
            }
            for (long x = upper; x * x >= number; --x) {
                if (number % x == 0) {
                    return number % 1337;
                }
            }

        }
        return -1;
    }
};

// Traverse