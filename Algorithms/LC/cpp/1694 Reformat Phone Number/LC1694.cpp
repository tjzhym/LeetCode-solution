// Problem :    https://leetcode.com/problems/reformat-phone-number/description/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-10-1


#include <string>


class Solution {
public:
    std::string reformatNumber(std::string number) {
        std::string digits;
        for (const char c : number) {
            if (isdigit(c)) {
                digits.push_back(c);
            }
        }
        
        int n = digits.size();
        int pt = 0;
        std::string ans;
        ans.reserve(n);
        while (n) {
            if (n > 4) {
                ans += digits.substr(pt, 3) + "-";
                pt += 3;
                n -= 3;
            }
            else if (n == 4) {
                ans += digits.substr(pt, 2) + "-" + digits.substr(pt + 2, 2);
                n -= 4;
            }
            else if (n == 3) {
                ans += digits.substr(pt, n);
                n -= 3;
            }
            else {
                ans += digits.substr(pt, n);
                n -= 2;
            }
        }
        return ans;
    }
};