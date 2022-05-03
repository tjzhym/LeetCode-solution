// Problem :    https://leetcode.com/problems/shortest-unsorted-continuous-subarray/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-5-4


#include <vector>
using namespace std;


class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int leftIndex = 0, rightIndex = -1;
        int minNumber = nums[n - 1], maxNumber = nums[0];
        for (int index = 0; index < nums.size(); ++index) {
            if (minNumber < nums[n - 1 - index]) {
                leftIndex = n - 1 - index;
            }
            else {
                minNumber = nums[n - 1 - index];
            }

            if (maxNumber > nums[index]) {
                rightIndex = index;
            }
            else {
                maxNumber = nums[index];
            }
        }
        return rightIndex - leftIndex + 1;
    }
};

// Traverse