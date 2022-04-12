#include<limits>
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cursum=0,maxsum=0;
        for(int i=0;i<nums.size();i++)
        {
            cursum+=nums[i];
            if(cursum>maxsum)
                maxsum=cursum;
            if(nums[i]==0)
                cursum=0;
                
        }
        return maxsum;
    }
};