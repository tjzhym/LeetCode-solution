// Problem :    https://leetcode.com/problems/shortest-distance-to-a-character/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-19


#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> distances(s.size(), 0);

        int currentPosition = -s.size();
        for (int index = 0; index < s.size(); ++index) {
            if (s[index] == c) {
                currentPosition = index;
            }
            distances[index] = index - currentPosition;
        }

        currentPosition = 2 * s.size();
        for (int index = s.size() - 1; index > -1; --index) {
            if (s[index] == c) {
                currentPosition = index;
            }
            int distance = currentPosition - index;
            distances[index] = min(distances[index], distance);
        }

        return distances;
    }
};

// Traverse