class MinStack {
public:
    stack<long long int> s;
    long long int minval = -1;
    MinStack() {
        
    }
    
    void push(long long int val) {
        if(s.size()==0)
        {
            s.push(val);
            minval = val;
        }
        else
            if(val >=minval)
                s.push(val);
        else
            if(val < minval)
            {
                s.push(2*val - minval);
                minval = val;
            }
    }
    
    void pop() {
        if(s.size()==0)
        {
            minval = -1;
            return;
        }
        else
            if(s.top() >= minval)
                s.pop();
        else
            if(s.top() < minval)
            {
                minval= 2*minval - s.top();
                s.pop();
            }
    }
    
    int top() {
        if(s.size()==0)
            return -1;
        else
            if(s.top() >= minval)
                return s.top();
        else
            if(s.top() < minval)
            {
                return minval;
            }
        return -1;
    }
    
    int getMin() {
        if(s.size()==0)
            return -1;
        else
            return minval;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */