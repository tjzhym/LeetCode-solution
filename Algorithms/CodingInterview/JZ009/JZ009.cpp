// Problem :    https://leetcode-cn.com/problems/yong-liang-ge-zhan-shi-xian-dui-lie-lcof/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-3


#include <stack>
using namespace std;


class CQueue {
    stack<int> forwardStack, backwardStack;
public:
    CQueue() {
        while (!forwardStack.empty()) {
            forwardStack.pop();
        }
        while (!backwardStack.empty()) {
            backwardStack.pop();
        }
    }

    void appendTail(int value) {
        forwardStack.push(value);
    }

    int deleteHead() {
        int deleteValue = 0;
        if (backwardStack.empty()) {
            if (forwardStack.empty()) {
                deleteValue = -1;
            } else {
                while (!forwardStack.empty()) {
                    backwardStack.push(forwardStack.top());
                    forwardStack.pop();
                }
                deleteValue = backwardStack.top();
                backwardStack.pop();
            }   
        } else {
            deleteValue = backwardStack.top();
            backwardStack.pop();
        }

        return deleteValue;
    }
};

/**
* Your CQueue object will be instantiated and called as such:
* CQueue* obj = new CQueue();
* obj->appendTail(value);
* int param_2 = obj->deleteHead();
*/