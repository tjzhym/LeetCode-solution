// Problem :    https://leetcode.com/problems/merge-sorted-array/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-5


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        priority_queue<int> maxHeap;
        for (int i = 0; i < m; i++) {
            maxHeap.push(nums1[i]);
        }

        for (int i = 0; i < n; i++) {
            maxHeap.push(nums2[i]);
        }

        while (!maxHeap.empty()) {
            for (int i = m + n - 1; i > -1; --i) {
                nums1[i] = maxHeap.top();
                maxHeap.pop();
            }
        }
    }
};

// priority_queue