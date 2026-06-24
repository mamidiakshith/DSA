class MyQueue {
public:
    list<int>l;
    MyQueue() {
        
    }
    
    void push(int x) {
        l.push_back(x);
    }
    
    int pop() {
        int x=l.front();
        l.pop_front();
        return x;
    }
    
    int peek() {
        return l.front();
    }
    
    bool empty() {
        return l.empty();
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