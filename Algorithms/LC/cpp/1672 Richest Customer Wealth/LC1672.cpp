// Problem :    https://leetcode.com/problems/richest-customer-wealth/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-14


#include <numeric>
#include <vector>
using namespace std;


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int currentMaxWealth = 0;
        for (auto account : accounts) {
            int wealthSum = accumulate(account.begin(), account.end(), 0);
            currentMaxWealth = max(currentMaxWealth, wealthSum);
        }
        return currentMaxWealth;
    }
};

// Traverse