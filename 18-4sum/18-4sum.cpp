class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long target) {
        vector<vector<int>> res;
        
        if(nums.size()<4)
            return res;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0; i <= nums.size()-4 ; i++)
        {
            if(i!=0 && nums[i]==nums[i-1])continue;
            
            int val= nums[i];
            vector<vector<int>> subres = threeSum(nums , i+1 , static_cast<long>(target)-val);

        for (vector<int> list : subres)
        {
            list.push_back(val);
            res.push_back(list);
        }
    }
        return res;
    }
    
    vector<vector<int>> threeSum(vector<int>& nums , int start , long targ) {
        vector<vector<int>> res;
         
        if (nums.size()-start < 3)
            return res;
     
        for(int i=start;i<=nums.size()-3;i++)
        {
            if(i!=start && nums[i]==nums[i-1]) continue;
            int val = nums[i];
            vector<vector<int>> subres = twoSum(nums , i + 1 , nums.size()-1, static_cast<long>(targ) - val);

        for(vector<int> list : subres)
        {
            list.push_back(val);
            res.push_back(list);
        }
        }
        return res;
    }
        
     vector<vector<int>> twoSum(vector<int>& nums, int si , int ei, long target) {
        int l= si;
        vector<vector<int>> ans;
        int r = ei;
        while(l<r)
        {
             if(l!=si && nums[l]==nums[l-1])
            {
                l++;
                continue;
            }
            
            int sum = nums[l] + nums[r];
            
             if(sum == target)
            {
                vector<int> subres;
                subres.push_back(nums[l]);
                subres.push_back(nums[r]);
                ans.push_back(subres);
                l++;
                r--;
                
            }
            else if(sum > target)
            {
                r--;
            }
            else
                l++;
        }
        return ans;
    }
    
};