class Solution {
    public void sortColors(int[] nums) {
        int n=nums.length;
        for(int i=0;i<n;i++)
        {
            
            int minpos=i;
            for(int j=i;j<n;j++)
            {
                if(nums[j]<nums[minpos])
                    minpos=j;
            }
            int temp=nums[i];
            nums[i]=nums[minpos];
            nums[minpos]=temp;
        }
    }
}