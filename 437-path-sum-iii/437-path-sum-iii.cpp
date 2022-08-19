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
     void pathSumHelper(TreeNode* root, int targetSum, long long currSum, int& count){
        if (root == NULL){
            return;
        }
        if (targetSum == currSum + root->val){
            count++;
        }
        pathSumHelper(root->left, targetSum, currSum+root->val, count);
        pathSumHelper(root->right, targetSum, currSum+ root->val, count);
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        if (root == NULL){
            return 0;
        }
        int currPaths = 0;
        pathSumHelper(root, targetSum, 0, currPaths);
        int leftPaths = pathSum(root->left, targetSum);
        int rightPaths =  pathSum(root->right, targetSum);
        return currPaths + leftPaths + rightPaths;
        
    }
};