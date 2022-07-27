class Solution {
public:
     vector<pair<int,int>> dir = {{1,-1},{1,0},{1,1},{0,-1},{0,1},{-1,-1},{-1,0},{-1,1}};
    
    bool check(int p, int q, vector<vector<int>>& board){
        return 0<=p && 0<=q && p<board.size() && q<board[0].size();
    }
    
    void gameOfLife(vector<vector<int>>& board) {
       int m = board.size(), n = board[0].size();    
       // vector<vector<int>> res(m , vector<int> (n, 0));
       
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int count = 0;
                for(pair<int,int> d : dir){
                    int p = i + d.first;
                    int q = j + d.second;
                
                if(check(p,q,board) && (board[p][q]==1 || board[p][q]==2))
                    count++;
            }
        // 2 = alive -> dead
        if(board[i][j]==1){
            
            if(count < 2 || count > 3){  //Over or Under population
                //res[i][j] = 1;
                board[i][j]=2;
            }
        }
            else{
                // 3 = dead -> alive
                if(count == 3){
                   // res[i][j] = 1;
                    board[i][j]=3;
                }
            }
       }
    }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                //board[i][j] = res[i][j];
                board[i][j]%=2;  // 1%2 == 1 || 3%2 == 1 -> alive
                                // 2%2 == 0 -> dead
            }
        }
    }
};