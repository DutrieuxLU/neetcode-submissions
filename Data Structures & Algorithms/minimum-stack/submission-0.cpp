class MinStack {
private:
        stack<int> sm;
        stack<int> mystack;
public:
    MinStack() {
    }
    
    void push(int val) {
        if (sm.empty() || val < sm.top()) {
            sm.push(val);
        } else {
            sm.push(sm.top());
        }
        mystack.push(val);

    }
    
    void pop() {
        sm.pop();
        mystack.pop();
    }
    
    int top() {
        return mystack.top();
    }
    
    int getMin() {
        return sm.top();
    }
};
