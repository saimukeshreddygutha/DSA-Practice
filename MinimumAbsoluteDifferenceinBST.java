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
    TreeNode prev = null;
    int ans = Integer.MAX_VALUE;

    public void inOrder(TreeNode root){
        if(root == null)return;

        inOrder(root.left);
        if(prev != null){ans = Math.min(root.val - prev.val, ans);}
        prev = root;
        inOrder(root.right);
    }
    public int getMinimumDifference(TreeNode root) {
        
        inOrder(root);
        return ans;

    }
}
