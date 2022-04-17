// Problem :    https://leetcode.com/problems/swap-nodes-in-pairs/
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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* pCurrent = dummy;
        while (pCurrent->next && pCurrent->next->next) {
            ListNode* pBehind = pCurrent->next;
            ListNode* pAhead = pCurrent->next->next;
            pCurrent->next = pAhead;
            pBehind->next = pAhead->next;
            pAhead->next = pBehind;
            pCurrent = pBehind;
        }
        head = dummy->next;
        delete dummy;
        return head;
    }
};

// Traverse