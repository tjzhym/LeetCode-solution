// Problem :    https://leetcode.com/problems/determine-color-of-a-chessboard-square/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-12-8


#include <string>


class Solution {
public:
    bool squareIsWhite(std::string coordinates) {
        return (coordinates[0] - 'a' + coordinates[1] - '1') % 2 == 1;
    }
};