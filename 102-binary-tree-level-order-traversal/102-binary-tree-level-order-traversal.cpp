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
   vector<vector<int>> result;
    
    void visit(TreeNode* node, int level) {
        if (!node) {
            return;
        }
        
        if (result.size() < level + 1) {
            result.push_back({});
        }
        
        result[level].push_back(node->val);
        
        visit(node->left, level + 1);
        visit(node->right, level + 1);
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        visit(root, 0);
        
        return result;
    }
};