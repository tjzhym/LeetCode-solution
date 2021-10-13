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
        while (k) {
            pTemp = pTemp->next;
            --k;
        }
        while (pTemp) {
            pTemp = pTemp->next;
            head = head->next;
        }
        return head;
    }
};

 // two pointer