class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
         int minr = 0;
        int minc = 0;
        int maxr = n-1;
        int maxc = n-1;
        int total = n*n;
        int count = 0;
        int c = 1;
        vector<vector<int>> ans(n , vector<int>(n));
        
        while (count < total)
        {
            //top wall
            for(int i=minr,j=minc ;count < total && j<=maxc; j++ )
            {
                ans[i][j]= c++;
                count++;
            }
            minr++;
            
            //right wall
             for(int i=minr,j=maxc ;count < total && i<=maxr; i++ )
            {
                ans[i][j]= c++;
                count++;
            }
            maxc--;
            
            //bottom wall
            for(int i=maxr,j=maxc ;count < total && j>=minc; j-- )
            {
                ans[i][j]= c++;
                count++;
            }
            maxr--;
            
            //left wall
            for(int i=maxr,j=minc ;count < total && i>=minr; i-- )
            {
                ans[i][j] = c++;
                count++;
            }
            minc++;
        }
        return ans;
    }
    
};