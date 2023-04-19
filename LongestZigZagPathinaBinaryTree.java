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
 https://leetcode.com/problems/longest-zigzag-path-in-a-binary-tree/description/
 */
class Solution {
    int ans = 0;
    public void helper(TreeNode root, int dir, int len){
        

        if(root == null)return;
        ans = Math.max(ans, len);
        if(dir == -1){
            helper(root.left, 1, len + 1);
            helper(root.right, -1, 1);
            return;
        }else{
            helper(root.right, -1, len + 1);
            helper(root.left, 1, 1);
        }


    }
    public int longestZigZag(TreeNode root) {
        helper(root, -1, 0);
        helper(root, 1, 0);
        return ans;
    }
}
