// Problem :    https://leetcode.com/problems/rectangle-area/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-5-1


#include <algorithm>
using namespace std;


class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int left = max(ax1, bx1);
        int bottom = max(ay1, by1);
        int right = min(ax2, bx2);
        int top = min(ay2, by2);
        int overlapArea = max(right - left, 0) * max(top - bottom, 0);
        int area1 = (ax2 - ax1) * (ay2 - ay1);
        int area2 = (bx2 - bx1) * (by2 - by1);
        return area1 + area2 - overlapArea;
    }
};

// Math