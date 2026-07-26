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
    public ListNode mergelist(ListNode l1, ListNode l2){
        ListNode ptr = new ListNode(0);
        ListNode cur = ptr;
        while(l1 != null && l2 != null){
            if(l1.val <= l2.val){
                cur.next = l1;
                l1=l1.next;
            }
            else{
                cur.next = l2;
                l2 = l2.next;
            }
            cur = cur.next;
        }
        if(l1!=null){
            cur.next = l1;
            l1=l1.next;
        }
        if(l2 != null){
            cur.next = l2;
            l2=l2.next;
        }
        return ptr.next;
    }
    public ListNode sortList(ListNode head) {
        if(head == null || head.next == null)return head;
        ListNode temp = null;
        ListNode slow = head, fast = head;
        while(fast != null && fast.next != null){
            temp = slow;
            slow = slow.next;
            fast = fast.next.next;

        }
        temp.next = null;
        ListNode l1 = sortList(head);
        ListNode l2 = sortList(slow);

        return mergelist(l1,l2);

    }
}
