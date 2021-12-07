// Problem :    https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-12-7


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
    int getDecimalValue(ListNode* head) {
        int value = 0;
        while (head) {
            value <<= 1;
            value += head->val;
            head = head->next;
        }
        return value;
    }
};

// Traverse