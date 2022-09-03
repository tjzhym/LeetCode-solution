// Problem :    https://leetcode.com/problems/maximum-length-of-pair-chain/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-9-3


#include <algorithm>
#include <vector>
using namespace std;


class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int current_right = INT_MIN, length = 0;
        sort(pairs.begin(), pairs.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
            });
        for (auto& pair : pairs) {
            if (current_right < pair[0]) {
                current_right = pair[1];
                ++length;
            }
        }
        return length;
    }
};
