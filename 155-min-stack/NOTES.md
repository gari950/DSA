int top() {
return s.top();
}
int getMin() {
if(ss.size()==0)
return -1;
return ss.top();
}
};
```
​
**min stack with O(1)**
stack< long long int>s;
long long int min_ele=-1;
MinStack() {
}
void push(long long int val) {
if(s.size()==0)
{
s.push(val);
min_ele=val;
}
else if(val>=min_ele)
{
s.push(val);
}
else if(val<min_ele)
{
s.push(2*val-min_ele);
min_ele=val;
}
}
void pop() {
if(s.size()==0)
{
min_ele=-1;
return;
}