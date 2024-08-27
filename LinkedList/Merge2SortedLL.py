# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:

        dummy = node = ListNode()
    
        while (list1 and list2): #while both lists aren't empty

            # same idea as on paper, except we need to consider that we are not indexing arrays but working with linked lists, making a new list

            if list1.val < list2.val:
                node.next = list1
                list1 = list1.next # iterate index
            
            else: # this accounts for both being equal case
                node.next = list2
                list2 = list2.next #iterate index since we are done
            node = node.next
        
        # else if one or both lists empty return this
        node.next = list1 or list2

        return dummy.next # this points to the head of the list, as dummy is the node before head usually
                



        
        