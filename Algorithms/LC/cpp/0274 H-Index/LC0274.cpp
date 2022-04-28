// Problem :    https://leetcode.com/problems/h-index/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-28


#include <vector>
using namespace std;


class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        vector<int> counter(n + 1);
        for (auto citation : citations) {
            if (citation > n) {
                ++counter[n];
            }
            else {
                ++counter[citation];
            }
        }

        int h = 0, count = n + 1;
        while (h < count) {
            --count;
            h += counter[count];
        }
        return count;
    }
};

// Traverse