// Problem :    https://leetcode.com/problems/di-string-match/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-5-9


#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0;
        int n = strs.size(), column = strs[0].size();
        for (int columnIndex = 0; columnIndex < column; ++columnIndex) {
            for (int rowIndex = 1; rowIndex < n; ++rowIndex) {
                if (strs[rowIndex][columnIndex] < strs[rowIndex - 1][columnIndex]) {
                    ++count;
                    break;
                }
            }
        }
        return count;
    }
};

// Traverse