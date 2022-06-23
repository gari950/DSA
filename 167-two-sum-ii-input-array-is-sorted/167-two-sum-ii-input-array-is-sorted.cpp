
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //sort(nums.begin(), nums.end());
        int l=0;
        vector<int> ans;
        int r= nums.size()-1;
        while(l<r)
        {
            int sum=0;
            sum =nums[l] + nums[r];
            if(l!=0 && nums[l]==nums[l-1])
            {
                l++;
                continue;
            }
            else if(sum == target)
            {
                ans.push_back(l+1);
                ans.push_back(r+1);
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