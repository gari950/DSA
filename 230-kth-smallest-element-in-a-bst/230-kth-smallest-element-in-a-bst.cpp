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
   void kth(TreeNode* root, int k,int &curr,int &ans) {
        if(root==NULL)
            return;
        if(root->left)
        kth(root->left,k,curr,ans);
        curr++;
        
        if(k==curr)
            {ans=root->val;
            return;} 
        if(root->right);
        {
            kth(root->right,k,curr,ans);
        }
    }
    
    //just do inorder and find kth nodes value
    int kthSmallest(TreeNode* root, int k) {
        int cur=0;
        int ans = -1;
        kth(root,k,cur,ans);
        return ans;
    }
};