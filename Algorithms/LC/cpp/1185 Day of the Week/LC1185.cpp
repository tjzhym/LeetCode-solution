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
        vector<string> dayList = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        vector<int> monthDays = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int days = 365 * (year - 1971) + (year - 1969) / 4; // Considering leap year
        for (int index = 0; index < month - 1; index++) {
            days += monthDays[index];
        }
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            if (month > 2) {
                days += 1;
            }
        }
        days += day;
        return dayList[(days + 4) % 7];
    }
};

// calendar rules