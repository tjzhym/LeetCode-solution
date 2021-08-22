// Problem :    https://leetcode.com/problems/escape-the-ghosts/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-8-22

#include <vector>
using namespace std;

class Solution {
public:
    int manhattanDistance(vector<int> ghosts, vector<int> target) {
        return abs(ghosts[0] - target[0]) + abs(ghosts[1] - target[1]);
    }

    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int targetDistance = abs(target[0]) + abs(target[1]);
        for (auto ghost : ghosts) {
            int ghostDistance = manhattanDistance(ghost, target);
            if (ghostDistance <= targetDistance) {
                return false;
            }
        }
        return true;
    }
};

