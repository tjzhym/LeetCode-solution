// Problem :    https://leetcode.com/problems/sort-array-by-increasing-frequency/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-9-19


#include <algorithm>
#include <map>
#include <vector>


class Solution {
public:
	std::vector<int> frequencySort(std::vector<int>& nums) {
        std::map<int, int> frequency;
        for (const int num : nums) {
            ++frequency[num];
        }
        std::sort(nums.begin(), nums.end(), [&](const int a, const int b) {
            if (frequency[a] != frequency[b]) {
                return frequency[a] < frequency[b];
            }
            return a > b;
            });
        return nums;
    }
};