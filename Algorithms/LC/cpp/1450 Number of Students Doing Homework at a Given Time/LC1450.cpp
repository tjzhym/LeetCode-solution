// Problem :    https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-8-22


#include <vector>
using namespace std;


class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int count = 0;
        for (int index = 0; index < startTime.size(); ++index) {
            if (startTime[index] <= queryTime && queryTime <= endTime[index]) {
                ++count;
            }
        }
        return count;
    }
};

// Traverse