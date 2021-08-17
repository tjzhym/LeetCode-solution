# Problem :    https://leetcode.com/problems/valid-parentheses/
# Solution:    https://github.com/tjzhym/LeetCode-solution
# Author :     zhym (tjzhym)
# Date   :     2021-7-29


class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        PARENTHESES = {"[":"]", "{":"}", "(":")"}
        for char in s:
            if char in PARENTHESES.keys():
                stack.append(PARENTHESES[char])
            elif stack == [] or char != stack.pop():
                return False
        return stack == []