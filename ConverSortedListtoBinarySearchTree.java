/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public TreeNode sortedListToBST(ListNode head) {
        List<ListNode> list = getList(head);
        int lo = 0;
        int end = list.size()-1;
        
        return arraytoBST(list, lo, end);
        
    }
    
    
    TreeNode arraytoBST(List<ListNode> list, int start, int end){
        if (start > end) return null;
        
        if (start == end) return new TreeNode(list.get(start).val);
        int mi = start + (end - start) / 2;
        TreeNode root = new TreeNode(list.get(mi).val);
        root.left = arraytoBST(list, start, mi-1);
        root.right = arraytoBST(list, mi+1, end);
            
        return root;
    }
    
    List<ListNode> getList(ListNode head){
        List<ListNode> sorted = new ArrayList<>();
        
        while (head != null){
            sorted.add(head);
            head = head.next;
        }
        
        return sorted;
    }
}
