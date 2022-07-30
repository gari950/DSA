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
    int diameterOfBinaryTree(TreeNode* root) {
        int d = 0;
        edge_count(root,d);
        return d;
    }
    
    int edge_count(TreeNode* root, int& d){
        if(root == NULL) return 0;
        int left = edge_count(root->left,d);
        int right = edge_count(root->right,d);
        d = max(d,(left+right));
        return max(left,right)+1;
    }
};