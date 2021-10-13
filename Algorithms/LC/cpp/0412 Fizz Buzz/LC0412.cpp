// Problem :    https://leetcode.com/problems/fizz-buzz/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-12


#include <vector>
#include <string>
using namespace std;


class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> outputVector;
        int number = 1;
        while (number < n + 1) {
            if (number % 15 == 0) {
                outputVector.push_back("FizzBuzz");
            }
            else if (number % 3 == 0) {
                outputVector.push_back("Fizz");
            }
            else if (number % 5 == 0) {
                outputVector.push_back("Buzz");
            }
            else {
                outputVector.push_back(to_string(number));
            }
            ++number;
        }
        return outputVector;
    }
};

