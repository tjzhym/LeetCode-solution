// Problem :    https://leetcode.com/problems/game-of-life/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-8-23


#include <vector>
using namespace std;


class Solution {
public:
    int GetNeighborLivesCount(const vector<vector<int> >& board, const int row, const int column) {
        int count = 0;
        vector<int> index_diff = { -1, 0, 1 };
        for (const int row_diff : index_diff) {
            for (const int column_diff : index_diff) {
                if (row_diff == 0 && column_diff == 0) {
                    continue;
                }
                int new_row = row + row_diff;
                int new_column = column + column_diff;
                if (new_row > -1 && new_row < board.size() && new_column > -1 && new_column < board[0].size()) {
                    if (board[new_row][new_column] == 1 || board[new_row][new_column] == -1) {
                        ++count;
                    }
                }
            }
        }
        return count;
    }

    void CheckLife(vector<vector<int> >& board, const int row, const int column) {
        int neighbor_lives_count = GetNeighborLivesCount(board, row, column);
        if (board[row][column] == 0) {
            if (neighbor_lives_count == 3) {
                board[row][column] = 2;
            }
        } else if (board[row][column] == 1) {
            if (neighbor_lives_count < 2 || neighbor_lives_count > 3) {
                board[row][column] = -1;
            }
        }
    }


    void gameOfLife(vector<vector<int> >& board) {
        // First Traverse
        for (int row = 0; row < board.size(); ++row) {
            for (int column = 0; column < board[0].size(); ++column) {
                CheckLife(board, row, column);
            }
        }
        // Second Traverse
        for (int row = 0; row < board.size(); ++row) {
            for (int column = 0; column < board[0].size(); ++column) {
                if (board[row][column] == 2) {
                    board[row][column] = 1;
                } else if (board[row][column] == -1) {
                    board[row][column] = 0;
                }
            }
        }
    }
};