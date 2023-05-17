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

    ListNode reverse(ListNode head){
        if(head == null || head.next == null)return head;

        ListNode newHead = reverse(head.next);
        head.next.next = head;
        head.next = null;
        return newHead;
    }
    public int pairSum(ListNode head) {
        
        ListNode fastPointer = head;
        ListNode slowPointer = head;

        while(fastPointer != null){
            fastPointer = fastPointer.next.next;
            slowPointer = slowPointer.next;
        }

        ListNode start = head;

        ListNode revHead = reverse(slowPointer);
        ListNode th = revHead;
        while(th != null){
            System.out.println(th.val);
            th = th.next;
        }

        int mx = 0;
        while(revHead != null){
            mx = Math.max(mx, revHead.val + start.val);
            revHead = revHead.next;
            start = start.next;
        }

        return mx;
    }
}
