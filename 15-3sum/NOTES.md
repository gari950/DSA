class Solution {
public:
vector<vector<int>> threeSum(vector<int>& nums) {
sort(nums.begin() , nums.end());
vector<vector<int>> ans;
unordered_map<int,int> map;
if(nums.size() < 3){
return {};
}
if(nums[0] > 0){
return {};
}
for(int i=0 ; i<nums.size() ; i++)
map[nums[i]]=i;
for(int i=0 ; i<nums.size()-2 ; i++)
{
for(int j=i+1 ; j<nums.size()-1 ; j++)
{
int required = -1*(nums[i]+nums[j]);
if(map.count(required) && map.find(required)->second > j)
{
ans.push_back({nums[i],nums[j],required});
}
j = map.find(nums[j])->second;
}
i = map.find(nums[i])->second;
}
return ans;
}
};