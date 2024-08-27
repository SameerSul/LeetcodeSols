class Solution:
    def maxArea(self, heights: List[int]) -> int:

        # 2 pointers methodology

        # lptr and rptr, if lptr > rptr, get maxArea and decrement rptr, else get lptr < rptr, and increment lptr. even for == case, as it makes more sense
        # *** AMENDMENT, its better to decrement rptr in this case
        # index difference is size of window

        lptr = 0
        rptr = len(heights) - 1
        maxArea = 0

        while lptr < rptr:
            maxArea = max(maxArea,(min(heights[lptr],heights[rptr])*(rptr - lptr)))
        
            
            if heights[lptr] < heights[rptr]:
                lptr += 1
            
            elif heights[rptr] <= heights[lptr]:
                rptr -= 1
        
        return maxArea


            

        