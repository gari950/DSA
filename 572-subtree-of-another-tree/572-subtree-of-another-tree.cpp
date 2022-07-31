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
    bool isSubtree(TreeNode* root, TreeNode* subroot) {

        if(!root)return false;
        
        if(sameTree(root,subroot))
            return true;
        return (isSubtree(root->left,subroot) || isSubtree(root->right,subroot));
    }
    
    bool sameTree(TreeNode* root, TreeNode* subroot){
        if (root == NULL && subroot == NULL)return true;
        
        if(!root  || !subroot)
            return false;
        
        if (root->val != subroot->val){
            return false;
        }
        
           return ((sameTree(root->left,subroot->left)) && (sameTree(root->right,subroot->right)));         
    }
};