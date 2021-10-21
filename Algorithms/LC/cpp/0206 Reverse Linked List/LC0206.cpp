// Problem :    https://leetcode.com/problems/reverse-linked-list/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-8-22


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* reversedHead = NULL;
        ListNode* next = NULL;
        while (head) {
            next = head->next;
            head->next = reversedHead;
            reversedHead = head;
            head = next;
        }
        return reversedHead;
    }
};

// Traverse

