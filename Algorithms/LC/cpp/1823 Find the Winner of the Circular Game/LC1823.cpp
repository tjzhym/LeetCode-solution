// Problem :    https://leetcode.com/problems/find-the-winner-of-the-circular-game/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-5-4


#include <queue>
using namespace std;


class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> competitors;
        for (int index = 1; index < (n + 1); ++index) {
            competitors.emplace(index);
        }

        while (competitors.size() > 1) {
            int count = k;
            while (count > 1) {
                competitors.emplace(competitors.front());
                competitors.pop();
                --count;
            }
            competitors.pop();
        }
        return competitors.front();
    }
};

// Queue