# Problem :    https://leetcode.com/problems/longest-common-prefix/
# Solution:    https://github.com/tjzhym/LeetCode-solution
# Author :     zhym (tjzhym)
# Date   :     2021-7-28

class Solution:
    def longestCommonPrefix(self, strs) -> str:
        
        if not str: return ''
        
        shortest = min(strs)
        longest = max(strs)


        for i, char in enumerate(shortest):
            if longest[i] != char:
                    return shortest[:i]
        return shortest 