// Problem :    https://leetcode.com/problems/making-a-large-island/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-9-18


#include <map>
#include <set>
#include <vector>


static const std::vector<std::vector<int> > NEIGHBOURS = { {0, -1}, {0 , 1}, {-1, 0}, {1, 0} };

class Solution {
public:
    bool CheckValid(const int row, const int col) const {
        return row >= 0 && row < n_&& col >= 0 && col < n_;
    }

    void Dfs(std::vector<std::vector<int> >& grid, const int row, const int col) {
        if (grid[row][col] != 1) {
            return;
        }
        grid[row][col] = label_;
        ++temp_area_;
        for (const std::vector<int> &neighbor : NEIGHBOURS) {
            const int new_row = row + neighbor[0];
            const int new_col = col + neighbor[1];
            if (!CheckValid(new_row, new_col)) {
                continue;
            }
            Dfs(grid, new_row, new_col);
        }
    }

    void LabelIsland(std::vector<std::vector<int> >& grid) {
        label_ = 2;
        for (int row = 0; row < n_; ++row) {
            for (int col = 0; col < n_; ++col) {
                if (grid[row][col] == 1) {
                    temp_area_ = 0;
                    Dfs(grid, row, col);
                    label_area_[label_] = temp_area_;
                    max_area_ = std::max(max_area_, temp_area_);
                    ++label_;
                }
            }
        }
    }

    void ConnectIsland(const std::vector<std::vector<int > >& grid) {
        for (int row = 0; row < n_; ++row) {
            for (int col = 0; col < n_; ++col) {
                if (grid[row][col] != 0) {
                    continue;
                }
                std::set<int> connected;
                int temp_area = 1;
                for (const std::vector<int> &neighbor : NEIGHBOURS) {
                    const int new_row = row + neighbor[0];
                    const int new_col = col + neighbor[1];
                    if (!CheckValid(new_row, new_col)) {
                        continue;
                    }
                    if (grid[new_row][new_col] == 0) {
                        continue;
                    }
                    if (connected.count(grid[new_row][new_col])) {
                        continue;
                    }
                    int label = grid[new_row][new_col];
                    connected.insert(label);
                    temp_area += label_area_[label];
                }
                max_area_ = std::max(max_area_, temp_area);
            }
        }
    }

    int largestIsland(std::vector<std::vector<int>>& grid) {
        n_ = grid.size();
        max_area_ = -1;
        LabelIsland(grid);
        ConnectIsland(grid);
        return max_area_;
    }

private:
    int n_;
    int label_;
    int temp_area_;
    std::map<int, int> label_area_;
    int max_area_;
};