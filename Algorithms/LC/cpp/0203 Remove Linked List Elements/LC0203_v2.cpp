// Problem :    https://leetcode.com/problems/remove-linked-list-elements/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-11


using namespace std;


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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) {
            return head;
        }

        head->next = removeElements(head->next, val);
        if (head->val == val) {
            return head->next;
        }
        return head;
    }
};

// Recursion