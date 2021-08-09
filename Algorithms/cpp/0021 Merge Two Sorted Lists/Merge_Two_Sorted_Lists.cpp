// Problem :    https://leetcode.com/problems/merge-two-sorted-lists/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-8-9


#include <cstddef>

// Definition for singly-linked list.
struct ListNode {
	int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* sortedList = NULL;
        if (l1 == NULL && l2 == NULL) {
            return NULL;
        }
        else if (l1 == NULL) {
            return l2;
        }
        else if (l2 == NULL) {
            return l1;
        }
        if (l1->val > l2->val) {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
        else {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
    }
};