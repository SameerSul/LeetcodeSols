class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        # Edge case, for empty linked lists or single nodes
        if not head or not head.next:
            return

        # Step 1: Find Middle of Linked List
        def findMiddle():
            slow = fast = head
            while fast.next and fast.next.next:
                slow = slow.next
                fast = fast.next.next
            return slow

        # Step 2: Reverse second half of the linked list
        middle = findMiddle()
        second = middle.next
        middle.next = None  # Break the list into two halves, because remember the middle is always the last element, no point keeping them connected
        prev = None

        # separating them makes it easier to reverse the list
        while second:
            temp = second.next
            second.next = prev
            prev = second
            second = temp

        # Step 3: Merge the first half and reversed second half
        first = head # first LL
        second = prev
        while second:
            temp1, temp2 = first.next, second.next
            first.next = second
            second.next = temp1
            first, second = temp1, temp2 # progress thru LL's