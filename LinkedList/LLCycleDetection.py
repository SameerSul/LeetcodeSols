# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:

        # This involves fast and slow pointers
        fast = head
        slow = head

        while (fast and fast.next):
            fast = fast.next.next
            slow = slow.next

            if fast == slow:
                return True

        
        return False