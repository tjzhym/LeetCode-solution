// Problem :    https://leetcode.com/problems/last-stone-weight/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-28


#include <vector>
#include <queue>
using namespace std;


class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;
        for (int stone : stones) {
            maxHeap.push(stone);
        }

        while (maxHeap.size() > 1) {
            int x = maxHeap.top();
            maxHeap.pop();
            int y = maxHeap.top();
            maxHeap.pop();
            if (x != y) {
                maxHeap.push(x - y);
            }
        }

        if (maxHeap.empty()) {
            return 0;
        }
        return maxHeap.top();
    }
};

// Max Heap