// Problem :    https://leetcode.com/problems/koko-eating-bananas/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-6-7


#include <vector>
using namespace std;


class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = INT_MIN;
        for (const auto& pile : piles) {
            high = max(high, pile);
        }
        int k = high;

        while (low < high) {
            int speed = low + (high - low) / 2;
            long time = 0;
            for (const auto& pile : piles) {
                time += (pile + speed - 1) / speed;
            }
            if (time <= h) {
                k = speed;
                high = speed;
            }
            else {
                low = speed + 1;
            }
        }
        return k;
    }
};

// Binary Search