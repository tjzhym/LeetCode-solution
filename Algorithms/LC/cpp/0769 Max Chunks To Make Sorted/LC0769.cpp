// Problem :    https://leetcode.com/problems/max-chunks-to-make-sorted/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-10-13


#include <vector>


class Solution {
public:
    int maxChunksToSorted(std::vector<int>& arr) {
        int count = 0;
        int cur_max = 0;
        for (int index = 0, n = arr.size(); index < n; ++index) {
            cur_max = std::max(cur_max, arr[index]);
            if (cur_max == index) {
                ++count;
            }
        }
        return count;
    }
};