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
    public int gcd(int a, int b){
        if(a == 1 || b == 1)return 1;
        if(a == b)return a;
        int mn = Math.min(a, b);
        int mx = Math.max(a, b);
        if(mx%mn == 0)return mn;
        return gcd(mn, mx%mn);
    }
    public ListNode insertGreatestCommonDivisors(ListNode head) {
        if(head == null || head.next == null)return head;
        ListNode fHead = head, sHead = head.next;
        while(sHead != null){
            int hcf = gcd(fHead.val, sHead.val);
            ListNode hcfNode = new ListNode(hcf);
            fHead.next = hcfNode;
            hcfNode.next = sHead;
            fHead = sHead;
            sHead = sHead.next;
        }
        return head;
    }
}
