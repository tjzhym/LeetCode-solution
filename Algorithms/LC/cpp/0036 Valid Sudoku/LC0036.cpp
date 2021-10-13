// Problem :    https://leetcode.com/problems/valid-sudoku/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-13


#include <vector>
using namespace std;


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> rows(9, vector<int>(9));
        vector<vector<int>> columns(9, vector<int>(9));
        vector<vector<vector<int>>> subBoxes(3, vector<vector<int>>(3, vector<int>(9)));
        for (int rowIndex = 0; rowIndex < 9; ++rowIndex) {
            for (int columnIndex = 0; columnIndex < 9; ++columnIndex) {
                char character = board[rowIndex][columnIndex];
                if (character != '.') {
                    int number = character - '1';
                    ++rows[rowIndex][number];
                    ++columns[columnIndex][number];
                    ++subBoxes[rowIndex / 3][columnIndex / 3][number];
                    if (rows[rowIndex][number] > 1 || columns[columnIndex][number] > 1 || subBoxes[rowIndex / 3][columnIndex / 3][number] > 1) {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};

// Traverse