// Problem :    https://leetcode.com/problems/minimum-absolute-difference/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-7-4


#include <algorithm>
#include <vector>
using namespace std;


class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int minDifference = INT_MAX;
        vector<vector<int>> answer;
        for (size_t index = 1; index < arr.size(); ++index) {
            int difference = arr[index] - arr[index - 1];
            if (difference < minDifference) {
                minDifference = difference;
                answer = { {arr[index - 1], arr[index]} };
            }
            else if (difference == minDifference) {
                answer.emplace_back(vector<int>{arr[index - 1], arr[index]});
            }
        }
        return answer;
    }
};

// Sort