class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int c=0;
        vector<vector<bool>> visited( m , vector<bool> (n));
        for(int i=0;i<m;i++ )
        {
            for(int j=0;j<n;j++ )
            {
            if(grid[i][j] =='1' && visited[i][j]==false)
            {
                dfs(grid,i,j,visited);
                c++;
            }
            }
        }
        return c;
    }
    
    void dfs(vector<vector<char>>& grid,int i,int j, vector<vector<bool>>& visited)
    {
        int m = grid.size();
        int n = grid[0].size();
        if(i<0 || j<0 || i>=m || j>=n || visited[i][j]==true || grid[i][j]=='0')
            return;
        
         visited[i][j]=true;
         dfs(grid,i-1,j,visited);//north
         dfs(grid,i+1,j,visited);//south
         dfs(grid,i,j-1,visited);//west
         dfs(grid,i ,j+1,visited);//east
       
    
    }
};