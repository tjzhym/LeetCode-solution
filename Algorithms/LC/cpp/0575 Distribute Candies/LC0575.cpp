// Problem :    https://leetcode.com/problems/distribute-candies/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-31


#include <vector>
using namespace std;


class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin(), candyType.end());
        int count = 1, lastType = candyType[0];
        for (int type : candyType) {
            if (type != lastType) {
                ++count;
                lastType = type;
            }
        }
        count = min(count, int(candyType.size() / 2));
        return count;
    }
};

// Count number of different elements