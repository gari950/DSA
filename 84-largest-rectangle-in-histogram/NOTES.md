vector<int> nsl(vector<int>&arr)
{
int n=arr.size();
vector<int>res;
stack<int>s;
for(int i=0;i<n;i++)
{
while(1)
{
if(s.empty() || arr[s.top()]<arr[i])
break;
s.pop();
}
if(s.empty()==true)
res.push_back(-1);
else if(arr[s.top()]<arr[i])
res.push_back(s.top());
s.push(i);
}
return res;
}
vector<int> nsr(vector<int>&arr)
{
vector<int>res;
stack<int>s;
int n=arr.size();
for(int i=n-1;i>=0;i--)
{
while(1)
{
if(s.empty() || arr[s.top()]<arr[i])
break;
s.pop();
}
if(s.empty()==true)
res.push_back(n);
else if(arr[s.top()]<arr[i])
res.push_back(s.top());
s.push(i);
}
reverse(res.begin(),res.end());
return res;
}
int largestRectangleArea(vector<int>&arr)
{
int n=arr.size();