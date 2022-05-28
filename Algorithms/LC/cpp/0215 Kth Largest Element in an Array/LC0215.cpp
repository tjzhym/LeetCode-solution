// Problem :    https://leetcode.com/problems/kth-largest-element-in-an-array/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-5-28


#include <vector>
using namespace std;


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        int startIndex = 0, endIndex = n - 1;
        int pivotIndex = partition(nums, startIndex, endIndex);
        while (pivotIndex != n - k) {
            if (pivotIndex < n - k) {
                startIndex = pivotIndex + 1;
                pivotIndex = partition(nums, startIndex, endIndex);
            }
            else {
                endIndex = pivotIndex - 1;
                pivotIndex = partition(nums, startIndex, endIndex);
            }
        }
        return nums[pivotIndex];
    }

    int partition(vector<int>& nums, int startIndex, int endIndex) {
        int pivot = nums[endIndex];
        int smallIndex = startIndex;
        for (int index = startIndex; index < endIndex; ++index) {
            if (nums[index] <= pivot) {
                swap(nums[index], nums[smallIndex]);
                ++smallIndex;
            }
        }
        swap(nums[smallIndex], nums[endIndex]);
        return smallIndex;
    }
};

// Quick Selection