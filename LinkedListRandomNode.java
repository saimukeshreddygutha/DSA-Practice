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
    public ListNode h;
    public int s; 
    public Solution(ListNode head) {
        h = head;
        while(head != null){s++;head = head.next;}
    }
    
    public int getRandom() {
        Random rand = new Random();
        int r = rand.nextInt(s);
        ListNode th = h;
        while(r != 0){
            th = th.next;
            r--;
        }
        return th.val;
    }
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(head);
 * int param_1 = obj.getRandom();
 */
