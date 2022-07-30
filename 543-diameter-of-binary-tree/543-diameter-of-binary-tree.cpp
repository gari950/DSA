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
    int d = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        edge_count(root);
        return d;
    }
    
    int edge_count(TreeNode* root){
        if(root == NULL) return 0;
        int left = edge_count(root->left);
        int right = edge_count(root->right);
        d = max(d,(left+right));
        return max(left,right)+1;
    }
};