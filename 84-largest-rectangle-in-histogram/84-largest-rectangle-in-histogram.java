class Solution {
    public int largestRectangleArea(int[] arr) {
        int[] left = new int[arr.length];
        Stack <Integer> s= new Stack<>();
        s.push(0);
        for(int i= 0; i< arr.length ;i++)
        {
            
            while(s.size()>0 && arr[i] <= arr[s.peek()]) 
            {
             s.pop() ;
            }
            if(s.size()==0)
                left[i] = -1;
             else
                 left[i]= s.peek();
            
            s.push(i);
        }
        
        s = new Stack<>();
        s.push(arr.length-1);
         int[] right = new int[arr.length];
         for(int i=arr.length-1 ; i>=0 ;i--)
        {
            
            while(s.size()>0 && arr[i] <= arr[s.peek()]) 
            {
             s.pop() ;
            }
            if(s.size()==0)
                right[i] = arr.length;
             else
                 right[i] = s.peek();
            
            s.push(i);
        }
        
        int maxarea=0;
        for(int i= 0; i< arr.length ;i++)
        {
        int width = right[i] - left[i] -1;
        int area = arr[i] * width;
            if(area > maxarea)
                maxarea = area;
            
        }
        return maxarea;
    }
}