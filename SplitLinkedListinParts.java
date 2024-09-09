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
    public ListNode[] splitListToParts(ListNode head, int k) {
        ListNode[] ln = new ListNode[k];
        if(head == null)return ln;

        int len = 0;
        ListNode tHead = head;
        while(tHead != null){
            len++; tHead = tHead.next;
        }

        if(k >= len){
            for(int i = 0;i < len;i++){
                ln[i] = head;
                head = head.next;
                ln[i].next = null;
            }
            return ln;
        }

        int minElementsInOne = len/k;
        int plusOne = len%k;
        ListNode tHead2 = head;
        int lnIndex = 0;
        while(k != 0){
            int tMin = 0;
            ln[lnIndex++] = tHead2;
            while(tMin != minElementsInOne-1){
                tHead2 = tHead2.next;
                tMin++;
            }
            if(plusOne != 0){
                tHead2 = tHead2.next;
                plusOne--;
            }
            ListNode tt = tHead2.next;
            tHead2.next = null;
            tHead2 = tt;
            k--;
        }
        return ln;
    }
}
