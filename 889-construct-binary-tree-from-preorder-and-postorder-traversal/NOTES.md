if(psi > pei){
return NULL;
}
TreeNode* root = new TreeNode(pre[psi]);
if(psi == pei){
return root;
}
int index = posi;
while(pre[psi + 1] != post[index]){
index++;
}
int count = index - posi + 1;
root->left = rec(psi + 1, psi + count, posi, index, pre, post);
root->right = rec(psi + count + 1, pei, index + 1, poei - 1, pre, post);
return root;
}