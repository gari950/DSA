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
    int ans=0;int c=0;
    int kthSmallest(TreeNode* root, int k) {
        inorder(root,ans,k);
        return ans;
    }
    void inorder(TreeNode* root, int& ans, int k){
        
        if(!root)return;
        if(root->left)
            inorder(root->left,ans,k);
            c++;
        
        if(c==k){
            ans = root->val;
            return;
        }
        if(root->right){
            inorder(root->right,ans,k);
        }
    }
};