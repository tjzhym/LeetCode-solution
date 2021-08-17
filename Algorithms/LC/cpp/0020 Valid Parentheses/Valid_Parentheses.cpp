// Problem :    https://leetcode.com/problems/valid-parentheses/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-7-29


#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> parenthesesStack;
        for (char& c : s) {
            if (c == '(')
                parenthesesStack.push(')');
            else if (c == '[')
                parenthesesStack.push(']');
            else if (c == '{')
                parenthesesStack.push('}');
            else {
                if (parenthesesStack.empty() || parenthesesStack.top() != c)
                    return false;
                else
                    parenthesesStack.pop();
            }
        }
        return parenthesesStack.empty();
    }
};