// Problem :    https://leetcode-cn.com/problems/lian-biao-zhong-dao-shu-di-kge-jie-dian-lcof/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-9-8


using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode* pTemp = head;
        int listLength = 0;
        while (pTemp) {
            ++listLength;
            pTemp = pTemp->next;
        }
        int listOrder = listLength - k;
        while (listOrder) {
            head = head->next;
            --listOrder;
        }
        return head;
    }
};

 // sequence search