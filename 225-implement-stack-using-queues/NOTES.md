int pop() {
int top = q1.front();
q1.pop();
return top;
}
int top() {
return q1.front();
q1.pop();
}
bool empty() {
return q1.empty();
}
};
​
/**
* Your MyStack object will be instantiated and called as such:
* MyStack* obj = new MyStack();
* obj->push(x);
* int param_2 = obj->pop();
* int param_3 = obj->top();
* bool param_4 = obj->empty();
*/
```