// Problem :    https://leetcode.com/problems/day-of-the-week/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-7


#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        vector<string> dayList = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
        int monthDaysMod7[12] = { 0,3,2,5,0,3,5,1,4,6,2,4 }; // year begins in March
        if (month < 3) {
            year -= 1;
        }
        return dayList[(year + (year / 4 - year / 100 + year / 400) + monthDaysMod7[month - 1] + day) % 7];
    }
};

// Sakamoto Algorithm