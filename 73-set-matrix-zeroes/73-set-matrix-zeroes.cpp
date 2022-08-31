class Solution {
public:
    void dfs(int i,int j, int m, int n,vector<vector<int>>& mat,vector<vector<bool>>& vis){
        vis[i][j]= true;
        for(int row=0;row<m;row++)
        {
            if(mat[row][j]!=0){
                mat[row][j]=0;
                vis[row][j]=true;
            }
        }
        for(int col=0;col<n;col++){
            if(mat[i][col]!=0){
                mat[i][col]=0;
                vis[i][col]=true;
            }
        }
    }
    
    void setZeroes(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<bool>> vis(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0 && vis[i][j]==false)
                    dfs(i,j,m,n,mat,vis);
            }
        }
    }
};