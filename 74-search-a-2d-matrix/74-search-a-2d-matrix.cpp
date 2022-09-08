class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size(), c = matrix[0].size();
        int row = 0, col = c-1;
        while(row<r && col>-1){
            int cur = matrix[row][col];
            if(cur == target) return true;
            if(target > cur) row++;
            else
                col--;
        }
        return false;
    }
};