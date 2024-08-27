class Solution:
    def findDuplicate(self, nums: List[int]) -> int:

        # Right off the bat, I see a solution that involves using O(n) memory, so I'm going to do that first

        # I will make a dictionary and store the values in as I get them, at the end, whichever has more than 1 int he dictionary will be returned
        
        # this involves fast and slow pointers

        # might need to use modulo operator to fix this fr
        
        n = len(nums)

        fast = 0

        slow = 0

        while True:
            fast = (fast + 2) % n
            slow = (slow + 1) % n

            if nums[fast] == nums[slow]:
                return nums[fast]
            


            


