// Problem :    https://leetcode.com/problems/range-addition-ii/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-6


#include <vector>
using namespace std;


class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int minRow = m, minColumn = n;
        for (int index = 0; index < ops.size(); ++index) {
            minRow = min(minRow, ops[index][0]);
            minColumn = min(minColumn, ops[index][1]);
        }
        return minRow * minColumn;
    }
};

// Count Operation times