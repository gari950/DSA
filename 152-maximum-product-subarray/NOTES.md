int mxp=INT_MIN,p=1,n=arr.size();
for(int i=0;i<n;i++)
{
p*=arr[i];
mxp=max(mxp,p);
if(p==0)
{
p=1;
}
}
p=1;
for(int i=n-1;i>=0;i--)
{
p*=arr[i];
mxp=max(mxp,p);
if(p==0)
{
p=1;
}
}
return mxp;