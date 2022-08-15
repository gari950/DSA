/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode *ans;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        recurseTree(root,p,q);
        return ans;
    }
    bool recurseTree(TreeNode* curroot, TreeNode* p, TreeNode* q){
        if(curroot==NULL)
            return false;
        int left = recurseTree(curroot->left,p,q) ? 1 : 0;
        int right = recurseTree(curroot->right,p,q)? 1 : 0;
        int mid = (curroot == p || curroot == q) ? 1 : 0;
        
        if(mid + left + right >= 2)
            ans = curroot;
        return (mid + right + left > 0);
    }
};