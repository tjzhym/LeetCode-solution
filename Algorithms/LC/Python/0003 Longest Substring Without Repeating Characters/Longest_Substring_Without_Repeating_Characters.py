# Problem :    https://leetcode.com/problems/longest-substring-without-repeating-characters/
# Solution:    https://github.com/tjzhym/LeetCode-solution
# Author :     zhym (tjzhym)
# Date   :     2021-7-15

class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        StrList = []
        MaxLength = 0
        StartIdx = 0
        
        if(len(s) == 0):
            return 0
        
        for CurrentIdx in range(len(s)):
            while(s[CurrentIdx] in StrList):
                StrList.remove(s[StartIdx])
                StartIdx += 1
            StrList.append(s[CurrentIdx])
            MaxLength = max(MaxLength, CurrentIdx - StartIdx + 1)
        return MaxLength
        