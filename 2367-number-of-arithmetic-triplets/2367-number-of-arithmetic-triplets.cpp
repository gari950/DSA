class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size()-1;j++){
                if(nums[j] - nums[i] == diff){
                    int k =j+1;
                    for(int k=j+1;k<nums.size();k++){
                    if(nums[k] - nums[j] == diff){
                        c++;
                    }
                    }
                }
            }
        }
        return c;
    }
};