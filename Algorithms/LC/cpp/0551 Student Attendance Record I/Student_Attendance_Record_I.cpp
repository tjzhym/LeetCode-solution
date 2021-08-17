// Problem :    https://leetcode.com/problems/student-attendance-record-i/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-8-17

#include <string>
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int absentCount = 0, lateCount = 0;
        for (auto c : s) {
            if (c == 'A') {
                ++absentCount;
                if (absentCount == 2) {
                    return false;
                }
            }

            if (c == 'L') {
                ++lateCount;
                if (lateCount == 3) {
                    return false;
                }
            }
            else {
                lateCount = 0;
            }
        }
        return true;
    }
};

