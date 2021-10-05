// Problem :    https://leetcode.com/problems/merge-sorted-array/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-5


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int firstIndex = m - 1, secondIndex = n - 1, sortedNumsIndex = m + n - 1;

        while (secondIndex > -1) {
            if (firstIndex == -1) {
                swap(nums1[sortedNumsIndex--], nums2[secondIndex--]);
            }
            else if (nums1[firstIndex] > nums2[secondIndex]) {
                swap(nums1[sortedNumsIndex--], nums1[firstIndex--]);
            }
            else {
                swap(nums1[sortedNumsIndex--], nums2[secondIndex--]);
            }
        }


    }
};

// Double Pointer from Largest