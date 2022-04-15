class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int counter=0;
        sort(nums.begin(),nums.end());
            for(int j=0;j<nums.size()-1;j++)
            {
                if(nums[j]==nums[j+1])
                {
                    counter++;
                    return nums[j];
                     break;
                }
            }
            
          
        
        return -1;
    }
};