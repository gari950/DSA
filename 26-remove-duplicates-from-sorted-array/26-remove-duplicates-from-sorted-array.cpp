class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i < n-1 && nums[i] == nums[i+1] ){
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