// Problem :    https://leetcode.com/problems/number-of-lines-to-write-string/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-12


#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int rowIndex = 1, currentIndex = 0;
        for (auto c : s) {
            currentIndex += widths[c - 'a'];
            if (currentIndex > 100) {
                currentIndex = widths[c - 'a'];
                ++rowIndex;
            }
        }
        return { rowIndex, currentIndex };
    }
};

// Traverse