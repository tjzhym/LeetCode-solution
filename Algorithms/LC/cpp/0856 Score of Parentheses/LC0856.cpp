// Problem :    https://leetcode.com/problems/score-of-parentheses/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-10-9


#include <string>


class Solution {
public:
    int scoreOfParentheses(std::string s) {
        int depth = 0;
        int score = 0;
        for (int index = 0; index < s.size(); ++index) {
            if (s[index] == '(') {
                ++depth;
            }
            else {    // s[index] = ')'
                --depth;
                if (s[index - 1] == '(') {
                    score += 1 << depth;
                }
            }
        }
        return score;
    }
};