// Problem :    https://leetcode.com/problems/intersection-of-two-arrays-ii/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-7


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            return intersect(nums2, nums1);
        }

        unordered_map<int, int> map1;
        vector<int> intersection;

        for (auto num : nums1) {
            ++map1[num];
        }
        for (auto num : nums2) {
            if (map1.count(num)) {
                intersection.push_back(num);
                --map1[num];
                if (map1[num] == 0) {
                    map1.erase(num);
                }
            }
        }
        return intersection;
    }
};

