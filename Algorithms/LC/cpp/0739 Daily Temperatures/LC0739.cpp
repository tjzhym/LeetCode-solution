// Problem :    https://leetcode.com/problems/daily-temperatures/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-13


#include <vector>
using namespace std;


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> higherTempDay(temperatures.size(), 0);

        for (int index = higherTempDay.size() - 2; index > -1; --index) {
            int findIndex = index + 1;
            while (findIndex < higherTempDay.size()) {
                if (temperatures[findIndex] > temperatures[index]) {
                    break;
                }
                ++findIndex;
            }
            if (findIndex == temperatures.size()) {
                higherTempDay[index] = 0;
            } else {
                higherTempDay[index] = findIndex - index;
            }
        }
        return higherTempDay;
    }
};

// Brute Force (NOT PASS)