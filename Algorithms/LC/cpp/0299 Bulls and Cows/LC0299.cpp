// Problem :    https://leetcode.com/problems/bulls-and-cows/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-7


#include <vector>
#include <string>
using namespace std;


class Solution {
public:
    string getHint(string secret, string guess) {
        int bullsNumber = 0, cowsNumber = 0;
        vector<int> secretCount(10,0), guessCount(10,0);
        for (int index = 0; index < secret.size(); ++index) {
            if (secret[index] == guess[index]) {
                ++bullsNumber;
            } else {
                ++secretCount[secret[index] - '0'];
                ++guessCount[guess[index] - '0'];
            }
        }
        for (int index = 0; index < 10; ++index) {
            cowsNumber += min(secretCount[index], guessCount[index]);
        }
        string output = to_string(bullsNumber) + "A" + to_string(cowsNumber) + "B";
        return output;
    }
};

// Traverse