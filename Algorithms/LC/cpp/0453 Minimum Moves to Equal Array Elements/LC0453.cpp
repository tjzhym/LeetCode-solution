// Problem :    https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-19


#include <vector>
using namespace std;


class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minNumber = *min_element(nums.begin(), nums.end());
        int operationNumber = 0;
        for (auto num : nums) {
            operationNumber += num - minNumber;
        }
        return operationNumber;
    }
};

// n-1 elements + 1     -->     1 element - 1

