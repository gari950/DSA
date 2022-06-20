class Solution {
public:
    int trap(vector<int>& arr) {
        int size = arr.size();
        vector<int> mxl;
        mxl.push_back(arr[0]);
        vector<int> mxr;
        mxr.push_back(arr[size -1]);
        
        for(int i=1 ; i < size ;i++)
        {
            mxl.push_back(max(mxl[i-1] , arr[i]));
            mxr.push_back(max(mxr[i-1],arr[size-1-i]));
        }
       
         reverse(mxr.begin(), mxr.end());
        
        /*
        for(int i = size -2 ;i>=0 ; i-- )
        {
            mxr[i]= max(mxr[i+1],arr[i]);
        }
        */
        
       // vector<int>water(size);
        int sum=0;
        for(int i=0;i<size;i++)
        {
            sum+=min(mxr[i] , mxl[i]) - arr[i];
            
        }
        return sum;
    }
};