// Problem :    https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-10-3


#include <string>


class Solution {
public:
    bool checkOnesSegment(std::string s) {
        return s.find("01") == std::string::npos;
    }
};