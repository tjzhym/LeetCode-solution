// Problem :    https://leetcode.com/problems/maximum-units-on-a-truck/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-11-15


#include <algorithm>
#include <vector>


class Solution {
public:
    int maximumUnits(std::vector<std::vector<int>>& boxTypes, int truckSize) {
        std::sort(boxTypes.begin(), boxTypes.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[1] > b[1];
            });
        int unit = 0;
        for (const auto& box_type : boxTypes) {
            if (box_type[0] < truckSize) {
                unit += box_type[0] * box_type[1];
                truckSize -= box_type[0];
            }
            else {
                unit += truckSize * box_type[1];
                break;
            }
        }
        return unit;
    }
};