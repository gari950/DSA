class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();++i)
        {
            for(int j=0;j<board[0].size();++j)
            {
                if(dfs(board,i,j,word,0))
                    return true;
                
            }
        }
        return false;
    }
    
     bool dfs(vector<vector<char>>& board, int i, int j, const string& word, int index)
     {
         if(index==word.size())
             return true;
         
         if(i<0 || j<0 || i>=board.size() || j>=board[0].size())
             return false;
         
         if(board[i][j] != word[index])
             return false;
         
         board[i][j] ='*';
         bool adjacentSearch = dfs(board,i-1,j,word,index+1) ||                                                          dfs(board,i+1,j,word,index+1) ||
                               dfs(board,i,j-1,word,index+1) ||
                               dfs(board,i,j+1,word,index+1) ;
         board[i][j] = word[index];
         return adjacentSearch;
     }
};