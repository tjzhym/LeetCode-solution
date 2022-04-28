// Problem :    https://leetcode.com/problems/number-of-islands/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-28


#include <vector>
using namespace std;


class Solution {
public:
    void dfs(int rowIndex, int columnIndex, vector<vector<char>>& grid) {
        grid[rowIndex][columnIndex] = '0';
        if (rowIndex - 1 > -1 && grid[rowIndex - 1][columnIndex] == '1') {
            dfs(rowIndex - 1, columnIndex, grid);
        }
        if (rowIndex + 1 < grid.size() && grid[rowIndex + 1][columnIndex] == '1') {
            dfs(rowIndex + 1, columnIndex, grid);
        }
        if (columnIndex - 1 > -1 && grid[rowIndex][columnIndex - 1] == '1') {
            dfs(rowIndex, columnIndex - 1, grid);
        }
        if (columnIndex + 1 < grid[0].size() && grid[rowIndex][columnIndex + 1] == '1') {
            dfs(rowIndex, columnIndex + 1, grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int islandCount = 0;
        for (int rowIndex = 0; rowIndex < m; ++rowIndex) {
            for (int columnIndex = 0; columnIndex < n; ++columnIndex) {
                if (grid[rowIndex][columnIndex] == '1') {
                    ++islandCount;
                    dfs(rowIndex, columnIndex, grid);
                }
            }
        }
        return islandCount;
    }
};

// DFS