class MyQueue {
public:
    stack<int> s;
    stack<int> s1;
    int front ;
    
    MyQueue() {
        
    }
    
    void push(int x) {
       s.push(x);
    }
    
    int pop() {
       if(!s1.empty())
       {
           front = s1.top();
           s1.pop();
       }
        else
        {
            while(!s.empty())
            {
                s1.push(s.top());
                s.pop();
            }
            front = s1.top();
            s1.pop();
        }
        return front;
    }
    
    int peek() {
        if(s1.empty()==false)
          return s1.top();
        else{
             while(s.empty()==false)
            {
                s1.push(s.top());
                s.pop();
            }
            return s1.top();
        }
       
    }
    
    bool empty() {
      if(s.empty() && s1.empty() == true) return true;
    return false;
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