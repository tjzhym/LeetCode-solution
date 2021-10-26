// Problem :    https://leetcode.com/problems/next-greater-element-i/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-25


#include <vector>
using namespace std;


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> outputVector;
        for (auto it1 = nums1.begin(); it1 != nums1.end(); ++it1) {
            int findIndex = 0;
            while (nums2[findIndex] != *it1) {
                ++findIndex;
            }
            while (findIndex < nums2.size()) {
                if (nums2[findIndex] > *it1) {
                    break;
                }
                ++findIndex;
            }
            if (findIndex == nums2.size()) {
                outputVector.push_back(-1);
            } else {
                outputVector.push_back(nums2[findIndex]);    
            }
        }
        return outputVector;
    }
};

// Bruce Force
