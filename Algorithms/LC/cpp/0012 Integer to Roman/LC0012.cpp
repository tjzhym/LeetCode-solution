// Problem :    https://leetcode.com/problems/integer-to-roman/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-13


#include <string>
using namespace std;


class Solution {
private:
    const pair<int, string> ROMANS[13] = {
        {1000, "M"},
        {900,  "CM"},
        {500,  "D"},
        {400,  "CD"},
        {100,  "C"},
        {90,   "XC"},
        {50,   "L"},
        {40,   "XL"},
        {10,   "X"},
        {9,    "IX"},
        {5,    "V"},
        {4,    "IV"},
        {1,    "I"},
    };
public:
    string intToRoman(int num) {
        string romanNumber;
        for (auto [number, roman] : ROMANS) {
            while (num >= number) {
                romanNumber += roman;
                num -= number;
            }
        }
        return romanNumber;
    }
};

// Traverse