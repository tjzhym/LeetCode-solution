// Problem :    https://leetcode.com/problems/excel-sheet-column-number/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-5-7


#include <string>
using namespace std;


class Solution {
public:
    int titleToNumber(string columnTitle) {
        int number = 0;
        for (auto& column : columnTitle) {
            number *= 26;
            number += column - 'A' + 1;
        }
        return number;
    }
};

// Traverse