// Problem :    https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-10-11


#include <string>


class Solution {
public:
    bool areAlmostEqual(std::string s1, std::string s2) {
        int index1 = -1;
        int index2 = -1;
        for (int index = 0; index < s1.size(); ++index) {
            if (s1[index] == s2[index]) {
                continue;
            }
            if (index1 == -1) {
                index1 = index;
            }
            else if (index2 == -1) {
                index2 = index;
            }
            else {
                return false;
            }
        }
        if (index1 == -1) {
            return true;
        }
        if (index2 == -1) {
            return false;
        }
        return s1[index1] == s2[index2] && s1[index2] == s2[index1];
    }
};