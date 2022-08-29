// Problem :    https://leetcode.com/problems/shuffle-the-array/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-8-29


#include <vector>
using namespace std;


class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        // use lowest 10 bit to save original number
        int mask = (1 << 10) - 1;
        for (size_t index = 0; index < 2 * n; ++index) {
            size_t new_index;
            if (index < n) {
                new_index = 2 * index;
            }
            else {
                new_index = 2 * (index - n) + 1;
            }
            nums[new_index] |= (nums[index] & mask) << 10;
        }
        for (int& num : nums) {
            num >>= 10;
        }
        return nums;
    }
};