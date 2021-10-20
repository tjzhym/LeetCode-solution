// Problem :    https://leetcode-cn.com/problems/is-unique-lcci/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-20


#include <string>
using namespace std;


class Solution {
public:
    bool isUnique(string astr) {
        int checker = 0;
        for (auto c : astr) {
            int bit = c - 'a';
            if ((checker & (1 << bit)) > 0) {
                return false;
            }
            checker |= (1 << bit);
        }
        return true;

    }
};

// Bitwise Operation