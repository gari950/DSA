class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        HashMap<Integer,Integer> map = new HashMap<>();
         List<Integer> list=new ArrayList<Integer>(); 
        //int c=0;
        map.put(nums[0],1);
        for(int i=1 ; i< nums.length; i++)
        {
           
            if(map.containsKey(nums[i]))
            {
                
                list.add(nums[i]);
            }
            else
                 map.put(nums[i],1);
        }
      return list;  
    }
}