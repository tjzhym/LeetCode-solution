// Problem :    https://leetcode.com/problems/palindrome-number/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-7-24


class Solution:
    def isPalindrome(self, x: int) -> bool:
        numberList = str(x)
        if numberList == numberList[::-1]:
            return True
        else:
            return False