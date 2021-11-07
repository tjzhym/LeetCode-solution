// Problem :    https://leetcode.com/problems/reverse-string/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-7


#include <vector>
using namespace std;


class Solution {
public:
    void reverseString(vector<char>& s) {
        int leftIndex = 0, rightIndex = s.size() - 1;
        while (leftIndex < rightIndex) {
            swap(s[leftIndex], s[rightIndex]);
            ++leftIndex;
            --rightIndex;
        }
    }
};

// Double Pointer