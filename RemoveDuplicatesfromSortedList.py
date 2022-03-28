# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None:
            return head;
        if head.next is None:
            return head
        
        temp = head
        head = head.next
        while head.next is not None:
            if head.val == head.next.val:
                head.next = head.next.next
            else:
                head = head.next
        if temp.val == temp.next.val:
            temp = temp.next
        return temp
            
            
        
