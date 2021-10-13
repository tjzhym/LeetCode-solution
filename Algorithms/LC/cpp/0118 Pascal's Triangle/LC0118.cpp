// Problem :    https://leetcode.com/problems/pascals-triangle/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-12


#include <vector>
using namespace std;


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle;
        for (int rowIndex = 0; rowIndex < numRows; ++rowIndex) {
            vector<int> pascalLine(rowIndex + 1, 1);
            for (int colIndex = 1; colIndex < rowIndex; ++colIndex) {
                pascalLine[colIndex] = pascalTriangle[rowIndex - 1][colIndex - 1] + pascalTriangle[rowIndex - 1][colIndex];
            }
            pascalTriangle.push_back(pascalLine);
        }
        return pascalTriangle;
    }
};