class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:

        # we can accomplish this is O(n^2) time or T: O(n) M: O(n)

        maxArea = 0
        stack = [] #pair (index, height)

        for i, h in enumerate(heights):
            start = i
            while stack and stack[-1][1] > h: # is top values height greater than the height we just reached and is it not empty
                index, height = stack.pop()
                maxArea = max(maxArea, height*(i - index))
                start = index
            stack.append((start,h))

        for i, h in stack:
            maxArea = max(maxArea, h * (len(heights)- i))
        
        return maxArea
   

