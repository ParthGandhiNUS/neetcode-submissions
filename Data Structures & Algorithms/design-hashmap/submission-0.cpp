struct ListNode{
    int k;
    int val;
    ListNode* next;

    ListNode(int x, int y) : k(x), val(y), next(nullptr) {}
};

class MyHashMap {
private: 
    static constexpr int n = 1000;
    ListNode* arr[n];
public:
    MyHashMap() {
        for (int i = 0; i < n; i++){
            arr[i] = new ListNode(0,0);
        }            
    }
    
    void put(int key, int value) {
        ListNode* curr = arr[key % n];
        while (curr->next != nullptr){
            if (curr->next->k == key){
                curr->next->val = value;
                return;
            }
            curr = curr->next;
        }
        curr->next = new ListNode(key, value);
    }
    
    int get(int key) {
        ListNode* curr = arr[key % n];
        while (curr->next != nullptr){
            if (curr->next->k == key){
                return curr->next->val;
            }
            curr = curr->next;
        }
        return -1;
    }
    
    void remove(int key) {
        ListNode* curr = arr[key % n];
        while (curr->next != nullptr){
            if (curr->next->k == key){
                ListNode* toRemove = curr->next;
                curr->next = toRemove->next;
                delete toRemove;
                return;
            }
            curr = curr->next;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */