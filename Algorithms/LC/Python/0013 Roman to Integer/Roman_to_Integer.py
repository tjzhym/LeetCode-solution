# Problem :    https://leetcode.com/problems/roman-to-integer/
# Solution:    https://github.com/tjzhym/LeetCode-solution
# Author :     zhym (tjzhym)
# Date   :     2021-7-27


class Solution:
    def romanToInt(self, s: str) -> int:
        ROMAN = {'M': 1000,'D': 500 ,'C': 100,'L': 50,'X': 10,'V': 5,'I': 1}
        intNumber = 0
        
        for i in range(len(s)-1):
            if ROMAN[s[i]] < ROMAN[s[i+1]]:
                intNumber -= ROMAN[s[i]]
            else:
                intNumber += ROMAN[s[i]]
        intNumber += ROMAN[s[-1]]
        
        return intNumber