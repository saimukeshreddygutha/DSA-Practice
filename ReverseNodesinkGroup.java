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

    public ListNode getKthNode(ListNode cur, int k){

        while(cur != null && k > 0){cur = cur.next;k--;}
        return cur;
    }
    public ListNode reverseKGroup(ListNode head, int k) {
        

        ListNode dummy = new ListNode(-1);
        dummy.next = head;

        ListNode groupPrev = dummy;

        while(true){
            ListNode kth = getKthNode(groupPrev, k);
            if(kth == null)break;
            ListNode groupNext = kth.next;
            ListNode cur = groupPrev.next;
            ListNode prev = kth.next;
            while(cur != groupNext){
                ListNode temp = cur.next;
                cur.next = prev;
                prev = cur;
                cur = temp;
            }

            ListNode temp = groupPrev.next;
            groupPrev.next = kth;
            groupPrev = temp;
        }

        return  dummy.next;
    }
}
