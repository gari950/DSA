class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums;
        int i=0,j=0;        
        while(i+j<m+n){
           if(i==m)
            {
                nums.push_back(nums2[j]);
                j++;
            }
            else if(j==n)
            {
                nums.push_back(nums1[i]);
                i++;
            }
            else 
                if(nums1[i] <= nums2[j]){
                nums.push_back(nums1[i]);
                i++;
            }
            
            else if(nums1[i] > nums2[j]){
                nums.push_back(nums2[j]);
                j++;
            }
        }
        
        for(int k=0;k<nums.size();k++)
            swap(nums1[k],nums[k]);
    }
};