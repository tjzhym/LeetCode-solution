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
        if (month < 3)
        {
            month = month + 12;
            year--;
        }
        int days = 0;
        days = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400 + 1) % 7;
        return dayList[days];
    }
};

// Kim larsen calculation formula