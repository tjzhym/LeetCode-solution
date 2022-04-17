// Problem :    https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-17


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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* pAhead = head;
        ListNode* pBehind = dummy;
        while (n) {
            pAhead = pAhead->next;
            --n;
        }
        while (pAhead) {
            pAhead = pAhead->next;
            pBehind = pBehind->next;
        }
        pBehind->next = pBehind->next->next;
        head = dummy->next;
        delete dummy;
        return head;
    }
};

// Double Pointer