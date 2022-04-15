class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int x=1;x<nums.size();x++)
            nums[0]^=nums[x];
        return nums[0];
    }
};