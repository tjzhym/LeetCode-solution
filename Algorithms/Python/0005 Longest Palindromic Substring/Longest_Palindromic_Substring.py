# Problem :    https://leetcode.com/problems/longest-palindromic-substring/
# Solution:    https://github.com/tjzhym/LeetCode-solution
# Author :     zhym (tjzhym)
# Date   :     2021-7-22


class Solution:
    def longestPalindrome(self, s: str) -> str:
        length = len(s)
        if length == 0:
        	return 0
        
        maxLength=1
        start=0
        
        for i in range(length):
            
        	if i-maxLength >=1 and s[i-maxLength-1:i+1]==s[i-maxLength-1:i+1][::-1]:
        		start = i - maxLength - 1
        		maxLength += 2
        		continue

        	if i-maxLength >=0 and s[i-maxLength:i+1]==s[i-maxLength:i+1][::-1]:
        		start = i - maxLength
        		maxLength += 1
                
        return s[start : start + maxLength]