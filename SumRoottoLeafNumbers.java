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
    public int helper(TreeNode root, int s){
        
        s = s*10 + root.val;
        if(root.left == null && root.right == null)return s;


        if(root.left == null)return helper(root.right, s);
        if(root.right == null)return helper(root.left,s);
        return helper(root.left, s) + helper(root.right, s);
    }
    public int sumNumbers(TreeNode root) {
        return helper(root, 0);
    }
}
