class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
           int pos=i;
            while(pos>0 && nums[pos]<nums[pos-1])
            { swap(nums[pos],nums[pos-1]);
              pos=pos-1;
            }
                      
        }
        //sort(nums.begin(),nums.end());
    }
};