long long int m=n;
if(m<0)
m*=-1;
double ans=rec(x,m);
if(n<0)
return (double)1.0/ans;
return ans;
if(n==1)
return x;
//anything to power 0 will become 1
if(n==0)
return 1;
//eg: 2^2 = 2* 2
if(n%2==0)
return rec(x*x,n/2);
//eg: 2^3 = 2*2^2 and 2^2 = 2*2
else
return x*rec(x*x,n/2);