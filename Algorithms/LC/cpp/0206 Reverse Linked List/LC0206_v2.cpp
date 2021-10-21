// Problem :    https://leetcode.com/problems/reverse-linked-list/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-21


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }
        ListNode* reversedHead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return reversedHead;
    }
};

// Recursion

