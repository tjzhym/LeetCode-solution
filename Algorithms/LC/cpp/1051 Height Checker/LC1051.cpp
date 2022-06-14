// Problem :    https://leetcode.com/problems/height-checker/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-6-14


#include <vector>
using namespace std;


class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> numberCount(101, 0);
        for (const auto& height : heights) {
            ++numberCount[height];
        }

        int index = 0, count = 0;
        for (int number = 1; number < 101; ++number) {
            while (numberCount[number] > 0) {
                if (heights[index] != number) {
                    ++count;
                }
                --numberCount[number];
                ++index;
            }
        }
        return count;
    }
};

// Count Sort