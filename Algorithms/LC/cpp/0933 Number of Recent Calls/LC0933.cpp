// Problem :    https://leetcode.com/problems/number-of-recent-calls/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-5-6


#include <queue>
using namespace std;


class RecentCounter {
    queue<int> requests;
public:
    RecentCounter() {
    }

    int ping(int t) {
        requests.emplace(t);
        while (requests.front() < t - 3000) {
            requests.pop();
        }
        return requests.size();
    }
};

// Queue

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */