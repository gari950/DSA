class Solution {
public:
    double myPow(double x, int n) {
        long long int m=n;
        if(m<0)
            m*=-1;
        double res = power(x,m);
        if(n<0)
            return (double)1.0/res;
        return res;
    }
    
    double power(double x, int n){
        if(n<0){
            x = 1.0/x;
        }
        if(n==0)return 1.0;
        double ans = power(x,n/2);
         if(n%2!=0) return ans*ans*x;
        return ans*ans;
    }
};