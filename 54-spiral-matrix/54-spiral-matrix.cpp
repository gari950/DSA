class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        int minr = 0;
        int minc = 0;
        int maxr = arr.size()-1;
        int maxc = arr[0].size()-1;
        int total = arr.size()*arr[0].size();
        int count = 0;
        vector<int> ans;
        
        while (count < total)
        {
            //top wall
            for(int i=minr,j=minc ;count < total && j<=maxc; j++ )
            {
                ans.push_back(arr[i][j]);
                count++;
            }
            minr++;
            
            //right wall
             for(int i=minr,j=maxc ;count < total && i<=maxr; i++ )
            {
                ans.push_back(arr[i][j]);
                count++;
            }
            maxc--;
            
            //bottom wall
            for(int i=maxr,j=maxc ;count < total && j>=minc; j-- )
            {
                ans.push_back(arr[i][j]);
                count++;
            }
            maxr--;
            
            //left wall
            for(int i=maxr,j=minc ;count < total && i>=minr; i-- )
            {
                ans.push_back(arr[i][j]);
                count++;
            }
            minc++;
        }
        return ans;
    }
};