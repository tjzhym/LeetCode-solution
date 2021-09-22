// Problem :    https://leetcode.com/problems/power-of-three/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-9-22

class Solution {
public:
    bool isPowerOfThree(int n) {
        int MAX3POWER = 1;
        while (MAX3POWER < INT32_MAX / 3) {
            MAX3POWER *= 3;
        }

        if (n < 1) {
            return false;
        }
        else if (MAX3POWER % n == 0) {
            return true;
        }
        else {
            return false;
        }
    }
};

// using the maximum power of 3 in 32-bit machine

