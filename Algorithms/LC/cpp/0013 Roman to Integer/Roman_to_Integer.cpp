// Problem :    https://leetcode.com/problems/roman-to-integer/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-7-27


#include <map>
#include <string>


class Solution {
public:
    int romanToInt(std::string s)
    {
        std::map<char, int> ROMAN = { { 'I' , 1 },
                                    { 'V' , 5 },
                                    { 'X' , 10 },
                                    { 'L' , 50 },
                                    { 'C' , 100 },
                                    { 'D' , 500 },
                                    { 'M' , 1000 } };

        int intNumber = ROMAN[s.back()];
        for (int i = 0; i < s.length() - 1; i++) {
            if (ROMAN[s[i]] < ROMAN[s[i + 1]]) {
                intNumber -= ROMAN[s[i]];
            }
            else {
                intNumber += ROMAN[s[i]];
            }
        }

        return intNumber;
    }
};
