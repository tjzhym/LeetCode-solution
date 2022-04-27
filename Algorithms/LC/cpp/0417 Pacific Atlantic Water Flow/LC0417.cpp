// Problem :    https://leetcode.com/problems/pacific-atlantic-water-flow/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-27


#include <vector>
using namespace std;


static const vector<vector<int>> directions = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };

class Solution {
public:
    vector<vector<int>> heights;
    void dfs(int rowIndex, int columnIndex, vector<vector<bool>>& toOcean) {
        if (toOcean[rowIndex][columnIndex] == true) {
            return;
        }
        toOcean[rowIndex][columnIndex] = true;
        int m = heights.size(), n = heights[0].size();

        for (int directionIndex = 0; directionIndex < 4; ++directionIndex) {
            int newRowIndex = rowIndex + directions[directionIndex][0];
            int newColumnIndex = columnIndex + directions[directionIndex][1];
            if (newRowIndex > -1 && newRowIndex < m && newColumnIndex > -1 && newColumnIndex < n) {
                if (heights[newRowIndex][newColumnIndex] >= heights[rowIndex][columnIndex]) {
                    dfs(newRowIndex, newColumnIndex, toOcean);
                }
            }

        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        this->heights = heights;
        int m = heights.size(), n = heights[0].size();
        vector<vector<bool>> toPacific(m, vector<bool>(n, false));
        vector<vector<bool>> toAtlantic(m, vector<bool>(n, false));

        for (int rowIndex = 0; rowIndex < m; ++rowIndex) {
            dfs(rowIndex, 0, toPacific);
        }
        for (int columnIndex = 1; columnIndex < n; ++columnIndex) {
            dfs(0, columnIndex, toPacific);
        }
        for (int rowIndex = 0; rowIndex < m; ++rowIndex) {
            dfs(rowIndex, n - 1, toAtlantic);
        }
        for (int columnIndex = 0; columnIndex < n - 1; ++columnIndex) {
            dfs(m - 1, columnIndex, toAtlantic);
        }

        vector<vector<int>> toBoth;
        for (int rowIndex = 0; rowIndex < m; ++rowIndex) {
            for (int columnIndex = 0; columnIndex < n; ++columnIndex) {
                if (toPacific[rowIndex][columnIndex] && toAtlantic[rowIndex][columnIndex]) {
                    vector<int> coordinate;
                    coordinate.emplace_back(rowIndex);
                    coordinate.emplace_back(columnIndex);
                    toBoth.emplace_back(coordinate);
                }
            }
        }
        return toBoth;
    }
};

// DFS