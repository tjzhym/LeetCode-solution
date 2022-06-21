// Problem :    https://leetcode.com/problems/defanging-an-ip-address/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-6-21


#include <string>
using namespace std;


class Solution {
public:
    string defangIPaddr(string address) {
        string newAdress;
        for (const auto& c : address) {
            if (c == '.') {
                newAdress += "[.]";
            }
            else {
                newAdress += c;
            }
        }
        return newAdress;
    }
};

// Traverse