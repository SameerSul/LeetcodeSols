# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        dummy = ListNode(0, head)
        prev = dummy
        curr = head
        if head == None or head.next == None:
            return None
        
        # Traverse list to find the node, implement circular array transformation
        while n > 0: # make n shifts on right pointer
            curr = curr.next # keep going to find our node
            n -= 1

        # remove node and fix list
        while curr:
                prev = prev.next
                curr = curr.next

        # Skip over the removed node, this isn't a doubly linked list
        prev.next = prev.next.next 

        # return head
        
        return dummy.next  # Return the node we ended on





