// Problem :    https://leetcode.com/problems/sqrtx/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-8-12

#include <cstdlib>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) {
            return 0;
        }
        int output = 0;
        double lastSqrt = 1.0, currentSqrt = 0.0, distance = 0.0;
        currentSqrt = 0.5 * (lastSqrt + x / lastSqrt);
        distance = abs(currentSqrt - lastSqrt);
        while (distance > 0.01) {
            currentSqrt = 0.5 * (lastSqrt + x / lastSqrt);
            distance = abs(currentSqrt - lastSqrt);
            lastSqrt = currentSqrt;
        }
        return int(currentSqrt);
    }
};

