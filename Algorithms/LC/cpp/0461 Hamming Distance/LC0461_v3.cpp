// Problem :    https://leetcode.com/problems/hamming-distance/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-19


using namespace std;


class Solution {
public:
    int hammingDistance(int x, int y) {
        int exclusion = x ^ y, count = 0;
        while (exclusion) {
            if (exclusion & 1) {
                ++count;
            }
            exclusion >>= 1;
        }
        return count;
    }
};

// Traverse