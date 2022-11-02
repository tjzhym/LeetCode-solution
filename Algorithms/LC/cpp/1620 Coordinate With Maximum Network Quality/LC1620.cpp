// Problem :    https://leetcode.com/problems/coordinate-with-maximum-network-quality/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-11-2


#include <algorithm>
#include <cmath>
#include <vector>


class Solution {
public:
    std::vector<int> bestCoordinate(std::vector<std::vector<int>>& towers, int radius) {
        int left = INT_MAX;
        int up = INT_MAX;
        int right = INT_MIN;
        int down = INT_MIN;
        for (const auto& tower : towers) {
            up = std::min(up, tower[0]);
            down = std::max(down, tower[0]);
            left = std::min(left, tower[1]);
            right = std::max(right, tower[1]);
        }

        int c_x = 0;
        int c_y = 0;
        int max_quality = 0;
        for (int row = up; row <= down; ++row) {
            for (int col = left; col <= right; ++col) {
                int cur_quality = 0;
                for (const auto& tower : towers) {
                    int squared_distance = GetSquaredDistance(row, col, tower[0], tower[1]);
                    if (squared_distance > radius * radius) {
                        continue;
                    }
                    cur_quality += tower[2] / (1 + std::sqrt(squared_distance));
                }
                if (cur_quality > max_quality) {
                    c_x = row;
                    c_y = col;
                    max_quality = cur_quality;
                }
            }
        }
        return std::vector<int>{c_x, c_y};
    }

private:
    int GetSquaredDistance(int x1, int y1, int x2, int y2) const {
        return std::pow(x1 - x2, 2) + std::pow(y1 - y2, 2);
    }
};