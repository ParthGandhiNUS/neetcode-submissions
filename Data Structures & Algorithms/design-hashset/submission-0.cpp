struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class MyHashSet {
private:
    static constexpr int n = 10000;
    ListNode* arr[n];
public:
    MyHashSet() {
        for (int i = 0; i < n; i++) {
            arr[i] = new ListNode(0);
        }
    }
    
    void add(int key) {
        ListNode* curr = arr[key % n];
        while (curr->next != nullptr){
            if (curr->next->val == key){
                return;
            }
            curr = curr->next;
        }
        curr->next = new ListNode(key);
    }
    
    void remove(int key) {
        ListNode* curr = arr[key % n];
        while (curr->next != nullptr){
            if (curr->next->val == key){
                ListNode* removedNode = curr->next;
                curr->next = removedNode->next;
                delete removedNode;
                return;
            }
            curr = curr->next;
        }
    }
    
    bool contains(int key) {
        ListNode* curr = arr[key % n];
        while (curr->next != nullptr){
            if (curr->next->val == key){
                return true;
            }
            curr = curr->next;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */