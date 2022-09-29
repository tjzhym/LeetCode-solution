// Problem :    https://leetcode.cn/problems/string-rotation-lcci/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-9-29


#include <string>


class Solution {
public:
    bool isFlipedString(std::string s1, std::string s2) {
        if (s1.size() != s2.size()) {
            return false;
        }
        return (s1 + s1).find(s2) != std::string::npos;
    }
};