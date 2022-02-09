// Problem :    https://leetcode-cn.com/problems/count-number-of-pairs-with-absolute-difference-k/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-2-9


#include <vector>
using namespace std;


class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        for (int firstIndex = 0; firstIndex < nums.size() - 1; firstIndex++) {
            for (int secondIndex = firstIndex + 1; secondIndex < nums.size(); secondIndex++) {
                if (abs(nums[firstIndex] - nums[secondIndex]) == k) {
                    ++count;
                }
            }
        }
        return count;
    }
};

// Traverse