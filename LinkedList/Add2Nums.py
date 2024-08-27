# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        # can have 2 passes, one pass to calculate the sum, and then another to make the new linked list
        # calculate sum, multiply it by 10 as you add each index and add it to the total sum, after turn the total sum into a linked list
        # pass #1 calculate sum

        dummy = ListNode()
        curr = dummy

        carry = 0
        while (l1 or l2) or carry:
            val1 = l1.val if l1 else 0 # if l1 has a value we assign val1 to it
            val2 = l2.val if l2 else 0 # remember if None, then we assume 0, helps alot

            # Add new digit
            val = val1 + val2 + carry # think about our carry condition, if linked list ends, it'll be 0 + 0 + carry and we still do the math right

            carry = val // 10

            val = val % 10
            curr.next = ListNode(val)
            
            # Update Pointers
            
            curr = curr.next
            l1 = l1.next if l1 else None #continue through l1 if still there, otherwise dont, this is so convenient
            l2 = l2.next if l2 else None


        return dummy.next

    
    

