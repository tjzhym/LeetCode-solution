// Problem :    https://leetcode.com/problems/linked-list-components/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-10-12


#include <unordered_set>
#include <vector>


 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    int numComponents(ListNode* head, std::vector<int>& nums) {
	    std::unordered_set<int> number_count;
        for (const int num : nums) {
            number_count.emplace(num);
        }
        int count = 0;
        bool has_num = false;
        while (head != nullptr) {
            if (number_count.count(head->val)) {
                if (!has_num) {
                    has_num = true;
                    ++count;
                }
            }
            else {
                has_num = false;
            }
            head = head->next;
        }
        return count;
    }
};