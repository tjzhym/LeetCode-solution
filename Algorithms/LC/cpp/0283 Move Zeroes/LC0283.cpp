// Problem :    https://leetcode.com/problems/move-zeroes/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-8


#include <vector>
using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int currentIndex = 0, newIndex = 0;
        while (currentIndex < nums.size()) {
            if (nums[currentIndex]) {
                nums[newIndex] = nums[currentIndex];
                ++currentIndex;
                ++newIndex;
            } else {
                ++currentIndex;
            }
        }
        while (newIndex < nums.size()) {
            nums[newIndex] = 0;
            ++newIndex;
        }
    }
};

// Double Pointer