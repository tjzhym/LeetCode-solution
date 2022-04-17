// Problem :    https://leetcode.com/problems/ugly-number/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-17


#include <vector>
using namespace std;


class Solution {
public:
    bool isUgly(int n) {
        if (n < 1) {
            return false;
        }
        vector<int> factors = { 2, 3, 5 };
        for (int factor : factors) {
            while (n % factor == 0) {
                n /= factor;
            }
        }
        return n == 1;
    }
};

// Traverse