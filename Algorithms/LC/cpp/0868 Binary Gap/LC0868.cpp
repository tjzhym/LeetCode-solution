// Problem :    https://leetcode.com/problems/binary-gap/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-24


#include <algorithm>
using namespace std;


class Solution {
public:
    int binaryGap(int n) {
        int maxGap = 0, currentGap = 0;
        while ((n & 1) != 1) {
            n >>= 1;
        }
        while (n > 0) {
            if ((n & 1) == 1) {
                maxGap = max(maxGap, currentGap);
                currentGap = 0;
            }
            ++currentGap;
            n >>= 1;
        }
        return maxGap;
    }
};

// Traverse