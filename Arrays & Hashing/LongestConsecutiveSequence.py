class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:

        # obviously need for loop through array

        # need while loop to continously iterate, through it

        # sort array

        # nums.sort() # this is nlog(n) broski
        # print(nums)

        # lptr = 0

        # rptr = 0

        # lenSequence = 0
        # duplicates = 0
        # maxSize = 0

        # while rptr < len(nums):
        #     # is it apart of fthe sublist
        #     maxSize = max((rptr - lptr + 1), maxSize)
        #     if nums[rptr] - nums[(rptr - 1) % len(nums)] == 1:
        #         rptr += 1
            
        #     elif nums[rptr] == nums[(rptr - 1) % len(nums)]:
        #         duplicates += 1
        #         rptr += 1
        #         continue
            
        #     else:
        #         lptr = rptr
        #         rptr += 1

        # print(rptr)
        # print(lptr)
        # print(duplicates)
        # return(maxSize - duplicates)

        # ^ Silly nlogn solution

                
        s = set(nums) # remove duplicates
        maxSize = 0
        # check for left neighbours (numbers 1 smaller than current number)
        # if left neighbours exist, that means that that number is not the start of a sublist

        # otherwise, that number is the start of a sequence, and we can go ahead and start counting the consecutive numbers

        for num in nums:
            # if (s[num] - 1) in s:
            #     continue, this part can simply be replaced by just making it a not statement as it will account for the other

            if (num - 1) not in s:
                currSize = 0
                while (num + currSize) in s: # check for each consectuvie character, starting from num as currSize = 0 at first
                    currSize += 1
                    maxSize = max(currSize, maxSize)
        return maxSize


