// Problem :    https://leetcode.com/problems/find-the-winner-of-the-circular-game/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-5-4


using namespace std;


class Solution {
public:
    int findTheWinner(int n, int k) {
        int winner = 1;
        for (int number = 2; number < n + 1; ++number) {
            winner = (k + winner - 1) % number + 1;
        }
        return winner;
    }
};

// Traverse