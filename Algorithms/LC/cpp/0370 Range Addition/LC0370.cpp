// Problem :    https://leetcode.com/problems/range-addition/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-6


#include <vector>
using namespace std;


class Solution {
public:
    vector<int> getModifiedArray(int length, vector<vector<int>>& updates) {
        vector<int> differenceVector(length, 0);
        for (auto operation : updates) {
            differenceVector[operation[0]] += operation[2];
            if (operation[1] < length - 1) {
                differenceVector[operation[1] + 1] += -operation[2];
            }
        }
        for (int index = 1; index < length; ++index) {
            differenceVector[index] += differenceVector[index - 1];
        }
        return differenceVector;
    }
};

// Difference Array