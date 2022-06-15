class Solution {
    public int removeDuplicates(int[] nums) {
        int n=nums.length;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if( i<n-1 && nums[i]==nums[i+1])
                continue;
            else
            {
                nums[c]=nums[i];
                c++;
            }
        }
        return c;
    }
}