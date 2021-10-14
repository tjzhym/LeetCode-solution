// Problem :    https://leetcode.com/problems/container-with-most-water/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-13


#include <vector>
using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
        int leftIndex = 0, rightIndex = height.size() - 1;
        int area = 0, tempMaxArea = 0;
        while (leftIndex < rightIndex) {
            area = min(height[leftIndex], height[rightIndex]) * (rightIndex - leftIndex);
            tempMaxArea = max(area, tempMaxArea);
            if (height[leftIndex] < height[rightIndex]) {
                ++leftIndex;
            }
            else {
                --rightIndex;
            }
        }
        return tempMaxArea;
    }
};

// Double Pointer