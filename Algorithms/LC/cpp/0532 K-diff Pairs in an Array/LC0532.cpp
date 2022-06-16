// Problem :    https://leetcode.com/problems/k-diff-pairs-in-an-array/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-6-16


#include <algorithm>
#include <vector>
using namespace std;


class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
	    ranges::sort(nums.begin(), nums.end());
        int count = 0;
        for (int leftIndex = 0, rightIndex = leftIndex + 1; leftIndex < nums.size(); ++leftIndex) {
            if (leftIndex == 0 || nums[leftIndex] != nums[leftIndex - 1]) {
                while (rightIndex < nums.size() && (nums[leftIndex] + k > nums[rightIndex] || rightIndex <= leftIndex)) {
                    ++rightIndex;
                }
                if (rightIndex < nums.size() && nums[leftIndex] + k == nums[rightIndex]) {
                    ++count;
                }
            }

        }
        return count;
    }
};

// Double Pointer