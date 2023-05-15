/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {

    public int findLength(ListNode head){
        if(head == null)return 0;


        return 1 + findLength(head.next);
    }
    public ListNode swapNodes(ListNode head, int k) {
        
        int len = findLength(head);
        k = Math.min(k, len + 1 -k);
        ListNode p1 = head;
        ListNode p2 = head;
        k--;
        while(k-->0)p1 = p1.next;

        ListNode p3 = p1;
        p1 = p1.next;
        while(p1 != null){
            p1 = p1.next;
            p2 = p2.next;
        }

        int val = p3.val;
        p3.val = p2.val;
        p2.val = val;

        return head;

        
    }
}
