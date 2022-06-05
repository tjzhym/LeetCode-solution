// Problem :    https://leetcode.com/problems/unique-email-addresses/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-6-5


#include <vector>
#include <string>
#include <unordered_set>
using namespace std;


class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> emailSet;
        for (const auto& email : emails) {
            string simplifiedEmail;
            for (const auto& c : email) {
                if (c == '+' || c == '@') {
                    break;
                }
                if (c != '.') {
                    simplifiedEmail += c;
                }
            }
            simplifiedEmail += email.substr(email.find('@'));
            emailSet.emplace(simplifiedEmail);
        }
        return emailSet.size();
    }
};

// Set