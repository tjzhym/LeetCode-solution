// Problem :    https://leetcode.com/problems/sort-array-by-parity/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-28


#include <vector>
using namespace std;


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int leftIndex = 0, rightIndex = nums.size() - 1;
        while (leftIndex < rightIndex) {
            while (leftIndex < rightIndex && nums[leftIndex] % 2 == 0) {
                ++leftIndex;
            }
            while (leftIndex < rightIndex && nums[rightIndex] % 2 != 0) {
                --rightIndex;
            }
            swap(nums[leftIndex], nums[rightIndex]);
            ++leftIndex;
            --rightIndex;
        }
        return nums;
    }
};

// Double Pointer