// Problem :    https://leetcode.com/problems/third-maximum-number/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-20


#include <vector>
using namespace std;


class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int* fisrtLarge = nullptr, * secondLarge = nullptr, * thirdLarge = nullptr;
        for (auto& num : nums) {
            if (!fisrtLarge || num > *fisrtLarge) {
                thirdLarge = secondLarge;
                secondLarge = fisrtLarge;
                fisrtLarge = &num;
            }
            else if (num < *fisrtLarge && (!secondLarge || num > *secondLarge)) {
                thirdLarge = secondLarge;
                secondLarge = &num;
            }
            else if (secondLarge && num < *secondLarge && (!thirdLarge || num > *thirdLarge)) {
                thirdLarge = &num;
            }
        }
        if (!thirdLarge) {
            return *fisrtLarge;
        }
        else {
            return *thirdLarge;
        }
    }
};

// Traverse