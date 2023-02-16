// Problem :    https://leetcode.com/problems/maximum-number-of-pairs-in-array/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2023-2-16


#include <vector>
#include <unordered_map>


class Solution {
public:
	std::vector<int> numberOfPairs(std::vector<int>& nums) {
	    std::unordered_map<int, int> num_count;
        int pair_count = 0;
        for (const int num : nums) {
            if (num_count[num]) {
                --num_count[num];
                ++pair_count;
            }
            else {
                ++num_count[num];
            }
        }
        return { pair_count, (int)nums.size() - 2 * pair_count };
    }
};