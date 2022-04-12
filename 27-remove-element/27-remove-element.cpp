class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
        if(i<n && nums[i]==val)    {
            continue;
        }
            else{
                nums[c]=nums[i];
                c++;
            }
        }
        return c;
    }
};