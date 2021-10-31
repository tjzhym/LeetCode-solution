// Problem :    https://leetcode.com/problems/distribute-candies/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-31


#include <unordered_set>
using namespace std;


class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> uniqueType(candyType.begin(), candyType.end());
        return min(uniqueType.size(), candyType.size() / 2);
    }
};

// Set