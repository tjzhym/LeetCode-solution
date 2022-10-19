// Problem :    https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-10-19


#include <numeric>
#include <vector>


class Solution {
public:
    int countStudents(std::vector<int>& students, std::vector<int>& sandwiches) {
        int square = std::accumulate(students.begin(), students.end(), 0);
        int circular = students.size() - square;
        for (const int sandwich : sandwiches) {
            if (sandwich == 0 && circular > 0) {
                --circular;
            }
            else if (sandwich == 1 && square > 0) {
                --square;
            }
            else {
                break;
            }
        }
        return circular + square;
    }
};
