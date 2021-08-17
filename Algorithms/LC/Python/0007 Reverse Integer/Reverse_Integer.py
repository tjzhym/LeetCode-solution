# Problem :    https://leetcode.com/problems/reverse-integer/
# Solution:    https://github.com/tjzhym/LeetCode-solution
# Author :     zhym (tjzhym)
# Date   :     2021-5-28


class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        
        number = str(x)
        
        if   x > 0:
            sign = 1

            
        elif x < 0:
            sign = -1
            number = number[1:]

        
        elif x == 0:
            sign = 0
            return 0

            
        if number[0] == '0':
            number = number[1:]
 
        
        reverse_number = []
        
        for i in range(len(number)):
            reverse_number.append(number[len(number) - i-1])
            
        result = int(''.join(reverse_number))
        result = result * sign
        
        if (-(2**31)-1 < result < 2**31):
            return result
        else:
            return 0
        
        