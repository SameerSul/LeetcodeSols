"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        
        # first thoughts is that this should take O(n) complexity, for both time and space, as we still need to make a new array, and we need to iterate
        # over the whole array (at least once) in order to do so

        oldToCopy = {None: None} #hashmap to store the values

        cur = head # copy head instance

        # start creating all the nodes
        while cur:
            copy = Node(cur.val)
            oldToCopy[cur] = copy
            cur = cur.next

        cur = head

        # now populate the random connections

        while cur:
            copy = oldToCopy[cur]
            copy.next = oldToCopy[cur.next]
            copy.random = oldToCopy[cur.random]
            cur = cur.next

        return oldToCopy[head]





            # need to make the deepcopy, possibly by initializing my own linked list instance

            # add element to it

            # move on to next node



            # we are going to return head.next as we are gonna make this with a dummy node