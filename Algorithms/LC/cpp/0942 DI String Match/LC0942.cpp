// Problem :    https://leetcode.com/problems/di-string-match/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-5-9


#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        int low = 0, high = n;
        vector<int> numbers(n + 1, 0);
        for (int index = 0; index < n; ++index) {
            if (s[index] == 'I') {
                numbers[index] = low;
                ++low;
            }
            else if (s[index] == 'D') {
                numbers[index] = high;
                --high;
            }
        }
        numbers[n] = high;
        return numbers;
    }
};

// Traverse