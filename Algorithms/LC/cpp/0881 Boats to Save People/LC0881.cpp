// Problem :    https://leetcode.com/problems/boats-to-save-people/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-8-26

#include <algorithm>
using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int lightIndex = 0, heavyIndex = people.size() - 1;
        int numberBoat = 0;
        while (lightIndex <= heavyIndex) {
            if (people[lightIndex] + people[heavyIndex] > limit) {
                --heavyIndex;
            }
            else {
                ++lightIndex;
                --heavyIndex;
            }
            ++numberBoat;
        }
        return numberBoat;
    }
};

