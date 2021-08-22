// Problem :    https://leetcode.com/problems/reverse-linked-list/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-8-22

#include <vector>
using namespace std;

//Definition for singly-linked list.
 struct ListNode {
	int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pReversedList = NULL;
        ListNode* pTemp = NULL;

        while (head) {
            pTemp = head->next;
            head->next = pReversedList;
            pReversedList = head;
            head = pTemp;
        }
        return pReversedList;
    }
};

