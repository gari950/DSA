/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int c=0;
    vector<int> res;
    
    int pathSum(TreeNode* root, int t) {
        getsum(root,t);
        return c;
    }
    
    void getsum(TreeNode* root, int t){
        if(!root)
            return;
        res.push_back(root->val);
        
        getsum(root->left,t);
        getsum(root->right,t);
        
        long long int temp=0;
        for(int i=res.size()-1;i>=0;i--){
            temp+=res[i];
            
            if(temp == t)
                c++;
        }
        res.pop_back();
    }
};