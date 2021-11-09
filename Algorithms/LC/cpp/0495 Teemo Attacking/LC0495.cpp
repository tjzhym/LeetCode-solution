// Problem :    https://leetcode.com/problems/teemo-attacking/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-9


#include <vector>
using namespace std;


class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int count = 0;
        for (int tIndex = 0; tIndex < timeSeries.size(); ++tIndex) {
            if (tIndex == timeSeries.size() - 1 || timeSeries[tIndex + 1] - timeSeries[tIndex] > duration ) {
                count += duration;
            } else {
                count += timeSeries[tIndex + 1] - timeSeries[tIndex];
            }
        }
        return count;
    }
};

// Traverse