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
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        return construct(0,pre.size()-1,0,post.size()-1,pre,post);
    }
    
    TreeNode* construct(int ps,int pe,int pos,int poe,vector<int>& pre, vector<int>& post){
        if(ps>pe)
            return NULL;
        TreeNode* root = new TreeNode(pre[ps]);
        if(ps==pe)
            return root;
        
        int index = pos;
        
        while(pre[ps+1] != post[index])
            index++;
        
        int count = index-pos+1;
        root->left = construct(ps+1,ps+count,pos,index,pre,post);
        root->right = construct(ps+count+1,pe,index+1,poe-1,pre,post);
        return root;
    }
};