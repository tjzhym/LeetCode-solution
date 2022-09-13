// Problem :    https://leetcode.com/problems/mean-of-array-after-removing-some-elements/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-9-14


#include <algorithm>
#include <numeric>
#include <vector>


class Solution {
public:
    double trimMean(std::vector<int>& arr) {
        int n = arr.size();
        std::sort(arr.begin(), arr.end());
        int sum = std::accumulate(arr.begin() + n / 20, arr.begin() + (19 * n / 20), 0);
        return sum / (n * 0.9);
    }
};