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
    public boolean isSym(TreeNode l, TreeNode r){
        if(l == null && r == null)return true;

        if(l == null || r == null)return false;

        return l.val == r.val && isSym(l.left, r.right) && isSym(r.left, l.right);
    }
    public boolean isSymmetric(TreeNode root) {
        
        return isSym(root.left, root.right);
    }
}
