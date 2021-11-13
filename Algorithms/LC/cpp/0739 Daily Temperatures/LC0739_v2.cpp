// Problem :    https://leetcode.com/problems/daily-temperatures/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-13


#include <vector>
#include <stack>
using namespace std;


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> higherTempDay(temperatures.size(), 0);
        stack<int> tempStack;
        for (int index = 0; index < temperatures.size(); ++index) {
            while (!tempStack.empty() && temperatures[index] > temperatures[tempStack.top()]) {
                higherTempDay[tempStack.top()] = index - tempStack.top();
                tempStack.pop();
            }
            tempStack.push(index);
        }
        return higherTempDay;
    }
};

// Stack