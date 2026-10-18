class MyQueue {
    stack <int> s;
    vector <int> record;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        record.push_back(x);
        s = stack<int>();
        for (int i = record.size() - 1 ; i >= 0; i--){
            s.push(record[i]);
        }
    }
    
    int pop() {
        int top = s.top();
        record.erase(record.begin());
        s.pop();
        return top;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */