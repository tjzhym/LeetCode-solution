// Problem :    https://leetcode.com/problems/fizz-buzz/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-12


using namespace std;


class Solution {
public:
    int findComplement(int num) {
        int highIndex = 0, temp = 1;

        // find highest digit index
        for (int index = 0; index < 31; ++index) {
            if (num >= temp) {
                temp <<= 1;
                highIndex = index;
            }
            else {
                break;
            }
        }

        int mask = (highIndex == 30 ? INT32_MAX : (1 << (highIndex + 1)) - 1);
        return num ^ mask;
    }
};

