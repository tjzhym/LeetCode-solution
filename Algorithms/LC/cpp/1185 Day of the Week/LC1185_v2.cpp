// Problem :    https://leetcode.com/problems/day-of-the-week/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-7


#include <ctime>
#include <string>
using namespace std;


class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        tm time{ 0, 0, 0, day, month - 1, year - 1900 };
        char ret[10];
        mktime(&time);
        strftime(ret, 10, "%A", &time);
        return ret;
    }
};

// STL