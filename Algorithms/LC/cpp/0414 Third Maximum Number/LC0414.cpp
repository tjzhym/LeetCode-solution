// Problem :    https://leetcode.com/problems/third-maximum-number/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-20


#include <set>
#include <vector>
using namespace std;


class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> numbers;
        for (auto num : nums) {
            numbers.insert(num);
            if (numbers.size() > 3) {
                numbers.erase(numbers.begin());
            }
        }
        if (numbers.size() == 3) {
            return *numbers.begin();
        }
        else {
            return *numbers.rbegin();
        }
    }
};

// Set