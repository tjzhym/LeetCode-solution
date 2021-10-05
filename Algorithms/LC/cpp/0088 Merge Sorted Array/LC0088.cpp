// Problem :    https://leetcode.com/problems/merge-sorted-array/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-5


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int numsIndex = 0; numsIndex < n; ++numsIndex) {
            nums1[m + numsIndex] = nums2[numsIndex];
        }
        sort(nums1.begin(), nums1.end());
    }
};

// merge and sort