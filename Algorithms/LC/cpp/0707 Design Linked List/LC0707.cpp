// Problem :    https://leetcode.com/problems/design-linked-list/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-9-24


struct MyLinkedListNode {
    MyLinkedListNode(int val) : val_(val), prev_(nullptr), next_(nullptr) {}
    MyLinkedListNode(int val, MyLinkedListNode* prev, MyLinkedListNode* next)
        : val_(val),
        prev_(prev),
        next_(next) {}

    ~MyLinkedListNode() = default;

    int val_;
    MyLinkedListNode* prev_;
    MyLinkedListNode* next_;
};

class MyLinkedList {
public:
    MyLinkedList()
        : size_(0),
        head_(new MyLinkedListNode(-1)),
        tail_(new MyLinkedListNode(-1)) {
        head_->next_ = tail_;
        tail_->prev_ = head_;
    }

    ~MyLinkedList() {
        MyLinkedListNode* node;
        while (size_) {
            MyLinkedListNode* node = head_->next_;
            head_->next_->next_->prev_ = head_;
            head_->next_ = head_->next_->next_;
            delete(node);
            --size_;
        }
        delete(head_);
        delete(tail_);
    }


    int get(int index) {
        if (index < 0 || index >= size_) {
            return -1;
        }
        MyLinkedListNode* node;
        if (index < size_ / 2) {        // from head
            node = head_->next_;
            int move = index;
            while (move) {
                node = node->next_;
                --move;
            }
        }
        else {                        // from tail
            node = tail_->prev_;
            int move = size_ - index - 1;
            while (move) {
                node = node->prev_;
                --move;
            }
        }
        return node->val_;
    }

    void addAtHead(int val) {
        MyLinkedListNode* next = head_->next_;
        MyLinkedListNode* node = new MyLinkedListNode(val, head_, next);
        head_->next_ = node;
        next->prev_ = node;
        ++size_;
    }

    void addAtTail(int val) {
        MyLinkedListNode* prev = tail_->prev_;
        MyLinkedListNode* node = new MyLinkedListNode(val, prev, tail_);
        tail_->prev_ = node;
        prev->next_ = node;
        ++size_;
    }

    void addAtIndex(int index, int val) {
        if (index > size_) {
            return;
        }
        else if (index <= 0) {
            addAtHead(val);
        }
        else if (index == size_) {
            addAtTail(val);
        }
        else {
            if (index < size_ / 2) {        // from head
                MyLinkedListNode* prev = head_;
                int move = index;
                while (move) {
                    prev = prev->next_;
                    --move;
                }
                MyLinkedListNode* next = prev->next_;
                MyLinkedListNode* node = new MyLinkedListNode(val, prev, next);
                prev->next_ = node;
                next->prev_ = node;
            }
            else {                        // from head
                MyLinkedListNode* next = tail_->prev_;
                int move = size_ - index - 1;
                while (move) {
                    next = next->prev_;
                    --move;
                }
                MyLinkedListNode* prev = next->prev_;
                MyLinkedListNode* node = new MyLinkedListNode(val, prev, next);
                prev->next_ = node;
                next->prev_ = node;
            }
            ++size_;
        }
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size_) {
            return;
        }

        if (index < size_ / 2) {        // from head
            MyLinkedListNode* node = head_->next_;
            int move = index;
            while (move) {
                node = node->next_;
                --move;
            }
            MyLinkedListNode* prev = node->prev_;
            MyLinkedListNode* next = node->next_;
            prev->next_ = next;
            next->prev_ = prev;
            delete(node);

        }
        else {                        // from tail
            MyLinkedListNode* node = tail_->prev_;
            int move = size_ - index - 1;
            while (move) {
                node = node->prev_;
                --move;
            }
            MyLinkedListNode* prev = node->prev_;
            MyLinkedListNode* next = node->next_;
            prev->next_ = next;
            next->prev_ = prev;
            delete(node);
        }
        --size_;
    }

private:
    size_t size_;
    MyLinkedListNode* head_;
    MyLinkedListNode* tail_;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */