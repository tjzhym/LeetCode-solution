// Problem :    https://leetcode.com/problems/remove-outermost-parentheses/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-5-28


#include <string>
using namespace std;


class Solution {
public:
    string removeOuterParentheses(string s) {
        string outputString;
        int parenthesCount = 0;
        for (const auto& c : s) {
            if (c == ')') {
                --parenthesCount;
            }
            if (parenthesCount) {
                outputString += c;
            }
            if (c == '(') {
                ++parenthesCount;
            }
        }
        return outputString;
    }
};

// Traverse