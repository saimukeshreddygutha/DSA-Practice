# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if list1 is None or list2 is None:
            if list1 is None:
                return list2
            return list1
        temp1 = list1
        temp2 = list2
        new = ListNode()
        temp = new
        if temp1.val < temp2.val:
            temp.val = temp1.val
            temp1 = temp1.next
        else:
            temp.val = temp2.val
            temp2= temp2.next
        while (temp1 is not None) and (temp2 is not None):
            if temp1.val < temp2.val:
                n = ListNode(temp1.val)
                temp.next = n
                temp1 = temp1.next
            else:
                n = ListNode(temp2.val)
                temp.next = n
                temp2 = temp2.next
            temp = temp.next
            
        
        while temp1 is not None:
            n = ListNode(temp1.val)
            temp.next = n
            temp = temp.next
            temp1 = temp1.next
        
        while temp2 is not None:
            n = ListNode(temp2.val)
            temp.next = n
            temp = temp.next
            temp2 = temp2.next
        
        return new
                    
        
        
