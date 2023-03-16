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
    public static int ind;
    public int search(int[] in, int t){
        for(int i = 0;i < in.length;i++)if(in[i] == t)return i;
        return -1;
    }
    public TreeNode constructBST(int[] inorder, int[] postorder, int l, int h){

        if(l>h)return null;
        int val = postorder[ind--];
        TreeNode root = new TreeNode();
        int pos = search(inorder, val);
        root.val=val;
        root.right = constructBST(inorder, postorder, pos+1, h);
        root.left = constructBST(inorder, postorder, l, pos-1);

        
        return root;
    }
    public TreeNode buildTree(int[] inorder, int[] postorder) {
        
        ind = postorder.length-1;
        return constructBST(inorder, postorder, 0, ind);

    }
}
