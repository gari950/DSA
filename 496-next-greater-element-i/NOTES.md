class Solution {
public:
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
map<int,int> m;
stack<int> s;
for(int i=nums2.size()-1;i>=0;i--)
{
while(s.size()>0 && s.top()<=nums2[i])
{
s.pop();
}
if(s.size()==0)
m[nums2[i]]=-1;
else
m[nums2[i]]=s.top();
s.push(nums2[i]);
}
vector<int> ans;
for(auto n:nums1){
ans.push_back(m[n]);
}
return ans;
}
};