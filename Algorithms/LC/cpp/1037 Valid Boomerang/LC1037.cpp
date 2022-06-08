// Problem :    https://leetcode.com/problems/valid-boomerang/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-6-8


#include <vector>
using namespace std;


class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        int x1 = points[1][0] - points[0][0];
        int x2 = points[2][0] - points[0][0];
        int y1 = points[1][1] - points[0][1];
        int y2 = points[2][1] - points[0][1];
        return (x1 * y2 - x2 * y1) != 0;
    }
};

// Vector