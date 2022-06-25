#include <bits/stdc++.h>
#include <stack>
class Solution {
public:
      
    //NSR
        vector<int> nsr(vector<int>&arr){  
        stack<int> s1;
        s1.push(arr.size()-1);
        vector<int> right;        
            
        for(int i= arr.size()-1 ; i>=0 ;i--)
        {
            
            while(s1.size()>0 && arr[i] <= arr[s1.top()]) 
            {
             s1.pop();
            }
            if(s1.size()==0)
                right.push_back(arr.size());
             else
                 right.push_back(s1.top());
            
            s1.push(i);
        }
            reverse(right.begin(),right.end());
        return right;
        }
    
    //NSL
    vector<int> nsl(vector<int>&arr)
    {
        vector<int> left;
        stack<int> s1;
        s1.push(0);
        for(int i=0 ;i<arr.size() ; i++)
        {
            while(s1.size()>0 && arr[i] <= arr[s1.top()]) 
            {
             s1.pop();
            }
            if(s1.size()==0)
                left.push_back(-1);
             else
                 left.push_back(s1.top());
            
            s1.push(i);
        }
        return left;
    }  
    
    int largestRectangleArea(vector<int>& arr) {
        
        int maxarea=0;
        vector<int> right = nsr(arr);
        vector<int> left = nsl(arr);
        
        for(int i=0; i<arr.size() ; i++)
        {
          int width = right[i] - left[i] - 1;
          int area = arr[i] * width;
          maxarea = max(maxarea , area);
        }
        
    return maxarea;
    }
};