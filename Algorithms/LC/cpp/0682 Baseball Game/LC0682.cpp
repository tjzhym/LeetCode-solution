// Problem :    https://leetcode.com/problems/baseball-game/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-6-23


#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> record;
        int sum = 0;
        for (const auto& op : ops) {
            switch (op.front()) {
            case '+':
                sum += *(record.end() - 1) + *(record.end() - 2);
                record.emplace_back(*(record.end() - 1) + *(record.end() - 2));
                break;
            case 'D':
                sum += record.back() * 2;
                record.emplace_back(record.back() * 2);
                break;
            case 'C':
                sum -= record.back();
                record.pop_back();
                break;
            default:
                sum += stoi(op);
                record.emplace_back(stoi(op));
            }
        }
        return sum;
    }
};

// Traverse