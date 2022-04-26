// Problem :    https://leetcode.com/problems/projection-area-of-3d-shapes/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-26


#include <vector>
using namespace std;


class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int areaXY = 0, areaXZ = 0, areaYZ = 0, area = 0;
        for (int xIndex = 0; xIndex < grid.size(); ++xIndex) {
            int heightXZ = 0, heightYZ = 0;
            for (int yIndex = 0; yIndex < grid[0].size(); ++yIndex) {
                if (grid[xIndex][yIndex] != 0) {
                    ++areaXY;
                }

                heightXZ = max(heightXZ, grid[xIndex][yIndex]);
                heightYZ = max(heightYZ, grid[yIndex][xIndex]); // X and Y are reversed
            }
            areaXZ += heightXZ;
            areaYZ += heightYZ;
        }
        area = areaXY + areaYZ + areaXZ;
        return area;
    }
};

// Traverse