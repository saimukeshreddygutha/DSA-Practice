// import java.util.Arrays;
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
    int[] ans = new int[10000];
    int maxLevel = -1;
    
    public void preOrder(TreeNode cur, int level){
        if(cur == null)return;
        maxLevel = Math.max(level, maxLevel);
        ans[level] = Math.max(ans[level], cur.val);
        if(cur.left != null)
            preOrder(cur.left, level + 1);
        if(cur.right != null)
            preOrder(cur.right, level + 1);
    }
    public List<Integer> largestValues(TreeNode root) {
        Arrays.fill(ans, Integer.MIN_VALUE);
        preOrder(root, 0);
        // System.out.println(maxLevel);

        List<Integer> res = new ArrayList<Integer>();
        for(int i = 0;i <= maxLevel;i++)res.add(ans[i]);
        return res;

    }
}
