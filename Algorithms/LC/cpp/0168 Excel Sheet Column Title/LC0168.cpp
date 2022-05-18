// Problem :    https://leetcode.com/problems/excel-sheet-column-title/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-5-18


#include <string>
using namespace std;


class Solution {
public:
    string convertToTitle(int columnNumber) {
        string title;
        while (columnNumber) {
            --columnNumber;
            title.push_back(columnNumber % 26 + 'A');
            columnNumber /= 26;
        }
        reverse(title.begin(), title.end());
        return title;
    }
};

// Traverse