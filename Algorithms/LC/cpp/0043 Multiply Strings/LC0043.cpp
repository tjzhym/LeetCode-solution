// Problem :    https://leetcode.com/problems/multiply-strings/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-17


#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") {
            return "0";
        }
        vector<int> product(num1.size() + num2.size(), 0);
        for (int index1 = num1.size() - 1; index1 > -1; --index1) {
            int digit1 = num1[index1] - '0';
            for (int index2 = num2.size() - 1; index2 > -1; --index2) {
                int digit2 = num2[index2] - '0';
                product[product.size() - index1 - index2 - 2] += digit1 * digit2;
            }
        }
        string output;
        for (int index = 0; index < product.size() - 1; ++index) {
            product[index + 1] += product[index] / 10;
            product[index] = product[index] % 10;
            output.push_back('0' + product[index]);
        }
        output.push_back('0' + product.back());
        if (output.back() == '0') {
            output.pop_back();
        }
        reverse(output.begin(), output.end());

        return output;
    }
};

// Traverse