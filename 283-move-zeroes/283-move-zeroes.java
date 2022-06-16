class Solution {
    public void moveZeroes(int[] nums) {
        int n= nums.length;
        int non = 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
                nums[non++]=nums[i];
        }
        for(int i=non;i<n;i++)
            nums[i]=0;
    }
}