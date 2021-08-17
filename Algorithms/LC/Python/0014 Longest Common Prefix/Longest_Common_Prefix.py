# Problem :    https://leetcode.com/problems/longest-common-prefix/
# Solution:    https://github.com/tjzhym/LeetCode-solution
# Author :     zhym (tjzhym)
# Date   :     2021-7-28

class Solution:
    def longestCommonPrefix(self, strs) -> str:
        
        commonPrefix = min(strs)
        if len(commonPrefix) == 0:
            return ''

        for i, char in enumerate(commonPrefix):
            for string in strs:
                if string[i] != char:
                    return commonPrefix[:i]
        return commonPrefix 