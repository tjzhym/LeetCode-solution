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
        if (month < 3) {
            month += 12;
            year--;
        }
        int c = year / 100;
        year %= 100;
        int w = c / 4 - 2 * c + year + year / 4 + 13 * (month + 1) / 5 + day - 1;
        return dayList[(w % 7 + 7) % 7];
    }
};

// Zeller Formula