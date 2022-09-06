class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> list;
        if(intervals.size()<=1) return intervals;
        sort(intervals.begin(),intervals.end());
        list.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
          if(intervals[i][0] <= list.back()[1])
              list.back()[1] = max(intervals[i][1],list.back()[1]);
            else 
                list.push_back(intervals[i]);
        }
          return list;  
    }
};