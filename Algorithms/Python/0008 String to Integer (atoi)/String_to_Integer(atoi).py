// Problem :    https://leetcode.com/problems/string-to-integer-atoi/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-7-24


class Solution:
    def myAtoi(self, s: str) -> int:
        stringList = s.strip()
        answer = 0
        if len(stringList) == 0:
            return answer
        if stringList[0] == '-':
            sign = -1
            stringList = stringList[1:]
        elif stringList[0] == '+':
            sign = 1
            stringList = stringList[1:]
        else :
            sign = 1

        for i in range(len(stringList)):
            if stringList[i].isdigit():
                answer = answer * 10 + int(stringList[i])
            else :
                break
            
        return max(-2**31, min(sign * answer ,2**31-1))