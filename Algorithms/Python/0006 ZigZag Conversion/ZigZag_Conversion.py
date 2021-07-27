# Problem :    https://leetcode.com/problems/zigzag-conversion/
# Solution:    https://github.com/tjzhym/LeetCode-solution
# Author :     zhym (tjzhym)
# Date   :     2021-7-23


class Solution:
    def convert(self, s: str, numRows: int) -> str:
        
        if numRows == 1:
            return s
        
        numTable = [''] * numRows
        ZigZag = False
        rowIdx = 0

        for letter in s:
            numTable[rowIdx] += letter
            if not ZigZag:
                rowIdx += 1
                if rowIdx == numRows :
                    ZigZag = True
                    rowIdx -= 2
            else:
                rowIdx -= 1
                if rowIdx <= 0:
                    ZigZag = False
        return ''.join(numTable)
        