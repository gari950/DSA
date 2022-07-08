class Solution {
public:
    
    bool inside(int new_row , int new_col, vector<vector<char>>& grid)
        {
            return 0 <= new_row  && new_row < grid.size() && 0 <= new_col && new_col < grid[0].size();

        }
    
    int numIslands(vector<vector<char>>& grid) {
       if( grid.empty() || grid[0].empty())
           return 0;
        
        int m = grid.size();
        int n = grid[0].size();
        int c=0;
        
        vector<pair<int,int>> direction = {{1,0},{0,1},{-1,0},{0,-1}};
        vector<vector<bool>> vis( m , vector<bool> (n));
        for(int i=0;i<m;i++ )
        {
            for(int j=0;j<n;j++ )
            {
            if(grid[i][j] =='1' && !vis[i][j])
            {
                c++;
                queue<pair<int,int>> q;
                q.push({i,j});
                vis[i][j]=true;
                
                while(!q.empty())
                {
                    pair<int,int> p = q.front();
                    q.pop();
                    for(pair<int,int> dir : direction)
                    {
                        int new_row = p.first + dir.first;
                        int new_col = p.second + dir.second;
                        if(inside(new_row,new_col,grid) && !vis[new_row][new_col] && grid[new_row][new_col]=='1')
                        {
                            q.push({new_row,new_col});
                            vis[new_row][new_col]=true;
                        }
                    }
                }
            }
        }
     }
     return c;   
        
    }
};