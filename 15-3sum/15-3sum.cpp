class Solution {
public:
    vector<vector<int>> twoSum(vector<int>& nums, int si , int ei, int target) {
        
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
            
            int sum =nums[l] + nums[r];
            
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
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        //int targ = 0; 
        if (nums.size() < 3)
            return {};
       
        sort(nums.begin(), nums.end());
        for(int i=0;i<=nums.size()-2;i++)
        {
            if(i!=0 && nums[i]==nums[i-1]) continue;
            
            int target = 0 - nums[i];
            vector<vector<int>> subres = twoSum(nums , i + 1 , nums.size()-1, target);

        for(vector<int> list : subres)
        {
            list.push_back(nums[i]);
            res.push_back(list);
        }
        }
        return res;
    }
};