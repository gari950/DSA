class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i = 0,dup=0;
        while(i<nums.size()){
            if(nums[i] != nums[nums[i]-1])
                swap(nums[i],nums[nums[i]-1]);
            else
                i++;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] != i+1)
                dup=nums[i];
        }
        return dup;
    }
};