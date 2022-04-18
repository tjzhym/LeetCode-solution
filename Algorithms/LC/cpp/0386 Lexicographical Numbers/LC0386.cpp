// Problem :    https://leetcode.com/problems/lexicographical-numbers/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-18


#include <vector>
using namespace std;


class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> numbers(n, 0);
        int number = 1;
        for (int index = 0; index < n; ++index) {
            numbers[index] = number;
            if (number * 10 <= n) {
                number *= 10;
            }
            else {
                while (number % 10 == 9 || number + 1 > n) {
                    number /= 10;
                }
                ++number;
            }
        }
        return numbers;
    }
};

// Traverse