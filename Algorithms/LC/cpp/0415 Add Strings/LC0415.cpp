// Problem :    https://leetcode.com/problems/add-strings/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-7


#include <string>
using namespace std;


class Solution {
public:
    string addStrings(string num1, string num2) {
        int index1 = num1.size() - 1, index2 = num2.size() - 1, carry = 0;
        string output;
        while (index1 > -1 || index2 > -1 || carry) {
            int digit1 = 0, digit2 = 0;
            if (index1 > -1) {
                digit1 = num1[index1] - '0';
            } 
            if (index2 > -1) {
                digit2 = num2[index2] - '0';
            } 

            int sum = digit1 + digit2 + carry;
            carry = sum / 10;
            output.push_back('0' + sum % 10);
            --index1;
            --index2;
        }
        reverse(output.begin(), output.end());
        return output;
    }
};

// Double Pointer