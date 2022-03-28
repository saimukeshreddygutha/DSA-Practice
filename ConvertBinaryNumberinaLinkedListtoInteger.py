# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def getDecimalValue(self, head: ListNode) -> int:
        num = -1
        while (head is not None) and (head.val is 0):
            head = head.next
        
        if head is None:
            return 0
        
        while head is not None:
            if head.val is 1:
                if num is -1:
                    num = 1
                else:
                    num = (num<<1)|1
            else:
                num = num<<1
            head = head.next
            
        return num
                
            
        
