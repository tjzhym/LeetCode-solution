// Problem :    https://leetcode.cn/problems/one-away-lcci/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-5-14


#include <string>
using namespace std;


class Solution {
public:
    bool oneEditAway(string first, string second) {
        int left1 = 0, right1 = first.size() - 1;
        int left2 = 0, right2 = second.size() - 1;
        while ((left1 < first.size() && left2 < second.size()) && first[left1] == second[left2]) {
            ++left1;
            ++left2;
        }
        while ((right1 > -1 && right2 > -1) && first[right1] == second[right2]) {
            --right1;
            --right2;
        }
        if (left1 == first.size() && right1 == -1) {
            return true;
        }
        if (first.size() == second.size()) {
            return left1 == right1 && left2 == right2;
        }
        return (left1 - right1 == 1 && left2 == right2) || (left1 == right1 && left2 - right2 == 1);
    }
};

// Double Pointer