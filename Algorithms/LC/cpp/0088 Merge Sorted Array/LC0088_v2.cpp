// Problem :    https://leetcode.com/problems/merge-sorted-array/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-5


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int firstIndex = 0, secondIndex = 0, sortedNumsIndex = 0;
        vector<int> sortedNums(m + n, 0);
        while (sortedNumsIndex < m + n) {
            if (firstIndex == m) {
                sortedNums[sortedNumsIndex++] = nums2[secondIndex++];
            }
            else if (secondIndex == n) {
                sortedNums[sortedNumsIndex++] = nums1[firstIndex++];
            }
            else if (nums1[firstIndex] < nums2[secondIndex]) {
                sortedNums[sortedNumsIndex++] = nums1[firstIndex++];
            }
            else {
                sortedNums[sortedNumsIndex++] = nums2[secondIndex++];
            }
        }
        for (int sortedNumsIndex = 0; sortedNumsIndex < m + n; ++sortedNumsIndex) {
            nums1[sortedNumsIndex] = sortedNums[sortedNumsIndex];
        }

    }
};

// Double Pointer