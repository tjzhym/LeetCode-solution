// Problem :    https://leetcode.com/problems/power-of-two/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-27


using namespace std;


class Solution {
public:
    bool isPowerOfTwo(int n) {
        int maxPowerOfTwo = 1 << 30;
        return n > 0 && maxPowerOfTwo % n == 0;
    }
};

// Bit Manipulation