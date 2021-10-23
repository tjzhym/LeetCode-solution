// Problem :    https://leetcode.com/problems/construct-the-rectangle/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-22


#include <vector>
#include <cmath>
using namespace std;


class Solution {
public:
    vector<int> constructRectangle(int area) {
        int L = 0, W = 0;
        W = sqrt(area);
        while (area % W) {
            --W;
        }
        L = area / W;
        return { L, W };
    }
};

// Traverse
