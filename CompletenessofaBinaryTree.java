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
    public boolean isCompleteTree(TreeNode root) {
        
        if(root == null)return true;
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        while(q.peek() != null){
            TreeNode t = q.poll();
            q.add(t.left);
            q.add(t.right);
        }

        while(q.size() != 0 && q.peek() == null)q.poll();

        return q.size() == 0;
        
        
    }
}
