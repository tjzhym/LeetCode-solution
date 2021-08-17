// Problem :    https://leetcode.com/problems/valid-parentheses/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-7-29

import java.util.Stack

class Solution {
    public boolean isValid(String s) {
        Stack<Character> parenthesesStack = new Stack<Character>();
        for (char c : s.toCharArray()) {
            if (c == '(')
                parenthesesStack.push(')');
            else if (c == '[')
                parenthesesStack.push(']');
            else if (c == '{')
                parenthesesStack.push('}');
            
            else if (parenthesesStack.isEmpty() || parenthesesStack.pop() != c)
			    return false;
            
        }
        return parenthesesStack.isEmpty();
    }
}