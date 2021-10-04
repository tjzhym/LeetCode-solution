// Problem :    https://leetcode.com/problems/contains-duplicate/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-3

#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hashSet;
        for (auto num : nums) {
            if (hashSet.find(num) != hashSet.end()) {
                return true;
            }
            hashSet.insert(num);
        }
        return false;
    }
};

// HashSet

