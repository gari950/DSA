class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int l = 0, r = nums.size()-1 ,c = 0;
        mergesort(nums , l , r, c);
        return c;
    }
    
    void mergesort(vector<int>& nums , int left, int right, int& c)
    {
        if(left<right)
        {
           int mid = (right + left)/2;
            mergesort(nums, left , mid, c);
            mergesort(nums, mid+1, right, c);
            merge(nums,left,mid,right,c);
        }
    }
    
    void merge(vector<int>& nums, int left, int mid,int right, int& c)
    {
        int i = left, j = mid+1;
        while(i<=mid && j<=right)
        {
            if(nums[i] > 2*1ll*nums[j])
            {
                c+=(mid+1-i);
                j++;
            }
            else
                i++;
        }
        
        sort(nums.begin()+left,nums.begin()+right+1);//quick sort nlogn
        
    }
};