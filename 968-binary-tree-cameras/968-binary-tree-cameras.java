/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */


class Solution {
    
     int camera=0;
    public int minCameraCover(TreeNode root) {
        if (min_Camera(root) == -1) 
            camera++;
        return camera;
        
    } 
    public int min_Camera(TreeNode root){
      if ( root==null)
          return 1;
        
      int left_child= min_Camera(root.left) ;
      int right_child= min_Camera(root.right);
        
      if (left_child == -1 || right_child == -1)
      {
          camera++;
          return 0;
      }
      if (left_child== 0 || right_child == 0)
          return 1;
      
      return -1;
  }
  
}