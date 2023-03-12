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
class CustomComparator implements Comparator<ListNode>{

    public int compare(ListNode a, ListNode b){
        return a.val - b.val;
    }
} 
class Solution {
    public ListNode mergeKLists(ListNode[] lists) {
        
        PriorityQueue<ListNode> minHeap = new PriorityQueue<ListNode>(new CustomComparator());
        int n = lists.length;
        ListNode h = new ListNode(-1);
        ListNode hp = h;
        for(int i = 0;i < n;i++)if(lists[i] != null)minHeap.add(lists[i]);

        while(minHeap.size() != 0){
            ListNode e = minHeap.poll();h.next = e;
            h = e;
            if(e.next != null)minHeap.add(e.next);
        }
        return hp.next;
    }
}
