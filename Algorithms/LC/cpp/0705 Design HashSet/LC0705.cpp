// Problem :    https://leetcode.com/problems/design-hashset/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-21


#include <vector>
using namespace std;


class MyHashSet {
private:
    vector<bool> numberInData;
public:
    MyHashSet() {
        numberInData.assign(1000001, false);
    }

    void add(int key) {
        numberInData[key] = true;
    }

    void remove(int key) {
        numberInData[key] = false;
    }

    bool contains(int key) {
        return numberInData[key];
    }
};

// 

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */