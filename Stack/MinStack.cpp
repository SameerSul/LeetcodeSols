class MinStack {
private:
    stack<int> s;       // Main stack to store all elements
    stack<int> minS;    // Stack to keep track of minimum elements

public:
    MinStack() {
        // Constructor - no initialization needed for stack
    }
    
    void push(int val) {
        s.push(val);
        if (minS.empty() || val <= minS.top()) {
            minS.push(val);
        }
    }
    
    void pop() {
        if (!s.empty()) {
            if (s.top() == minS.top()) {
                minS.pop();
            }
            s.pop();
        }
    }
    
    int top() {
        if (!s.empty()) {
            return s.top();
        }
        throw runtime_error("Stack empty!");
    }
    
    int getMin() {
        if (!minS.empty()) {
            return minS.top();
        }
        throw runtime_error("Stack empty!");
    }
};