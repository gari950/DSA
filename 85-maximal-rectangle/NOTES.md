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
// finding Maximum histogram
int mah(vector<int>&arr)
{
int n=arr.size();
vector<int>v1;
v1=nsl(arr);
vector<int>v2;
v2=nsr(arr);
int maxi=0;
for(int i=0;i<n;i++)
{
maxi=max(maxi,(v2[i]-v1[i]-1)*arr[i]);
}
return maxi;
}
int maximalRectangle(vector<vector<char>>& matrix)
{
vector<int>arr(matrix[0].size(),0);
int maxi=0;
for(int i=0;i<matrix.size();i++)
{
for(int j=0;j<matrix[0].size();j++)
{
if(matrix[i][j]=='0')
arr[j]=0;
else
arr[j]=arr[j]+1;
}
maxi=max(maxi,mah(arr));
}
return maxi;
}
};